// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Pose.msg - do not
// modify

#include "Msgs/ROS2Pose.h"

#include "Kismet/GameplayStatics.h"

void UROS2PoseMsg::Init()
{
    geometry_msgs__msg__Pose__init(&pose_msg);
}

void UROS2PoseMsg::Fini()
{
    geometry_msgs__msg__Pose__fini(&pose_msg);
}

const rosidl_message_type_support_t* UROS2PoseMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Pose);
}

void UROS2PoseMsg::SetMsg(const FROSPose& Inputs)
{
    Inputs.SetROS2(pose_msg);
}

void UROS2PoseMsg::GetMsg(FROSPose& Outputs) const
{
    Outputs.SetFromROS2(pose_msg);
}

void* UROS2PoseMsg::Get()
{
    return &pose_msg;
}

FString UROS2PoseMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
