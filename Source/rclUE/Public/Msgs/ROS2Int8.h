// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int8.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/int8.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Int8.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSInt8
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    int8 Data = 0;

    FROSInt8()
    {
    }

    void SetFromROS2(const example_interfaces__msg__Int8& in_ros_data)
    {
        Data = in_ros_data.data;
    }

    void SetROS2(example_interfaces__msg__Int8& out_ros_data) const
    {
        out_ros_data.data = Data;
    }
};

UCLASS()
class RCLUE_API UROS2Int8Msg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSInt8& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSInt8& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__Int8 int8_msg;
};
