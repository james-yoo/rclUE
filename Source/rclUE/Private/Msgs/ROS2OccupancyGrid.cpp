// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/OccupancyGrid.msg - do not modify

#include "Msgs/ROS2OccupancyGrid.h"

#include "Kismet/GameplayStatics.h"



void UROS2OccupancyGridMsg::Init()
{
	nav_msgs__msg__OccupancyGrid__init(&occupancy_grid_msg);
}

void UROS2OccupancyGridMsg::Fini()
{
	nav_msgs__msg__OccupancyGrid__fini(&occupancy_grid_msg);
}

const rosidl_message_type_support_t* UROS2OccupancyGridMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, OccupancyGrid);
}

void UROS2OccupancyGridMsg::SetMsg(const FROSOccupancyGrid& Inputs)
{
    Inputs.SetROS2(occupancy_grid_msg);
}

void UROS2OccupancyGridMsg::GetMsg(FROSOccupancyGrid& Outputs) const
{
    Outputs.SetFromROS2(occupancy_grid_msg);
}

void* UROS2OccupancyGridMsg::Get()
{
	return &occupancy_grid_msg;
}

FString UROS2OccupancyGridMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}