// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int8.msg - do not modify

#include "Msgs/ROS2Int8.h"

#include "Kismet/GameplayStatics.h"



void UROS2Int8Msg::Init()
{
	example_interfaces__msg__Int8__init(&int8_msg);
}

void UROS2Int8Msg::Fini()
{
	example_interfaces__msg__Int8__fini(&int8_msg);
}

const rosidl_message_type_support_t* UROS2Int8Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int8);
}

void UROS2Int8Msg::SetMsg(const FROSInt8& Inputs)
{
    Inputs.SetROS2(int8_msg);
}

void UROS2Int8Msg::GetMsg(FROSInt8& Outputs) const
{
    Outputs.SetFromROS2(int8_msg);
}

void* UROS2Int8Msg::Get()
{
	return &int8_msg;
}

FString UROS2Int8Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}