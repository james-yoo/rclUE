// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/PoseWithCovariance.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "geometry_msgs/msg/pose_with_covariance.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PoseWithCovarianceMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPoseWithCovariance
{
	GENERATED_BODY()

public:
	double pose_position_x;

	double pose_position_y;

	double pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat pose_orientation;

	TArray<double> covariance;

	

	void SetFromROS2(geometry_msgs__msg__PoseWithCovariance in_ros_data)
	{
    	pose_position_x = in_ros_data.pose.position.x;

		pose_position_y = in_ros_data.pose.position.y;

		pose_position_z = in_ros_data.pose.position.z;

		pose_orientation.X = in_ros_data.pose.orientation.x;
		pose_orientation.Y = in_ros_data.pose.orientation.y;
		pose_orientation.Z = in_ros_data.pose.orientation.z;
		pose_orientation.W = in_ros_data.pose.orientation.w;

		for (int i = 0; i < 36; i++)
		{
			covariance[i] = in_ros_data.covariance[i];
		}

		
	}

	void SetROS2(geometry_msgs__msg__PoseWithCovariance& out_ros_data) const
	{
    	out_ros_data.pose.position.x = pose_position_x;

		out_ros_data.pose.position.y = pose_position_y;

		out_ros_data.pose.position.z = pose_position_z;

		out_ros_data.pose.orientation.x = pose_orientation.X;
		out_ros_data.pose.orientation.y = pose_orientation.Y;
		out_ros_data.pose.orientation.z = pose_orientation.Z;
		out_ros_data.pose.orientation.w = pose_orientation.W;

		for (int i = 0; i < 36; i++)
		{
			out_ros_data.covariance[i] = covariance[i];
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2PoseWithCovarianceMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPoseWithCovariance Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPoseWithCovariance& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__PoseWithCovariance pose_with_covariance_msg;
};