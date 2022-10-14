// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/DeleteEntity.srv - do not
// modify

#include "Srvs/ROS2DeleteEntity.h"

const rosidl_service_type_support_t *
UROS2DeleteEntitySrv::GetTypeSupport() const {
  return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, DeleteEntity);
}

void UROS2DeleteEntitySrv::Init() {
  ue_msgs__srv__DeleteEntity_Request__init(&DeleteEntity_req);
  ue_msgs__srv__DeleteEntity_Response__init(&DeleteEntity_res);
}

void UROS2DeleteEntitySrv::Fini() {
  ue_msgs__srv__DeleteEntity_Request__fini(&DeleteEntity_req);
  ue_msgs__srv__DeleteEntity_Response__fini(&DeleteEntity_res);
}

void UROS2DeleteEntitySrv::SetRequest(const FROSDeleteEntityReq &Request) {
  Request.SetROS2(DeleteEntity_req);
}

void UROS2DeleteEntitySrv::GetRequest(FROSDeleteEntityReq &Request) const {
  Request.SetFromROS2(DeleteEntity_req);
}

void UROS2DeleteEntitySrv::SetResponse(const FROSDeleteEntityRes &Response) {
  Response.SetROS2(DeleteEntity_res);
}

void UROS2DeleteEntitySrv::GetResponse(FROSDeleteEntityRes &Response) const {
  Response.SetFromROS2(DeleteEntity_res);
}

void *UROS2DeleteEntitySrv::GetRequest() { return &DeleteEntity_req; }

void *UROS2DeleteEntitySrv::GetResponse() { return &DeleteEntity_res; }

FString UROS2DeleteEntitySrv::SrvRequestToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}

FString UROS2DeleteEntitySrv::SrvResponseToString() const {
  /* TODO: Fill here */
  checkNoEntry();
  return FString();
}