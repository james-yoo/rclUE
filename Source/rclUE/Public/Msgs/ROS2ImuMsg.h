// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Imu.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/imu.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2ImuMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSImu
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int HeaderStampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int HeaderStampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HeaderFrameId;

	UPROPERTY(EditAnywhere)
	double OrientationX = 0.f;

	UPROPERTY(EditAnywhere)
	double OrientationY = 0.f;

	UPROPERTY(EditAnywhere)
	double OrientationZ = 0.f;

	UPROPERTY(EditAnywhere)
	double OrientationW = 0.f;

	UPROPERTY(EditAnywhere)
	TArray<double> OrientationCovariance;

	UPROPERTY(EditAnywhere)
	double AngularVelocityX = 0.f;

	UPROPERTY(EditAnywhere)
	double AngularVelocityY = 0.f;

	UPROPERTY(EditAnywhere)
	double AngularVelocityZ = 0.f;

	UPROPERTY(EditAnywhere)
	TArray<double> AngularVelocityCovariance;

	UPROPERTY(EditAnywhere)
	double LinearAccelerationX = 0.f;

	UPROPERTY(EditAnywhere)
	double LinearAccelerationY = 0.f;

	UPROPERTY(EditAnywhere)
	double LinearAccelerationZ = 0.f;

	UPROPERTY(EditAnywhere)
	TArray<double> LinearAccelerationCovariance;

	

	void SetFromROS2(const sensor_msgs__msg__Imu& in_ros_data)
	{
    	HeaderStampSec = in_ros_data.header.stamp.sec;

		HeaderStampNanosec = in_ros_data.header.stamp.nanosec;

		HeaderFrameId.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		OrientationX = in_ros_data.orientation.x;

		OrientationY = in_ros_data.orientation.y;

		OrientationZ = in_ros_data.orientation.z;

		OrientationW = in_ros_data.orientation.w;

		for (auto i = 0; i < 9; ++i)
		{
			OrientationCovariance.Emplace(in_ros_data.orientation_covariance[i]);
		}

		AngularVelocityX = in_ros_data.angular_velocity.x;

		AngularVelocityY = in_ros_data.angular_velocity.y;

		AngularVelocityZ = in_ros_data.angular_velocity.z;

		for (auto i = 0; i < 9; ++i)
		{
			AngularVelocityCovariance.Emplace(in_ros_data.angular_velocity_covariance[i]);
		}

		LinearAccelerationX = in_ros_data.linear_acceleration.x;

		LinearAccelerationY = in_ros_data.linear_acceleration.y;

		LinearAccelerationZ = in_ros_data.linear_acceleration.z;

		for (auto i = 0; i < 9; ++i)
		{
			LinearAccelerationCovariance.Emplace(in_ros_data.linear_acceleration_covariance[i]);
		}

		
	}

	void SetROS2(sensor_msgs__msg__Imu& out_ros_data) const
	{
    	out_ros_data.header.stamp.sec = HeaderStampSec;

		out_ros_data.header.stamp.nanosec = HeaderStampNanosec;

		{
			FTCHARToUTF8 strUtf8( *HeaderFrameId );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.header.frame_id.data != nullptr)
		{
			free(out_ros_data.header.frame_id.data);
		}
		out_ros_data.header.frame_id.data = (decltype(out_ros_data.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.header.frame_id.data)));
		memcpy(out_ros_data.header.frame_id.data, TCHAR_TO_UTF8(*HeaderFrameId), (strLength+1)*sizeof(char));
			out_ros_data.header.frame_id.size = strLength;
			out_ros_data.header.frame_id.capacity = strLength + 1;
		}

		out_ros_data.orientation.x = OrientationX;

		out_ros_data.orientation.y = OrientationY;

		out_ros_data.orientation.z = OrientationZ;

		out_ros_data.orientation.w = OrientationW;

		for (auto i = 0; i < 9; ++i)
		{
			out_ros_data.orientation_covariance[i] = OrientationCovariance[i];
		}

		out_ros_data.angular_velocity.x = AngularVelocityX;

		out_ros_data.angular_velocity.y = AngularVelocityY;

		out_ros_data.angular_velocity.z = AngularVelocityZ;

		for (auto i = 0; i < 9; ++i)
		{
			out_ros_data.angular_velocity_covariance[i] = AngularVelocityCovariance[i];
		}

		out_ros_data.linear_acceleration.x = LinearAccelerationX;

		out_ros_data.linear_acceleration.y = LinearAccelerationY;

		out_ros_data.linear_acceleration.z = LinearAccelerationZ;

		for (auto i = 0; i < 9; ++i)
		{
			out_ros_data.linear_acceleration_covariance[i] = LinearAccelerationCovariance[i];
		}

		
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