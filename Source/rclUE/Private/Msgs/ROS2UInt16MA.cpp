// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt16MultiArray.msg - do not modify

#include "Msgs/ROS2UInt16MA.h"

#include "Kismet/GameplayStatics.h"



void UROS2UInt16MAMsg::Init()
{
	example_interfaces__msg__UInt16MultiArray__init(&u_int16_multi_array_msg);
}

void UROS2UInt16MAMsg::Fini()
{
	example_interfaces__msg__UInt16MultiArray__fini(&u_int16_multi_array_msg);
}

const rosidl_message_type_support_t* UROS2UInt16MAMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, UInt16MultiArray);
}

void UROS2UInt16MAMsg::SetMsg(const FROSUInt16MA& Inputs)
{
    Inputs.SetROS2(u_int16_multi_array_msg);
}

void UROS2UInt16MAMsg::GetMsg(FROSUInt16MA& Outputs) const
{
    Outputs.SetFromROS2(u_int16_multi_array_msg);
}

void* UROS2UInt16MAMsg::Get()
{
	return &u_int16_multi_array_msg;
}

FString UROS2UInt16MAMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}