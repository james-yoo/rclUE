// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from shape_msgs/msg/MeshTriangle.msg - do not modify

#include "Msgs/ROS2MeshTriangleMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2MeshTriangleMsg::Init()
{
	shape_msgs__msg__MeshTriangle__init(&mesh_triangle_msg);
}

void UROS2MeshTriangleMsg::Fini()
{
	shape_msgs__msg__MeshTriangle__fini(&mesh_triangle_msg);
}

const rosidl_message_type_support_t* UROS2MeshTriangleMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(shape_msgs, msg, MeshTriangle);
}

void UROS2MeshTriangleMsg::SetMsg(const FROSMeshTriangle& Inputs)
{
    Inputs.SetROS2(mesh_triangle_msg);
}

void UROS2MeshTriangleMsg::GetMsg(FROSMeshTriangle& Outputs) const
{
    Outputs.SetFromROS2(mesh_triangle_msg);
}

void* UROS2MeshTriangleMsg::Get()
{
	return &mesh_triangle_msg;
}

FString UROS2MeshTriangleMsg::MsgToString() const
{
    /* TODO: Fill here */
	checkNoEntry();
	return FString();
}