// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/PointField.msg - do not modify

#include "Msgs/ROS2PointField.h"

#include "Kismet/GameplayStatics.h"

void UROS2PointFieldMsg::Init()
{
    sensor_msgs__msg__PointField__init(&point_field_msg);
}

void UROS2PointFieldMsg::Fini()
{
    sensor_msgs__msg__PointField__fini(&point_field_msg);
}

const rosidl_message_type_support_t* UROS2PointFieldMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, PointField);
}

void UROS2PointFieldMsg::SetMsg(const FROSPointField& Inputs)
{
    Inputs.SetROS2(point_field_msg);
}

void UROS2PointFieldMsg::GetMsg(FROSPointField& Outputs) const
{
    Outputs.SetFromROS2(point_field_msg);
}

void* UROS2PointFieldMsg::Get()
{
    return &point_field_msg;
}

FString UROS2PointFieldMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
