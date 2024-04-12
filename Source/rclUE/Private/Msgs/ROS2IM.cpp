// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarker.msg - do not modify

#include "Msgs/ROS2IM.h"

#include "Kismet/GameplayStatics.h"

void UROS2IMMsg::Init()
{
    visualization_msgs__msg__InteractiveMarker__init(&interactive_marker_msg);
}

void UROS2IMMsg::Fini()
{
    visualization_msgs__msg__InteractiveMarker__fini(&interactive_marker_msg);
}

const rosidl_message_type_support_t* UROS2IMMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(visualization_msgs, msg, InteractiveMarker);
}

void UROS2IMMsg::SetMsg(const FROSIM& Inputs)
{
    Inputs.SetROS2(interactive_marker_msg);
}

void UROS2IMMsg::GetMsg(FROSIM& Outputs) const
{
    Outputs.SetFromROS2(interactive_marker_msg);
}

void* UROS2IMMsg::Get()
{
    return &interactive_marker_msg;
}

FString UROS2IMMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
