// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Point32.msg - do not
// modify

#include "Msgs/ROS2Point32.h"

#include "Kismet/GameplayStatics.h"

void UROS2Point32Msg::Init()
{
    geometry_msgs__msg__Point32__init(&point32_msg);
}

void UROS2Point32Msg::Fini()
{
    geometry_msgs__msg__Point32__fini(&point32_msg);
}

const rosidl_message_type_support_t* UROS2Point32Msg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Point32);
}

void UROS2Point32Msg::SetMsg(const FROSPoint32& Inputs)
{
    Inputs.SetROS2(point32_msg);
}

void UROS2Point32Msg::GetMsg(FROSPoint32& Outputs) const
{
    Outputs.SetFromROS2(point32_msg);
}

void* UROS2Point32Msg::Get()
{
    return &point32_msg;
}

FString UROS2Point32Msg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
