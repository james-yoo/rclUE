// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from trajectory_msgs/msg/JointTrajectory.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "trajectory_msgs/msg/joint_trajectory.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2JointTrajPoint.h"
#include "rosidl_runtime_c/string_functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

// Generated
#include "ROS2JointTraj.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJointTraj
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> JointNames;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSJointTrajPoint> Points;

    FROSJointTraj()
    {
    }

    void SetFromROS2(const trajectory_msgs__msg__JointTrajectory& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::StringSequenceROSToUEArray<rosidl_runtime_c__String>(
            in_ros_data.joint_names.data, JointNames, in_ros_data.joint_names.size);

        UROS2Utils::SequenceROSToUEArray<trajectory_msgs__msg__JointTrajectoryPoint, FROSJointTrajPoint>(
            in_ros_data.points.data, Points, in_ros_data.points.size);
    }

    void SetROS2(trajectory_msgs__msg__JointTrajectory& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        if (out_ros_data.joint_names.data)
        {
            rosidl_runtime_c__String__Sequence__fini(&out_ros_data.joint_names);
        }
        if (!rosidl_runtime_c__String__Sequence__init(&out_ros_data.joint_names, JointNames.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.joint_names  "));
        }
        UROS2Utils::StringArrayUEToROSSequence(JointNames, out_ros_data.joint_names.data, JointNames.Num());

        if (out_ros_data.points.data)
        {
            trajectory_msgs__msg__JointTrajectoryPoint__Sequence__fini(&out_ros_data.points);
        }
        if (!trajectory_msgs__msg__JointTrajectoryPoint__Sequence__init(&out_ros_data.points, Points.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.points  "));
        }
        UROS2Utils::ArrayUEToROSSequence<trajectory_msgs__msg__JointTrajectoryPoint, FROSJointTrajPoint>(
            Points, out_ros_data.points.data, Points.Num());
    }
};

UCLASS()
class RCLUE_API UROS2JointTrajMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSJointTraj& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSJointTraj& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    trajectory_msgs__msg__JointTrajectory joint_trajectory_msg;
};
