// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/FluidPressure.msg - do not modify

#include "Msgs/ROS2FluidPressureMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2FluidPressureMsg::Init()
{
	sensor_msgs__msg__FluidPressure__init(&fluid_pressure_msg);
}

void UROS2FluidPressureMsg::Fini()
{
	sensor_msgs__msg__FluidPressure__fini(&fluid_pressure_msg);
}

const rosidl_message_type_support_t* UROS2FluidPressureMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, FluidPressure);
}

void UROS2FluidPressureMsg::SetMsg(const FROSFluidPressure& Inputs)
{
    Inputs.SetROS2(fluid_pressure_msg);
}

void UROS2FluidPressureMsg::GetMsg(FROSFluidPressure& Outputs) const
{
    Outputs.SetFromROS2(fluid_pressure_msg);
}

void* UROS2FluidPressureMsg::Get()
{
	return &fluid_pressure_msg;
}

FString UROS2FluidPressureMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}