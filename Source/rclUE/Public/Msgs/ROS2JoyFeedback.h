// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/JoyFeedback.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/joy_feedback.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)


// Generated
#include "ROS2JoyFeedback.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJoyFeedback
{
	GENERATED_BODY()

public:
		static constexpr uint8 TYPE_LED = 0;
	static constexpr uint8 TYPE_RUMBLE = 1;
	static constexpr uint8 TYPE_BUZZER = 2;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Type = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Id = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Intensity = 0.f;

	

	FROSJoyFeedback()
	{
		
	}

	void SetFromROS2(const sensor_msgs__msg__JoyFeedback& in_ros_data)
	{
    	Type = in_ros_data.type;

		Id = in_ros_data.id;

		Intensity = in_ros_data.intensity;

		
	}

	void SetROS2(sensor_msgs__msg__JoyFeedback& out_ros_data) const
	{
    	out_ros_data.type = Type;

		out_ros_data.id = Id;

		out_ros_data.intensity = Intensity;

		
	}
};

UCLASS()
class RCLUE_API UROS2JoyFeedbackMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSJoyFeedback& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSJoyFeedback& Output) const;
	
	virtual void* Get() override;

	UFUNCTION(BlueprintCallable)
	static uint8 CONST_TYPE_LED()
	{
		return FROSJoyFeedback::TYPE_LED;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_TYPE_RUMBLE()
	{
		return FROSJoyFeedback::TYPE_RUMBLE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_TYPE_BUZZER()
	{
		return FROSJoyFeedback::TYPE_BUZZER;
	}
	


private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__JoyFeedback joy_feedback_msg;
};