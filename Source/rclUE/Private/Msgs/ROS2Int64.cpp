// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int64.msg - do
// not modify

#include "Msgs/ROS2Int64.h"

#include "Kismet/GameplayStatics.h"

void UROS2Int64Msg::Init()
{
    example_interfaces__msg__Int64__init(&int64_msg);
}

void UROS2Int64Msg::Fini()
{
    example_interfaces__msg__Int64__fini(&int64_msg);
}

const rosidl_message_type_support_t* UROS2Int64Msg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int64);
}

void UROS2Int64Msg::SetMsg(const FROSInt64& Inputs)
{
    Inputs.SetROS2(int64_msg);
}

void UROS2Int64Msg::GetMsg(FROSInt64& Outputs) const
{
    Outputs.SetFromROS2(int64_msg);
}

void* UROS2Int64Msg::Get()
{
    return &int64_msg;
}

FString UROS2Int64Msg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
