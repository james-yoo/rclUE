#!/usr/bin/env python3
'''
How to update ros:

- Install 'ros2' (foxy) (until section 'Build the code in the workspace') https://docs.ros.org/en/foxy/Installation/Ubuntu-Development-Setup.html
- Reinstall python package due to issues https://github.com/ros-visualization/qt_gui_core/issues/212:
sudo apt remove shiboken2 libshiboken2-dev libshiboken2-py3-5.14
pip3 install --user shiboken2
- Make replacement for ros2 to avoid LD_LIBRARY_PATH dependency issue:
src/ros2/rcpputils/src/find_library.cpp:
in function find_library_path():
---//return "";
+++return "lib" + library_name + ".so";
- Clone 'rclc' package (which is not a part of official ros2), branch 'foxy' https://github.com/ros2/rclc/tree/foxy
- Clone 'ue_msgs' (RR project) https://github.com/rapyuta-robotics/UE_msgs
- Run this script with providing main path arguments, for example:
python3 update_ros.py /home/vilkun/UE/UnrealEngine /home/vilkun/ros2_foxy /home/vilkun/work/build_foxy/rclc /home/vilkun/work/build_foxy/UE_msgs /home/vilkun/work/turtlebot3-UE

Notes:
- 304 packages finished, 1 'rviz_ogre_vendor' error, 6 packages not processed at the end of the ros-foxy build - is okay. Also 1 'Failed to find ROS1', and several 'connext' errors, and 'rviz' errors during 'local_setup.bash' - are okay too.
- we rename SONAME of libs with version by 'patchelf' since UE4.27 can't deal with that in LinuxToolChain.cs, see more in RenameLibsWithVersion().
- script uses project path (which includes this plugin) just to invalidate binaries, and forces IDE to clean cache and link them again.
'''

import os, sys, shutil, re, time, subprocess
from libs_utils import *

# Main arguments:
UE = sys.argv[1]
ros = sys.argv[2]
rclc = sys.argv[3]
ue_msgs = sys.argv[4]
projectPath = sys.argv[5]
# 'rcl' will include 'rclc'
allowed_spaces = [ \
    'action_msgs', \
    'builtin_interfaces', \
    'example_interfaces', \
    'fastcdr', \
    'fastrtps', \
    'geometry_msgs', \
    'nav_msgs', \
    'rcl', \
    'rcutils', \
    'rcpputils', \
    'rmw', \
    'rosgraph_msgs', \
    'rosidl', \
    'sensor_msgs', \
    'std_msgs', \
    'tf2_msgs', \
    'tracetools', \
    'unique_identifier_msgs' ]
rr_spaces = ['ue_msgs']
allowed_spaces.extend(rr_spaces)
not_allowed_spaces = [ \
    '.so.', \
    'python', \
    'rclcpp', 
    'rclpy', 
    'rcl_logging_log4cxx', \
    'rcl_logging_noop', \
    'rclc_examples', \
    'rclc_parameter', \
    'connext', \
    'cyclonedds', \
    'action_tutorials', \
    'actionlib_msgs', \
    'composition_interfaces', \
    'diagnostic_msgs', \
    'lifecycle_msgs', \
    'logging_demo', \
    'map_msgs', \
    'move_base_msgs', \
    'pendulum_msgs', \
    'shape_msgs', \
    'statistics_msgs', \
    'std_srvs', \
    'stereo_msgs', \
    'test_msgs', \
    'trajectory_msgs', \
    'visualization_msgs', \
    'turtlesim', \
    'rmw_fastrtps_dynamic_cpp', \
    'rosidl_cmake', \
    'rosidl_default', \
    'rosidl_generator_cpp', \
    'rosidl_generator_dds_idl', \
    'rosidl_generator_py', \
    'rosidl_runtime_cpp', \
    'rosidl_runtime_py', \
    'sensor_msgs_py', \
    'tf2_sensor_msgs', \
    'tracetools_', \
    'Codec_', \
    'Plugin_', \
    'RenderSystem_', \
    '_test_type_support']

rclUE =  projectPath + '/Plugins/rclUE'
buildRosScript = rclUE + '/Scripts/build_ros_libs.sh'
rclUEBinaries = rclUE + '/Binaries'
rclUERos = rclUE + '/Source/ThirdParty/ros'
rclUERosInclude = rclUERos + '/include'
rclUERosLib = rclUERos + '/lib'
rclUEBuildCS =  rclUE + '/Source/rclUE/rclUE.Build.cs'
projectPathBinaries = projectPath + '/Binaries' 
infoRosOutput = rclUE + '/Scripts/info_ros'

# autogenerated folders
renamedSuffix = '_renamed'
rosBuild  = ros + '/build'
rosInstall  = ros + '/install'
rclcBuild = rclc + '/build'
rclcInstall = rclc + '/install'
ue_msgsBuild = ue_msgs + '/build'
ue_msgsInstall = ue_msgs + '/install'

if __name__ == '__main__':
    start = time.time()
    
    print('Building ros...')
    os.system('chmod +x ' + buildRosScript)
    os.system('bash ' + buildRosScript + ' ' + UE + ' ' + ros + ' ' + rclc + ' ' + ue_msgs)

    # to be sure that we don't use libraries from this paths:
    rosBuild = RenameDir(rosBuild, renamedSuffix)
    rosInstall = RenameDir(rosInstall, renamedSuffix)
    rclcBuild = RenameDir(rclcBuild, renamedSuffix)
    rclcInstall = RenameDir(rclcInstall, renamedSuffix)
    ue_msgsBuild = RenameDir(ue_msgsBuild, renamedSuffix)
    ue_msgsInstall = RenameDir(ue_msgsInstall, renamedSuffix)

    # See more comments inside function description
    if os.path.isdir(rclUERos):
        shutil.rmtree(rclUERos)
        
    os.makedirs(rclUERosInclude)
    os.makedirs(rclUERosLib)

    print('Grabbing includes...')
    GrabIncludes(rosInstall, rclUERosInclude, allowed_spaces)
    GrabIncludes(rclcInstall, rclUERosInclude, allowed_spaces)
    GrabIncludes(ue_msgsInstall, rclUERosInclude, allowed_spaces)
    CleanIncludes(rclUERosInclude, not_allowed_spaces)

    print('Applying includes patch...')
    os.system('cd .. ; git apply Scripts/ros.patch')

    print('Grabbing libs...')
    GrabLibs(rosBuild, rclUERosLib, allowed_spaces)
    GrabLibs(rclcBuild, rclUERosLib, allowed_spaces)
    GrabLibs(ue_msgsBuild, rclUERosLib, allowed_spaces)
    CleanLibs(rclUERosLib, not_allowed_spaces)

    RenameLibsWithVersion(rclUERosLib)
    SetRPATH(rclUERosLib)
    InvalidateBinaries(projectPathBinaries, rclUEBinaries, rclUEBuildCS)

    # You also can try this:
    # CreateInfoForAll('objdump -x', rclUERosLib, infoRosOutput) # see also 'ldd'
    # CheckLibs(rclUERosLib)
    print('Done. Time:', '{:.2f}'.format(time.time() - start), '(sec)')