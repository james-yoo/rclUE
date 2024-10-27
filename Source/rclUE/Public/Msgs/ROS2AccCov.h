// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from
// geometry_msgs/msg/AccelWithCovariance.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/accel_with_covariance.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Acc.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2AccCov.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSAccCov
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSAcc Accel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<double> Covariance;

    FROSAccCov()
    {
        Covariance.SetNumZeroed(36);
    }

    void SetFromROS2(const geometry_msgs__msg__AccelWithCovariance& in_ros_data)
    {
        Accel.SetFromROS2(in_ros_data.accel);

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.covariance, Covariance, 36);
    }

    void SetROS2(geometry_msgs__msg__AccelWithCovariance& out_ros_data) const
    {
        Accel.SetROS2(out_ros_data.accel);

        UROS2Utils::ArrayUEToROSSequence<double, double>(Covariance, out_ros_data.covariance, 36);
    }
};

UCLASS()
class RCLUE_API UROS2AccCovMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSAccCov& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSAccCov& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__AccelWithCovariance accel_with_covariance_msg;
};
