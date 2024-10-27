// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from shape_msgs/msg/Mesh.msg - do not modify

#include "Msgs/ROS2Mesh.h"

#include "Kismet/GameplayStatics.h"

void UROS2MeshMsg::Init()
{
    shape_msgs__msg__Mesh__init(&mesh_msg);
}

void UROS2MeshMsg::Fini()
{
    shape_msgs__msg__Mesh__fini(&mesh_msg);
}

const rosidl_message_type_support_t* UROS2MeshMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(shape_msgs, msg, Mesh);
}

void UROS2MeshMsg::SetMsg(const FROSMesh& Inputs)
{
    Inputs.SetROS2(mesh_msg);
}

void UROS2MeshMsg::GetMsg(FROSMesh& Outputs) const
{
    Outputs.SetFromROS2(mesh_msg);
}

void* UROS2MeshMsg::Get()
{
    return &mesh_msg;
}

FString UROS2MeshMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
