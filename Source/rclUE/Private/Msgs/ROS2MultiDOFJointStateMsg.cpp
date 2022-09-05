// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/MultiDOFJointState.msg - do not modify

#include "Msgs/ROS2MultiDOFJointStateMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2MultiDOFJointStateMsg::Init()
{
	sensor_msgs__msg__MultiDOFJointState__init(&multi_dof_joint_state_msg);
}

void UROS2MultiDOFJointStateMsg::Fini()
{
	sensor_msgs__msg__MultiDOFJointState__fini(&multi_dof_joint_state_msg);
}

const rosidl_message_type_support_t* UROS2MultiDOFJointStateMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, MultiDOFJointState);
}

void UROS2MultiDOFJointStateMsg::SetMsg(const FROSMultiDOFJointState& Inputs)
{
    Inputs.SetROS2(multi_dof_joint_state_msg);
}

void UROS2MultiDOFJointStateMsg::GetMsg(FROSMultiDOFJointState& Outputs) const
{
    Outputs.SetFromROS2(multi_dof_joint_state_msg);
}

void* UROS2MultiDOFJointStateMsg::Get()
{
	return &multi_dof_joint_state_msg;
}

FString UROS2MultiDOFJointStateMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}