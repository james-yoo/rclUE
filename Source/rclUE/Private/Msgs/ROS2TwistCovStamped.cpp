// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/TwistWithCovarianceStamped.msg - do not modify

#include "Msgs/ROS2TwistCovStamped.h"

#include "Kismet/GameplayStatics.h"

void UROS2TwistCovStampedMsg::Init()
{
    geometry_msgs__msg__TwistWithCovarianceStamped__init(&twist_with_covariance_stamped_msg);
}

void UROS2TwistCovStampedMsg::Fini()
{
    geometry_msgs__msg__TwistWithCovarianceStamped__fini(&twist_with_covariance_stamped_msg);
}

const rosidl_message_type_support_t* UROS2TwistCovStampedMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, TwistWithCovarianceStamped);
}

void UROS2TwistCovStampedMsg::SetMsg(const FROSTwistCovStamped& Inputs)
{
    Inputs.SetROS2(twist_with_covariance_stamped_msg);
}

void UROS2TwistCovStampedMsg::GetMsg(FROSTwistCovStamped& Outputs) const
{
    Outputs.SetFromROS2(twist_with_covariance_stamped_msg);
}

void* UROS2TwistCovStampedMsg::Get()
{
    return &twist_with_covariance_stamped_msg;
}

FString UROS2TwistCovStampedMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
