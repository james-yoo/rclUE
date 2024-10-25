// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt64.msg - do not modify

#include "Msgs/ROS2UInt64.h"

#include "Kismet/GameplayStatics.h"



void UROS2UInt64Msg::Init()
{
	example_interfaces__msg__UInt64__init(&u_int64_msg);
}

void UROS2UInt64Msg::Fini()
{
	example_interfaces__msg__UInt64__fini(&u_int64_msg);
}

const rosidl_message_type_support_t* UROS2UInt64Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, UInt64);
}

void UROS2UInt64Msg::SetMsg(const FROSUInt64& Inputs)
{
    Inputs.SetROS2(u_int64_msg);
}

void UROS2UInt64Msg::GetMsg(FROSUInt64& Outputs) const
{
    Outputs.SetFromROS2(u_int64_msg);
}

void* UROS2UInt64Msg::Get()
{
	return &u_int64_msg;
}

FString UROS2UInt64Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}