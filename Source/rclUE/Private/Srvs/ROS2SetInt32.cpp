// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/SetInt32.srv - do not modify

#include "Srvs/ROS2SetInt32.h"

const rosidl_service_type_support_t* UROS2SetInt32Srv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue_msgs, srv, SetInt32);
}

void UROS2SetInt32Srv::Init()
{
    ue_msgs__srv__SetInt32_Request__init(&SetInt32_req);
    ue_msgs__srv__SetInt32_Response__init(&SetInt32_res);
}

void UROS2SetInt32Srv::Fini()
{
    ue_msgs__srv__SetInt32_Request__fini(&SetInt32_req);
    ue_msgs__srv__SetInt32_Response__fini(&SetInt32_res);
}

void UROS2SetInt32Srv::SetRequest(const FROSSetInt32Req& Request)
{
    Request.SetROS2(SetInt32_req);
}

void UROS2SetInt32Srv::GetRequest(FROSSetInt32Req& Request) const
{
    Request.SetFromROS2(SetInt32_req);
}

void UROS2SetInt32Srv::SetResponse(const FROSSetInt32Res& Response)
{
    Response.SetROS2(SetInt32_res);
}

void UROS2SetInt32Srv::GetResponse(FROSSetInt32Res& Response) const
{
    Response.SetFromROS2(SetInt32_res);
}

void* UROS2SetInt32Srv::GetRequest()
{
    return &SetInt32_req;
}

void* UROS2SetInt32Srv::GetResponse()
{
    return &SetInt32_res;
}

FString UROS2SetInt32Srv::SrvRequestToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

FString UROS2SetInt32Srv::SrvResponseToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
