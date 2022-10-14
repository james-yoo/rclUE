// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/msg/DiagnosticArray.msg
// - do not modify

#include "Msgs/ROS2DiagnosticArray.h"

#include "Kismet/GameplayStatics.h"

void UROS2DiagnosticArrayMsg::Init() {
  diagnostic_msgs__msg__DiagnosticArray__init(&diagnostic_array_msg);
}

void UROS2DiagnosticArrayMsg::Fini() {
  diagnostic_msgs__msg__DiagnosticArray__fini(&diagnostic_array_msg);
}

const rosidl_message_type_support_t *
UROS2DiagnosticArrayMsg::GetTypeSupport() const {
  return ROSIDL_GET_MSG_TYPE_SUPPORT(diagnostic_msgs, msg, DiagnosticArray);
}

void UROS2DiagnosticArrayMsg::SetMsg(const FROSDiagnosticArray &Inputs) {
  Inputs.SetROS2(diagnostic_array_msg);
}

void UROS2DiagnosticArrayMsg::GetMsg(FROSDiagnosticArray &Outputs) const {
  Outputs.SetFromROS2(diagnostic_array_msg);
}

void *UROS2DiagnosticArrayMsg::Get() { return &diagnostic_array_msg; }

FString UROS2DiagnosticArrayMsg::MsgToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}