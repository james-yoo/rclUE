// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from std_msgs/msg/Empty.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "std_msgs/msg/empty.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2StdEmpty.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSStdEmpty
{
    GENERATED_BODY()

public:
    FROSStdEmpty()
    {
    }

    void SetFromROS2(const std_msgs__msg__Empty& in_ros_data)
    {
    }

    void SetROS2(std_msgs__msg__Empty& out_ros_data) const
    {
    }
};

UCLASS()
class RCLUE_API UROS2StdEmptyMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSStdEmpty& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSStdEmpty& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    std_msgs__msg__Empty empty_msg;
};
