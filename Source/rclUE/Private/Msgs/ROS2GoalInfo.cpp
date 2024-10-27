// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from action_msgs/msg/GoalInfo.msg - do not
// modify

#include "Msgs/ROS2GoalInfo.h"

#include "Kismet/GameplayStatics.h"

void UROS2GoalInfoMsg::Init()
{
    action_msgs__msg__GoalInfo__init(&goal_info_msg);
}

void UROS2GoalInfoMsg::Fini()
{
    action_msgs__msg__GoalInfo__fini(&goal_info_msg);
}

const rosidl_message_type_support_t* UROS2GoalInfoMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(action_msgs, msg, GoalInfo);
}

void UROS2GoalInfoMsg::SetMsg(const FROSGoalInfo& Inputs)
{
    Inputs.SetROS2(goal_info_msg);
}

void UROS2GoalInfoMsg::GetMsg(FROSGoalInfo& Outputs) const
{
    Outputs.SetFromROS2(goal_info_msg);
}

void* UROS2GoalInfoMsg::Get()
{
    return &goal_info_msg;
}

FString UROS2GoalInfoMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
