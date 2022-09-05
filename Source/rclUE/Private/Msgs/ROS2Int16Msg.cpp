// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int16.msg - do not modify

#include "Msgs/ROS2Int16Msg.h"

#include "Kismet/GameplayStatics.h"

void UROS2Int16Msg::Init()
{
	example_interfaces__msg__Int16__init(&int16_msg);
}

void UROS2Int16Msg::Fini()
{
	example_interfaces__msg__Int16__fini(&int16_msg);
}

const rosidl_message_type_support_t* UROS2Int16Msg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int16);
}

void UROS2Int16Msg::SetMsg(const FROSInt16& Inputs)
{
    Inputs.SetROS2(int16_msg);
}

void UROS2Int16Msg::GetMsg(FROSInt16& Outputs) const
{
    Outputs.SetFromROS2(int16_msg);
}

void* UROS2Int16Msg::Get()
{
	return &int16_msg;
}

FString UROS2Int16Msg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}