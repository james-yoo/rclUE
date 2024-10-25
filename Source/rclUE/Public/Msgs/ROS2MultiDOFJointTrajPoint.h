// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from trajectory_msgs/msg/MultiDOFJointTrajectoryPoint.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "trajectory_msgs/msg/multi_dof_joint_trajectory_point.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "geometry_msgs/msg/detail/transform__functions.h"
#include "Msgs/ROS2Twist.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "Msgs/ROS2Twist.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "Msgs/ROS2Duration.h"


// Generated
#include "ROS2MultiDOFJointTrajPoint.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMultiDOFJointTrajPoint
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTransform> Transforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FROSTwist> Velocities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FROSTwist> Accelerations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSDuration TimeFromStart;

	

	FROSMultiDOFJointTrajPoint()
	{
		
	}

	void SetFromROS2(const trajectory_msgs__msg__MultiDOFJointTrajectoryPoint& in_ros_data)
	{
    	UROS2Utils::TransformSequenceROSToUEArray(in_ros_data.transforms.data, Transforms, in_ros_data.transforms.size);

		UROS2Utils::SequenceROSToUEArray<geometry_msgs__msg__Twist, FROSTwist>(in_ros_data.velocities.data, Velocities, in_ros_data.velocities.size);

		UROS2Utils::SequenceROSToUEArray<geometry_msgs__msg__Twist, FROSTwist>(in_ros_data.accelerations.data, Accelerations, in_ros_data.accelerations.size);

		TimeFromStart.SetFromROS2(in_ros_data.time_from_start);

		
	}

	void SetROS2(trajectory_msgs__msg__MultiDOFJointTrajectoryPoint& out_ros_data) const
	{
    	if (out_ros_data.transforms.data) {
		geometry_msgs__msg__Transform__Sequence__fini(&out_ros_data.transforms);
		}
		if (!geometry_msgs__msg__Transform__Sequence__init(&out_ros_data.transforms, Transforms.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.transforms  "));}
		UROS2Utils::TransformArrayUEToROSSequence(Transforms, out_ros_data.transforms.data, Transforms.Num());

		if (out_ros_data.velocities.data) {
		geometry_msgs__msg__Twist__Sequence__fini(&out_ros_data.velocities);
		}
		if (!geometry_msgs__msg__Twist__Sequence__init(&out_ros_data.velocities, Velocities.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.velocities  "));}
		UROS2Utils::ArrayUEToROSSequence<geometry_msgs__msg__Twist, FROSTwist>(Velocities, out_ros_data.velocities.data, Velocities.Num());

		if (out_ros_data.accelerations.data) {
		geometry_msgs__msg__Twist__Sequence__fini(&out_ros_data.accelerations);
		}
		if (!geometry_msgs__msg__Twist__Sequence__init(&out_ros_data.accelerations, Accelerations.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.accelerations  "));}
		UROS2Utils::ArrayUEToROSSequence<geometry_msgs__msg__Twist, FROSTwist>(Accelerations, out_ros_data.accelerations.data, Accelerations.Num());

		TimeFromStart.SetROS2(out_ros_data.time_from_start);

		
	}
};

UCLASS()
class RCLUE_API UROS2MultiDOFJointTrajPointMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSMultiDOFJointTrajPoint& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSMultiDOFJointTrajPoint& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	trajectory_msgs__msg__MultiDOFJointTrajectoryPoint multi_dof_joint_trajectory_point_msg;
};