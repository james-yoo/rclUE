// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/TimeReference.msg - do not modify

#include "Msgs/ROS2TimeReferenceMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2TimeReferenceMsg::Init()
{
	sensor_msgs__msg__TimeReference__init(&time_reference_msg);
}

void UROS2TimeReferenceMsg::Fini()
{
	sensor_msgs__msg__TimeReference__fini(&time_reference_msg);
}

const rosidl_message_type_support_t* UROS2TimeReferenceMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, TimeReference);
}

void UROS2TimeReferenceMsg::SetMsg(const FROSTimeReference& Inputs)
{
    Inputs.SetROS2(time_reference_msg);
}

void UROS2TimeReferenceMsg::GetMsg(FROSTimeReference& Outputs) const
{
    Outputs.SetFromROS2(time_reference_msg);
}

void* UROS2TimeReferenceMsg::Get()
{
	return &time_reference_msg;
}

FString UROS2TimeReferenceMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}