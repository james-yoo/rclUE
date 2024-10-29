// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Imu.msg - do not modify

#include "Msgs/ROS2Imu.h"

#include "Kismet/GameplayStatics.h"

void UROS2ImuMsg::Init()
{
    sensor_msgs__msg__Imu__init(&imu_msg);
}

void UROS2ImuMsg::Fini()
{
    sensor_msgs__msg__Imu__fini(&imu_msg);
}

const rosidl_message_type_support_t* UROS2ImuMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu);
}

void UROS2ImuMsg::SetMsg(const FROSImu& Inputs)
{
    Inputs.SetROS2(imu_msg);
}

void UROS2ImuMsg::GetMsg(FROSImu& Outputs) const
{
    Outputs.SetFromROS2(imu_msg);
}

void* UROS2ImuMsg::Get()
{
    return &imu_msg;
}

FString UROS2ImuMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
