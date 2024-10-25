// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int16MultiArray.msg - do not modify

#include "Msgs/ROS2Int16MA.h"

#include "Kismet/GameplayStatics.h"



void UROS2Int16MAMsg::Init()
{
	example_interfaces__msg__Int16MultiArray__init(&int16_multi_array_msg);
}

void UROS2Int16MAMsg::Fini()
{
	example_interfaces__msg__Int16MultiArray__fini(&int16_multi_array_msg);
}

const rosidl_message_type_support_t* UROS2Int16MAMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Int16MultiArray);
}

void UROS2Int16MAMsg::SetMsg(const FROSInt16MA& Inputs)
{
    Inputs.SetROS2(int16_multi_array_msg);
}

void UROS2Int16MAMsg::GetMsg(FROSInt16MA& Outputs) const
{
    Outputs.SetFromROS2(int16_multi_array_msg);
}

void* UROS2Int16MAMsg::Get()
{
	return &int16_multi_array_msg;
}

FString UROS2Int16MAMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}