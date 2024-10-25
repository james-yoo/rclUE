// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerUpdate.msg - do not modify

#include "Msgs/ROS2IMUpdate.h"

#include "Kismet/GameplayStatics.h"



void UROS2IMUpdateMsg::Init()
{
	visualization_msgs__msg__InteractiveMarkerUpdate__init(&interactive_marker_update_msg);
}

void UROS2IMUpdateMsg::Fini()
{
	visualization_msgs__msg__InteractiveMarkerUpdate__fini(&interactive_marker_update_msg);
}

const rosidl_message_type_support_t* UROS2IMUpdateMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(visualization_msgs, msg, InteractiveMarkerUpdate);
}

void UROS2IMUpdateMsg::SetMsg(const FROSIMUpdate& Inputs)
{
    Inputs.SetROS2(interactive_marker_update_msg);
}

void UROS2IMUpdateMsg::GetMsg(FROSIMUpdate& Outputs) const
{
    Outputs.SetFromROS2(interactive_marker_update_msg);
}

void* UROS2IMUpdateMsg::Get()
{
	return &interactive_marker_update_msg;
}

FString UROS2IMUpdateMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}