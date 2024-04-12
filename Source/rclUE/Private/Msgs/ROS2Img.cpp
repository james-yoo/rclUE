// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Image.msg - do not modify

#include "Msgs/ROS2Img.h"

#include "Kismet/GameplayStatics.h"

void UROS2ImgMsg::Init()
{
    sensor_msgs__msg__Image__init(&image_msg);
}

void UROS2ImgMsg::Fini()
{
    sensor_msgs__msg__Image__fini(&image_msg);
}

const rosidl_message_type_support_t* UROS2ImgMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Image);
}

void UROS2ImgMsg::SetMsg(const FROSImg& Inputs)
{
    Inputs.SetROS2(image_msg);
}

void UROS2ImgMsg::GetMsg(FROSImg& Outputs) const
{
    Outputs.SetFromROS2(image_msg);
}

void* UROS2ImgMsg::Get()
{
    return &image_msg;
}

FString UROS2ImgMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
