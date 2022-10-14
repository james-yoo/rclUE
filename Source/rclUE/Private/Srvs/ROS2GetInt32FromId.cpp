// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/GetInt32FromId.srv - do not
// modify

#include "Srvs/ROS2GetInt32FromId.h"

const rosidl_service_type_support_t *
UROS2GetInt32FromIdSrv::GetTypeSupport() const {
  return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, GetInt32FromId);
}

void UROS2GetInt32FromIdSrv::Init() {
  ue_msgs__srv__GetInt32FromId_Request__init(&GetInt32FromId_req);
  ue_msgs__srv__GetInt32FromId_Response__init(&GetInt32FromId_res);
}

void UROS2GetInt32FromIdSrv::Fini() {
  ue_msgs__srv__GetInt32FromId_Request__fini(&GetInt32FromId_req);
  ue_msgs__srv__GetInt32FromId_Response__fini(&GetInt32FromId_res);
}

void UROS2GetInt32FromIdSrv::SetRequest(const FROSGetInt32FromIdReq &Request) {
  Request.SetROS2(GetInt32FromId_req);
}

void UROS2GetInt32FromIdSrv::GetRequest(FROSGetInt32FromIdReq &Request) const {
  Request.SetFromROS2(GetInt32FromId_req);
}

void UROS2GetInt32FromIdSrv::SetResponse(
    const FROSGetInt32FromIdRes &Response) {
  Response.SetROS2(GetInt32FromId_res);
}

void UROS2GetInt32FromIdSrv::GetResponse(
    FROSGetInt32FromIdRes &Response) const {
  Response.SetFromROS2(GetInt32FromId_res);
}

void *UROS2GetInt32FromIdSrv::GetRequest() { return &GetInt32FromId_req; }

void *UROS2GetInt32FromIdSrv::GetResponse() { return &GetInt32FromId_res; }

FString UROS2GetInt32FromIdSrv::SrvRequestToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}

FString UROS2GetInt32FromIdSrv::SrvResponseToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}