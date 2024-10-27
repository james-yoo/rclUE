// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/srv/AddTwoInts.srv -
// do not modify

#include "Srvs/ROS2AddTwoInts.h"

const rosidl_service_type_support_t* UROS2AddTwoIntsSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);
}

void UROS2AddTwoIntsSrv::Init()
{
    example_interfaces__srv__AddTwoInts_Request__init(&AddTwoInts_req);
    example_interfaces__srv__AddTwoInts_Response__init(&AddTwoInts_res);
}

void UROS2AddTwoIntsSrv::Fini()
{
    example_interfaces__srv__AddTwoInts_Request__fini(&AddTwoInts_req);
    example_interfaces__srv__AddTwoInts_Response__fini(&AddTwoInts_res);
}

void UROS2AddTwoIntsSrv::SetRequest(const FROSAddTwoIntsReq& Request)
{
    Request.SetROS2(AddTwoInts_req);
}

void UROS2AddTwoIntsSrv::GetRequest(FROSAddTwoIntsReq& Request) const
{
    Request.SetFromROS2(AddTwoInts_req);
}

void UROS2AddTwoIntsSrv::SetResponse(const FROSAddTwoIntsRes& Response)
{
    Response.SetROS2(AddTwoInts_res);
}

void UROS2AddTwoIntsSrv::GetResponse(FROSAddTwoIntsRes& Response) const
{
    Response.SetFromROS2(AddTwoInts_res);
}

void* UROS2AddTwoIntsSrv::GetRequest()
{
    return &AddTwoInts_req;
}

void* UROS2AddTwoIntsSrv::GetResponse()
{
    return &AddTwoInts_res;
}

FString UROS2AddTwoIntsSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

FString UROS2AddTwoIntsSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
