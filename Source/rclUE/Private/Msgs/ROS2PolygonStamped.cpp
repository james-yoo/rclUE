// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/PolygonStamped.msg - do not modify

#include "Msgs/ROS2PolygonStamped.h"

#include "Kismet/GameplayStatics.h"



void UROS2PolygonStampedMsg::Init()
{
	geometry_msgs__msg__PolygonStamped__init(&polygon_stamped_msg);
}

void UROS2PolygonStampedMsg::Fini()
{
	geometry_msgs__msg__PolygonStamped__fini(&polygon_stamped_msg);
}

const rosidl_message_type_support_t* UROS2PolygonStampedMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PolygonStamped);
}

void UROS2PolygonStampedMsg::SetMsg(const FROSPolygonStamped& Inputs)
{
    Inputs.SetROS2(polygon_stamped_msg);
}

void UROS2PolygonStampedMsg::GetMsg(FROSPolygonStamped& Outputs) const
{
    Outputs.SetFromROS2(polygon_stamped_msg);
}

void* UROS2PolygonStampedMsg::Get()
{
	return &polygon_stamped_msg;
}

FString UROS2PolygonStampedMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}