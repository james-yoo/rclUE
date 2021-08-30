// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/PoseWithCovariance.msg - do not modify

#include "Msgs/ROS2PoseWithCovarianceMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2PoseWithCovarianceMsg::Init()
{
	geometry_msgs__msg__PoseWithCovariance__init(&pose_with_covariance_msg);
}

void UROS2PoseWithCovarianceMsg::Fini()
{
	geometry_msgs__msg__PoseWithCovariance__fini(&pose_with_covariance_msg);
}

const rosidl_message_type_support_t* UROS2PoseWithCovarianceMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PoseWithCovariance);
}

void UROS2PoseWithCovarianceMsg::SetMsg(const FROSPoseWithCovariance& Inputs)
{
    Inputs.SetROS2(pose_with_covariance_msg);
}

void UROS2PoseWithCovarianceMsg::GetMsg(FROSPoseWithCovariance& Outputs) const
{
    Outputs.SetFromROS2(pose_with_covariance_msg);
}

void* UROS2PoseWithCovarianceMsg::Get()
{
	return &pose_with_covariance_msg;
}

FString UROS2PoseWithCovarianceMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}