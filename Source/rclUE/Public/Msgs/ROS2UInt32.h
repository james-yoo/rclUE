// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt32.msg - do
// not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/u_int32.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2UInt32.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSUInt32
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    unsigned int Data = 0;

    FROSUInt32()
    {
    }

    void SetFromROS2(const example_interfaces__msg__UInt32& in_ros_data)
    {
        Data = in_ros_data.data;
    }

    void SetROS2(example_interfaces__msg__UInt32& out_ros_data) const
    {
        out_ros_data.data = Data;
    }
};

UCLASS()
class RCLUE_API UROS2UInt32Msg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSUInt32& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSUInt32& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__UInt32 u_int32_msg;
};
