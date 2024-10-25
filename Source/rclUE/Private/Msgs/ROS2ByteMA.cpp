// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/ByteMultiArray.msg - do not modify

#include "Msgs/ROS2ByteMA.h"

#include "Kismet/GameplayStatics.h"



void UROS2ByteMAMsg::Init()
{
	example_interfaces__msg__ByteMultiArray__init(&byte_multi_array_msg);
}

void UROS2ByteMAMsg::Fini()
{
	example_interfaces__msg__ByteMultiArray__fini(&byte_multi_array_msg);
}

const rosidl_message_type_support_t* UROS2ByteMAMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, ByteMultiArray);
}

void UROS2ByteMAMsg::SetMsg(const FROSByteMA& Inputs)
{
    Inputs.SetROS2(byte_multi_array_msg);
}

void UROS2ByteMAMsg::GetMsg(FROSByteMA& Outputs) const
{
    Outputs.SetFromROS2(byte_multi_array_msg);
}

void* UROS2ByteMAMsg::Get()
{
	return &byte_multi_array_msg;
}

FString UROS2ByteMAMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}