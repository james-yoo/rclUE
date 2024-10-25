// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from trajectory_msgs/msg/MultiDOFJointTrajectory.msg - do not modify

#include "Msgs/ROS2MultiDOFJointTraj.h"

#include "Kismet/GameplayStatics.h"



void UROS2MultiDOFJointTrajMsg::Init()
{
	trajectory_msgs__msg__MultiDOFJointTrajectory__init(&multi_dof_joint_trajectory_msg);
}

void UROS2MultiDOFJointTrajMsg::Fini()
{
	trajectory_msgs__msg__MultiDOFJointTrajectory__fini(&multi_dof_joint_trajectory_msg);
}

const rosidl_message_type_support_t* UROS2MultiDOFJointTrajMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(trajectory_msgs, msg, MultiDOFJointTrajectory);
}

void UROS2MultiDOFJointTrajMsg::SetMsg(const FROSMultiDOFJointTraj& Inputs)
{
    Inputs.SetROS2(multi_dof_joint_trajectory_msg);
}

void UROS2MultiDOFJointTrajMsg::GetMsg(FROSMultiDOFJointTraj& Outputs) const
{
    Outputs.SetFromROS2(multi_dof_joint_trajectory_msg);
}

void* UROS2MultiDOFJointTrajMsg::Get()
{
	return &multi_dof_joint_trajectory_msg;
}

FString UROS2MultiDOFJointTrajMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}