// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/Joy.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "sensor_msgs/msg/joy.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2JoyMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJoy
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int HeaderStampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int HeaderStampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HeaderFrameId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> Axes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> Buttons;

	

	void SetFromROS2(const sensor_msgs__msg__Joy& in_ros_data)
	{
    	HeaderStampSec = in_ros_data.header.stamp.sec;

		HeaderStampNanosec = in_ros_data.header.stamp.nanosec;

		HeaderFrameId.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		for (auto i = 0; i < in_ros_data.axes.size; ++i)
		{
			Axes.Emplace(in_ros_data.axes.data[i]);
		}

		for (auto i = 0; i < in_ros_data.buttons.size; ++i)
		{
			Buttons.Emplace(in_ros_data.buttons.data[i]);
		}

		
	}

	void SetROS2(sensor_msgs__msg__Joy& out_ros_data) const
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

		if (out_ros_data.axes.data != nullptr)
		{
			free(out_ros_data.axes.data);
		}
		out_ros_data.axes.data = (decltype(out_ros_data.axes.data))malloc((Axes.Num())*sizeof(decltype(*out_ros_data.axes.data)));
		
		for (auto i = 0; i < Axes.Num(); ++i)
		{
			out_ros_data.axes.data[i] = Axes[i];
		}

		out_ros_data.axes.size = Axes.Num();
		out_ros_data.axes.capacity = Axes.Num();

		if (out_ros_data.buttons.data != nullptr)
		{
			free(out_ros_data.buttons.data);
		}
		out_ros_data.buttons.data = (decltype(out_ros_data.buttons.data))malloc((Buttons.Num())*sizeof(decltype(*out_ros_data.buttons.data)));
		
		for (auto i = 0; i < Buttons.Num(); ++i)
		{
			out_ros_data.buttons.data[i] = Buttons[i];
		}

		out_ros_data.buttons.size = Buttons.Num();
		out_ros_data.buttons.capacity = Buttons.Num();

		
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