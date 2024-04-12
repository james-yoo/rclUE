// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/MagneticField.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/magnetic_field.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2MagneticField.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMagneticField
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector MagneticField = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<double> MagneticFieldCovariance;

    FROSMagneticField()
    {
        MagneticFieldCovariance.SetNumZeroed(9);
    }

    void SetFromROS2(const sensor_msgs__msg__MagneticField& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        MagneticField = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.magnetic_field);

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.magnetic_field_covariance, MagneticFieldCovariance, 9);
    }

    void SetROS2(sensor_msgs__msg__MagneticField& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        out_ros_data.magnetic_field = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(MagneticField);

        UROS2Utils::ArrayUEToROSSequence<double, double>(MagneticFieldCovariance, out_ros_data.magnetic_field_covariance, 9);
    }
};

UCLASS()
class RCLUE_API UROS2MagneticFieldMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMagneticField& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMagneticField& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    sensor_msgs__msg__MagneticField magnetic_field_msg;
};
