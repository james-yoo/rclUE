// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from actionlib_msgs/msg/GoalID.msg - do not
// modify

#include "Msgs/ROS2GoalID.h"

#include "Kismet/GameplayStatics.h"

void UROS2GoalIDMsg::Init()
{
    actionlib_msgs__msg__GoalID__init(&goal_id_msg);
}

void UROS2GoalIDMsg::Fini()
{
    actionlib_msgs__msg__GoalID__fini(&goal_id_msg);
}

const rosidl_message_type_support_t* UROS2GoalIDMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(actionlib_msgs, msg, GoalID);
}

void UROS2GoalIDMsg::SetMsg(const FROSGoalID& Inputs)
{
    Inputs.SetROS2(goal_id_msg);
}

void UROS2GoalIDMsg::GetMsg(FROSGoalID& Outputs) const
{
    Outputs.SetFromROS2(goal_id_msg);
}

void* UROS2GoalIDMsg::Get()
{
    return &goal_id_msg;
}

FString UROS2GoalIDMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
