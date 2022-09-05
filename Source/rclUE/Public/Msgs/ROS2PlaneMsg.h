// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from shape_msgs/msg/Plane.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "shape_msgs/msg/plane.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PlaneMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPlane
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<double> Coef;

	

	void SetFromROS2(const shape_msgs__msg__Plane& in_ros_data)
	{
    	for (auto i = 0; i < 4; ++i)
		{
			Coef.Emplace(in_ros_data.coef[i]);
		}

		
	}

	void SetROS2(shape_msgs__msg__Plane& out_ros_data) const
	{
    	for (auto i = 0; i < 4; ++i)
		{
			out_ros_data.coef[i] = Coef[i];
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2PlaneMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPlane& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPlane& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	shape_msgs__msg__Plane plane_msg;
};