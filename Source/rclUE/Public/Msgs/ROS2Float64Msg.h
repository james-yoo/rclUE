// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Float64.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "example_interfaces/msg/float64.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2Float64Msg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSFloat64
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	double Data = 0.f;

	

	void SetFromROS2(const example_interfaces__msg__Float64& in_ros_data)
	{
    	Data = in_ros_data.data;

		
	}

	void SetROS2(example_interfaces__msg__Float64& out_ros_data) const
	{
    	out_ros_data.data = Data;

		
	}
};

UCLASS()
class RCLUE_API UROS2Float64Msg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSFloat64& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSFloat64& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__Float64 float64_msg;
};