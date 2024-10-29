// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/ChannelFloat32.msg - do
// not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/channel_float32.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2ChannelFloat32.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSChannelFloat32
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> Values;

    FROSChannelFloat32()
    {
    }

    void SetFromROS2(const sensor_msgs__msg__ChannelFloat32& in_ros_data)
    {
        Name = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.name);

        UROS2Utils::SequenceROSToUEArray<float, float>(in_ros_data.values.data, Values, in_ros_data.values.size);
    }

    void SetROS2(sensor_msgs__msg__ChannelFloat32& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(Name, out_ros_data.name);

        if (out_ros_data.values.data)
        {
            rosidl_runtime_c__float32__Sequence__fini(&out_ros_data.values);
        }
        if (!rosidl_runtime_c__float32__Sequence__init(&out_ros_data.values, Values.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.values  "));
        }
        UROS2Utils::ArrayUEToROSSequence<float, float>(Values, out_ros_data.values.data, Values.Num());
    }
};

UCLASS()
class RCLUE_API UROS2ChannelFloat32Msg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSChannelFloat32& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSChannelFloat32& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    sensor_msgs__msg__ChannelFloat32 channel_float32_msg;
};
