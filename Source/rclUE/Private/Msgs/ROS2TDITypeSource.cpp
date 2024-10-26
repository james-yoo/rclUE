// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from type_description_interfaces/msg/TypeSource.msg - do not modify

#include "Msgs/ROS2TDITypeSource.h"

#include "Kismet/GameplayStatics.h"

void UROS2TDITypeSourceMsg::Init()
{
    type_description_interfaces__msg__TypeSource__init(&type_source_msg);
}

void UROS2TDITypeSourceMsg::Fini()
{
    type_description_interfaces__msg__TypeSource__fini(&type_source_msg);
}

const rosidl_message_type_support_t* UROS2TDITypeSourceMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(type_description_interfaces, msg, TypeSource);
}

void UROS2TDITypeSourceMsg::SetMsg(const FROSTDITypeSource& Inputs)
{
    Inputs.SetROS2(type_source_msg);
}

void UROS2TDITypeSourceMsg::GetMsg(FROSTDITypeSource& Outputs) const
{
    Outputs.SetFromROS2(type_source_msg);
}

void* UROS2TDITypeSourceMsg::Get()
{
    return &type_source_msg;
}

FString UROS2TDITypeSourceMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
