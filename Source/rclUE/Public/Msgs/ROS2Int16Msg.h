// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int16.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "example_interfaces/msg/int16.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2Int16Msg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSInt16
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int16 Data = 0;

	

	void SetFromROS2(const example_interfaces__msg__Int16& in_ros_data)
	{
    	Data = in_ros_data.data;

		
	}

	void SetROS2(example_interfaces__msg__Int16& out_ros_data) const
	{
    	out_ros_data.data = Data;

		
	}
};

UCLASS()
class RCLUE_API UROS2Int16Msg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSInt16& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSInt16& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	example_interfaces__msg__Int16 int16_msg;
};