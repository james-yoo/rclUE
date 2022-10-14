// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from std_msgs/msg/Header.msg - do not modify

#include "Msgs/ROS2Header.h"

#include "Kismet/GameplayStatics.h"

void UROS2HeaderMsg::Init() { std_msgs__msg__Header__init(&header_msg); }

void UROS2HeaderMsg::Fini() { std_msgs__msg__Header__fini(&header_msg); }

const rosidl_message_type_support_t *UROS2HeaderMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Header);
}

void UROS2HeaderMsg::SetMsg(const FROSHeader &Inputs) {
  Inputs.SetROS2(header_msg);
}

void UROS2HeaderMsg::GetMsg(FROSHeader &Outputs) const {
  Outputs.SetFromROS2(header_msg);
}

void *UROS2HeaderMsg::Get() { return &header_msg; }

FString UROS2HeaderMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}