// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Joy.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/joy.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2StdHeader.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


// Generated
#include "ROS2Joy.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJoy
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSStdHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> Axes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> Buttons;

	

	FROSJoy()
	{
		
	}

	void SetFromROS2(const sensor_msgs__msg__Joy& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		UROS2Utils::SequenceROSToUEArray<float, float>(in_ros_data.axes.data, Axes, in_ros_data.axes.size);

		UROS2Utils::SequenceROSToUEArray<int, int>(in_ros_data.buttons.data, Buttons, in_ros_data.buttons.size);

		
	}

	void SetROS2(sensor_msgs__msg__Joy& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		if (out_ros_data.axes.data) {
		rosidl_runtime_c__float32__Sequence__fini(&out_ros_data.axes);
		}
		if (!rosidl_runtime_c__float32__Sequence__init(&out_ros_data.axes, Axes.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.axes  "));}
		UROS2Utils::ArrayUEToROSSequence<float, float>(Axes, out_ros_data.axes.data, Axes.Num());

		if (out_ros_data.buttons.data) {
		rosidl_runtime_c__int32__Sequence__fini(&out_ros_data.buttons);
		}
		if (!rosidl_runtime_c__int32__Sequence__init(&out_ros_data.buttons, Buttons.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.buttons  "));}
		UROS2Utils::ArrayUEToROSSequence<int, int>(Buttons, out_ros_data.buttons.data, Buttons.Num());

		
	}
};

UCLASS()
class RCLUE_API UROS2JoyMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSJoy& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSJoy& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__Joy joy_msg;
};