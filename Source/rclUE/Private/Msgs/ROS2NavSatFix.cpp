// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/NavSatFix.msg - do not modify

#include "Msgs/ROS2NavSatFix.h"

#include "Kismet/GameplayStatics.h"

void UROS2NavSatFixMsg::Init()
{
    sensor_msgs__msg__NavSatFix__init(&nav_sat_fix_msg);
}

void UROS2NavSatFixMsg::Fini()
{
    sensor_msgs__msg__NavSatFix__fini(&nav_sat_fix_msg);
}

const rosidl_message_type_support_t* UROS2NavSatFixMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, NavSatFix);
}

void UROS2NavSatFixMsg::SetMsg(const FROSNavSatFix& Inputs)
{
    Inputs.SetROS2(nav_sat_fix_msg);
}

void UROS2NavSatFixMsg::GetMsg(FROSNavSatFix& Outputs) const
{
    Outputs.SetFromROS2(nav_sat_fix_msg);
}

void* UROS2NavSatFixMsg::Get()
{
    return &nav_sat_fix_msg;
}

FString UROS2NavSatFixMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
