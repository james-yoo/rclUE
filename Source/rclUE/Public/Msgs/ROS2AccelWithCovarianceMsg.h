// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/AccelWithCovariance.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "geometry_msgs/msg/accel_with_covariance.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2AccelWithCovarianceMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSAccelWithCovariance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector accel_linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector accel_angular;

	TArray<double> covariance;

	

	void SetFromROS2(geometry_msgs__msg__AccelWithCovariance in_ros_data)
	{
    	accel_linear.X = in_ros_data.accel.linear.x;
		accel_linear.Y = in_ros_data.accel.linear.y;
		accel_linear.Z = in_ros_data.accel.linear.z;

		accel_angular.X = in_ros_data.accel.angular.x;
		accel_angular.Y = in_ros_data.accel.angular.y;
		accel_angular.Z = in_ros_data.accel.angular.z;

		for (int i = 0; i < 36; i++)
		{
			covariance[i] = in_ros_data.covariance[i];
		}

		
	}

	void SetROS2(geometry_msgs__msg__AccelWithCovariance& out_ros_data) const
	{
    	out_ros_data.accel.linear.x = accel_linear.X;
		out_ros_data.accel.linear.y = accel_linear.Y;
		out_ros_data.accel.linear.z = accel_linear.Z;

		out_ros_data.accel.angular.x = accel_angular.X;
		out_ros_data.accel.angular.y = accel_angular.Y;
		out_ros_data.accel.angular.z = accel_angular.Z;

		for (int i = 0; i < 36; i++)
		{
			out_ros_data.covariance[i] = covariance[i];
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2AccelWithCovarianceMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSAccelWithCovariance& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSAccelWithCovariance& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__AccelWithCovariance accel_with_covariance_msg;
};