// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Pose.msg - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/pose.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Pose.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPose
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Position = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FQuat Orientation = FQuat::Identity;

    FROSPose()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__Pose& in_ros_data)
    {
        Position = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Point>(in_ros_data.position);

        Orientation = UROS2Utils::QuatROSToUE(in_ros_data.orientation);
    }

    void SetROS2(geometry_msgs__msg__Pose& out_ros_data) const
    {
        out_ros_data.position = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Point>(Position);

        out_ros_data.orientation = UROS2Utils::QuatUEToROS(Orientation);
    }
};

UCLASS()
class RCLUE_API UROS2PoseMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPose& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPose& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__Pose pose_msg;
};
