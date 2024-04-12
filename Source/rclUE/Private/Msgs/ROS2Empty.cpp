// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Empty.msg - do not modify

#include "Msgs/ROS2Empty.h"

#include "Kismet/GameplayStatics.h"

void UROS2EmptyMsg::Init()
{
    example_interfaces__msg__Empty__init(&empty_msg);
}

void UROS2EmptyMsg::Fini()
{
    example_interfaces__msg__Empty__fini(&empty_msg);
}

const rosidl_message_type_support_t* UROS2EmptyMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Empty);
}

void UROS2EmptyMsg::SetMsg(const FROSEmpty& Inputs)
{
    Inputs.SetROS2(empty_msg);
}

void UROS2EmptyMsg::GetMsg(FROSEmpty& Outputs) const
{
    Outputs.SetFromROS2(empty_msg);
}

void* UROS2EmptyMsg::Get()
{
    return &empty_msg;
}

FString UROS2EmptyMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
