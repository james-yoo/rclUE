// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from type_description_interfaces/msg/FieldType.msg - do not modify

#include "Msgs/ROS2FieldType.h"

#include "Kismet/GameplayStatics.h"



void UROS2FieldTypeMsg::Init()
{
	type_description_interfaces__msg__FieldType__init(&field_type_msg);
}

void UROS2FieldTypeMsg::Fini()
{
	type_description_interfaces__msg__FieldType__fini(&field_type_msg);
}

const rosidl_message_type_support_t* UROS2FieldTypeMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(type_description_interfaces, msg, FieldType);
}

void UROS2FieldTypeMsg::SetMsg(const FROSFieldType& Inputs)
{
    Inputs.SetROS2(field_type_msg);
}

void UROS2FieldTypeMsg::GetMsg(FROSFieldType& Outputs) const
{
    Outputs.SetFromROS2(field_type_msg);
}

void* UROS2FieldTypeMsg::Get()
{
	return &field_type_msg;
}

FString UROS2FieldTypeMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}