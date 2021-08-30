// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Twist.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "geometry_msgs/msg/twist.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2TwistMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTwist
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector angular;

	

	void SetFromROS2(geometry_msgs__msg__Twist in_ros_data)
	{
    	linear.X = in_ros_data.linear.x;
		linear.Y = in_ros_data.linear.y;
		linear.Z = in_ros_data.linear.z;

		angular.X = in_ros_data.angular.x;
		angular.Y = in_ros_data.angular.y;
		angular.Z = in_ros_data.angular.z;

		
	}

	void SetROS2(geometry_msgs__msg__Twist& out_ros_data) const
	{
    	out_ros_data.linear.x = linear.X;
		out_ros_data.linear.y = linear.Y;
		out_ros_data.linear.z = linear.Z;

		out_ros_data.angular.x = angular.X;
		out_ros_data.angular.y = angular.Y;
		out_ros_data.angular.z = angular.Z;

		
	}
};

UCLASS()
class RCLUE_API UROS2TwistMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSTwist& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSTwist& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Twist twist_msg;
};