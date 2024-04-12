// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/TransformStamped.msg - do not modify

#include "Msgs/ROS2TFStamped.h"

#include "Kismet/GameplayStatics.h"

void UROS2TFStampedMsg::Init()
{
    geometry_msgs__msg__TransformStamped__init(&transform_stamped_msg);
}

void UROS2TFStampedMsg::Fini()
{
    geometry_msgs__msg__TransformStamped__fini(&transform_stamped_msg);
}

const rosidl_message_type_support_t* UROS2TFStampedMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, TransformStamped);
}

void UROS2TFStampedMsg::SetMsg(const FROSTFStamped& Inputs)
{
    Inputs.SetROS2(transform_stamped_msg);
}

void UROS2TFStampedMsg::GetMsg(FROSTFStamped& Outputs) const
{
    Outputs.SetFromROS2(transform_stamped_msg);
}

void* UROS2TFStampedMsg::Get()
{
    return &transform_stamped_msg;
}

FString UROS2TFStampedMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
