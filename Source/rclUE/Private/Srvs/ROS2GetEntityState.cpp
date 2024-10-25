// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/GetEntityState.srv - do not modify

#include "Srvs/ROS2GetEntityState.h"





const rosidl_service_type_support_t* UROS2GetEntityStateSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, GetEntityState);
}

void UROS2GetEntityStateSrv::Init()
{
    ue_msgs__srv__GetEntityState_Request__init(&GetEntityState_req);
    ue_msgs__srv__GetEntityState_Response__init(&GetEntityState_res);
}

void UROS2GetEntityStateSrv::Fini()
{
    ue_msgs__srv__GetEntityState_Request__fini(&GetEntityState_req);
    ue_msgs__srv__GetEntityState_Response__fini(&GetEntityState_res);
}

void UROS2GetEntityStateSrv::SetRequest(const FROSGetEntityStateReq& Request)
{
    Request.SetROS2(GetEntityState_req);
}

void UROS2GetEntityStateSrv::GetRequest(FROSGetEntityStateReq& Request) const
{
    Request.SetFromROS2(GetEntityState_req);
}

void UROS2GetEntityStateSrv::SetResponse(const FROSGetEntityStateRes& Response)
{
    Response.SetROS2(GetEntityState_res);
}

void UROS2GetEntityStateSrv::GetResponse(FROSGetEntityStateRes& Response) const
{
    Response.SetFromROS2(GetEntityState_res);
}

void* UROS2GetEntityStateSrv::GetRequest()
{
    return &GetEntityState_req;
}

void* UROS2GetEntityStateSrv::GetResponse()
{
    return &GetEntityState_res;
}

FString UROS2GetEntityStateSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}

FString UROS2GetEntityStateSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
    return FString();
}