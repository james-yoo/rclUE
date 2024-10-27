// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/JointState.msg - do not
// modify

#include "Msgs/ROS2JointState.h"

#include "Kismet/GameplayStatics.h"

void UROS2JointStateMsg::Init()
{
    sensor_msgs__msg__JointState__init(&joint_state_msg);
}

void UROS2JointStateMsg::Fini()
{
    sensor_msgs__msg__JointState__fini(&joint_state_msg);
}

const rosidl_message_type_support_t* UROS2JointStateMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JointState);
}

void UROS2JointStateMsg::SetMsg(const FROSJointState& Inputs)
{
    Inputs.SetROS2(joint_state_msg);
}

void UROS2JointStateMsg::GetMsg(FROSJointState& Outputs) const
{
    Outputs.SetFromROS2(joint_state_msg);
}

void* UROS2JointStateMsg::Get()
{
    return &joint_state_msg;
}

FString UROS2JointStateMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
