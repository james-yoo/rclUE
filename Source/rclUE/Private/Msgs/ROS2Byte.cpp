// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Byte.msg - do not modify

#include "Msgs/ROS2Byte.h"

#include "Kismet/GameplayStatics.h"



void UROS2ByteMsg::Init()
{
	example_interfaces__msg__Byte__init(&byte_msg);
}

void UROS2ByteMsg::Fini()
{
	example_interfaces__msg__Byte__fini(&byte_msg);
}

const rosidl_message_type_support_t* UROS2ByteMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Byte);
}

void UROS2ByteMsg::SetMsg(const FROSByte& Inputs)
{
    Inputs.SetROS2(byte_msg);
}

void UROS2ByteMsg::GetMsg(FROSByte& Outputs) const
{
    Outputs.SetFromROS2(byte_msg);
}

void* UROS2ByteMsg::Get()
{
	return &byte_msg;
}

FString UROS2ByteMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}