// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerPose.msg - do not modify

#include "Msgs/ROS2IMPose.h"

#include "Kismet/GameplayStatics.h"



void UROS2IMPoseMsg::Init()
{
	visualization_msgs__msg__InteractiveMarkerPose__init(&interactive_marker_pose_msg);
}

void UROS2IMPoseMsg::Fini()
{
	visualization_msgs__msg__InteractiveMarkerPose__fini(&interactive_marker_pose_msg);
}

const rosidl_message_type_support_t* UROS2IMPoseMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(visualization_msgs, msg, InteractiveMarkerPose);
}

void UROS2IMPoseMsg::SetMsg(const FROSIMPose& Inputs)
{
    Inputs.SetROS2(interactive_marker_pose_msg);
}

void UROS2IMPoseMsg::GetMsg(FROSIMPose& Outputs) const
{
    Outputs.SetFromROS2(interactive_marker_pose_msg);
}

void* UROS2IMPoseMsg::Get()
{
	return &interactive_marker_pose_msg;
}

FString UROS2IMPoseMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}