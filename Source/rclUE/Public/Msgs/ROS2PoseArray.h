// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/PoseArray.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/pose_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Pose.h"
#include "geometry_msgs/msg/detail/pose__functions.h"

// Generated
#include "ROS2PoseArray.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPoseArray
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSPose> Poses;

    FROSPoseArray()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__PoseArray& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::SequenceROSToUEArray<geometry_msgs__msg__Pose, FROSPose>(in_ros_data.poses.data, Poses, in_ros_data.poses.size);
    }

    void SetROS2(geometry_msgs__msg__PoseArray& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        if (out_ros_data.poses.data)
        {
            geometry_msgs__msg__Pose__Sequence__fini(&out_ros_data.poses);
        }
        if (!geometry_msgs__msg__Pose__Sequence__init(&out_ros_data.poses, Poses.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.poses  "));
        }
        UROS2Utils::ArrayUEToROSSequence<geometry_msgs__msg__Pose, FROSPose>(Poses, out_ros_data.poses.data, Poses.Num());
    }
};

UCLASS()
class RCLUE_API UROS2PoseArrayMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPoseArray& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPoseArray& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__PoseArray pose_array_msg;
};
