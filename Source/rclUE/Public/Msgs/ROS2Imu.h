// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Imu.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/imu.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


// Generated
#include "ROS2Imu.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSImu
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat Orientation = FQuat::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<double> OrientationCovariance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AngularVelocity = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<double> AngularVelocityCovariance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LinearAcceleration = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<double> LinearAccelerationCovariance;

	

	FROSImu()
	{
		OrientationCovariance.SetNumZeroed(9);

		AngularVelocityCovariance.SetNumZeroed(9);

		LinearAccelerationCovariance.SetNumZeroed(9);

		
	}

	void SetFromROS2(const sensor_msgs__msg__Imu& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		Orientation = UROS2Utils::QuatROSToUE(in_ros_data.orientation);

		UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.orientation_covariance, OrientationCovariance, 9);

		AngularVelocity = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.angular_velocity);

		UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.angular_velocity_covariance, AngularVelocityCovariance, 9);

		LinearAcceleration = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.linear_acceleration);

		UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.linear_acceleration_covariance, LinearAccelerationCovariance, 9);

		
	}

	void SetROS2(sensor_msgs__msg__Imu& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		out_ros_data.orientation = UROS2Utils::QuatUEToROS(Orientation);

		UROS2Utils::ArrayUEToROSSequence<double, double>(OrientationCovariance, out_ros_data.orientation_covariance, 9);

		out_ros_data.angular_velocity = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(AngularVelocity);

		UROS2Utils::ArrayUEToROSSequence<double, double>(AngularVelocityCovariance, out_ros_data.angular_velocity_covariance, 9);

		out_ros_data.linear_acceleration = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(LinearAcceleration);

		UROS2Utils::ArrayUEToROSSequence<double, double>(LinearAccelerationCovariance, out_ros_data.linear_acceleration_covariance, 9);

		
	}
};

UCLASS()
class RCLUE_API UROS2ImuMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSImu& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSImu& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__Imu imu_msg;
};