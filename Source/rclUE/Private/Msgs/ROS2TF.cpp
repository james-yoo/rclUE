// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Transform.msg - do not modify

#include "Msgs/ROS2TF.h"

#include "Kismet/GameplayStatics.h"

void UROS2TFMsg::Init()
{
    geometry_msgs__msg__Transform__init(&transform_msg);
}

void UROS2TFMsg::Fini()
{
    geometry_msgs__msg__Transform__fini(&transform_msg);
}

const rosidl_message_type_support_t* UROS2TFMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Transform);
}

void UROS2TFMsg::SetMsg(const FROSTF& Inputs)
{
    Inputs.SetROS2(transform_msg);
}

void UROS2TFMsg::GetMsg(FROSTF& Outputs) const
{
    Outputs.SetFromROS2(transform_msg);
}

void* UROS2TFMsg::Get()
{
    return &transform_msg;
}

FString UROS2TFMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
