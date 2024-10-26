// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/PointCloud.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/point_cloud.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2ChannelFloat32.h"
#include "Msgs/ROS2Point32.h"
#include "Msgs/ROS2StdHeader.h"
#include "geometry_msgs/msg/detail/point32__functions.h"
#include "sensor_msgs/msg/detail/channel_float32__functions.h"

// Generated
#include "ROS2PointCloud.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointCloud
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSStdHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSPoint32> Points;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSChannelFloat32> Channels;

    FROSPointCloud()
    {
    }

    void SetFromROS2(const sensor_msgs__msg__PointCloud& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::SequenceROSToUEArray<geometry_msgs__msg__Point32, FROSPoint32>(
            in_ros_data.points.data, Points, in_ros_data.points.size);

        UROS2Utils::SequenceROSToUEArray<sensor_msgs__msg__ChannelFloat32, FROSChannelFloat32>(
            in_ros_data.channels.data, Channels, in_ros_data.channels.size);
    }

    void SetROS2(sensor_msgs__msg__PointCloud& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        if (out_ros_data.points.data)
        {
            geometry_msgs__msg__Point32__Sequence__fini(&out_ros_data.points);
        }
        if (!geometry_msgs__msg__Point32__Sequence__init(&out_ros_data.points, Points.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.points  "));
        }
        UROS2Utils::ArrayUEToROSSequence<geometry_msgs__msg__Point32, FROSPoint32>(Points, out_ros_data.points.data, Points.Num());

        if (out_ros_data.channels.data)
        {
            sensor_msgs__msg__ChannelFloat32__Sequence__fini(&out_ros_data.channels);
        }
        if (!sensor_msgs__msg__ChannelFloat32__Sequence__init(&out_ros_data.channels, Channels.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.channels  "));
        }
        UROS2Utils::ArrayUEToROSSequence<sensor_msgs__msg__ChannelFloat32, FROSChannelFloat32>(
            Channels, out_ros_data.channels.data, Channels.Num());
    }
};

UCLASS()
class RCLUE_API UROS2PointCloudMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPointCloud& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPointCloud& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    sensor_msgs__msg__PointCloud point_cloud_msg;
};
