// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from
// example_interfaces/msg/UInt32MultiArray.msg - do not modify

#include "Msgs/ROS2UInt32MA.h"

#include "Kismet/GameplayStatics.h"

void UROS2UInt32MAMsg::Init()
{
    example_interfaces__msg__UInt32MultiArray__init(&u_int32_multi_array_msg);
}

void UROS2UInt32MAMsg::Fini()
{
    example_interfaces__msg__UInt32MultiArray__fini(&u_int32_multi_array_msg);
}

const rosidl_message_type_support_t* UROS2UInt32MAMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, UInt32MultiArray);
}

void UROS2UInt32MAMsg::SetMsg(const FROSUInt32MA& Inputs)
{
    Inputs.SetROS2(u_int32_multi_array_msg);
}

void UROS2UInt32MAMsg::GetMsg(FROSUInt32MA& Outputs) const
{
    Outputs.SetFromROS2(u_int32_multi_array_msg);
}

void* UROS2UInt32MAMsg::Get()
{
    return &u_int32_multi_array_msg;
}

FString UROS2UInt32MAMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
