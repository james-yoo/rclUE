// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/AccelStamped.msg - do
// not modify

#include "Msgs/ROS2AccStamped.h"

#include "Kismet/GameplayStatics.h"

void UROS2AccStampedMsg::Init() {
  geometry_msgs__msg__AccelStamped__init(&accel_stamped_msg);
}

void UROS2AccStampedMsg::Fini() {
  geometry_msgs__msg__AccelStamped__fini(&accel_stamped_msg);
}

const rosidl_message_type_support_t *
UROS2AccStampedMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, AccelStamped);
}

void UROS2AccStampedMsg::SetMsg(const FROSAccStamped &Inputs) {
  Inputs.SetROS2(accel_stamped_msg);
}

void UROS2AccStampedMsg::GetMsg(FROSAccStamped &Outputs) const {
  Outputs.SetFromROS2(accel_stamped_msg);
}

void *UROS2AccStampedMsg::Get() { return &accel_stamped_msg; }

FString UROS2AccStampedMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}