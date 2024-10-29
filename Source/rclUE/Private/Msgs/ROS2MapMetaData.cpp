// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/MapMetaData.msg - do not
// modify

#include "Msgs/ROS2MapMetaData.h"

#include "Kismet/GameplayStatics.h"

void UROS2MapMetaDataMsg::Init()
{
    nav_msgs__msg__MapMetaData__init(&map_meta_data_msg);
}

void UROS2MapMetaDataMsg::Fini()
{
    nav_msgs__msg__MapMetaData__fini(&map_meta_data_msg);
}

const rosidl_message_type_support_t* UROS2MapMetaDataMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, MapMetaData);
}

void UROS2MapMetaDataMsg::SetMsg(const FROSMapMetaData& Inputs)
{
    Inputs.SetROS2(map_meta_data_msg);
}

void UROS2MapMetaDataMsg::GetMsg(FROSMapMetaData& Outputs) const
{
    Outputs.SetFromROS2(map_meta_data_msg);
}

void* UROS2MapMetaDataMsg::Get()
{
    return &map_meta_data_msg;
}

FString UROS2MapMetaDataMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
