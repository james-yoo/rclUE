// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from std_msgs/msg/Header.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "std_msgs/msg/header.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2HeaderMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSHeader
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int StampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int StampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FrameId;

	

	void SetFromROS2(const std_msgs__msg__Header& in_ros_data)
	{
    	StampSec = in_ros_data.stamp.sec;

		StampNanosec = in_ros_data.stamp.nanosec;

		FrameId.AppendChars(in_ros_data.frame_id.data, in_ros_data.frame_id.size);

		
	}

	void SetROS2(std_msgs__msg__Header& out_ros_data) const
	{
    	out_ros_data.stamp.sec = StampSec;

		out_ros_data.stamp.nanosec = StampNanosec;

		{
			FTCHARToUTF8 strUtf8( *FrameId );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.frame_id.data != nullptr)
		{
			free(out_ros_data.frame_id.data);
		}
		out_ros_data.frame_id.data = (decltype(out_ros_data.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.frame_id.data)));
		memcpy(out_ros_data.frame_id.data, TCHAR_TO_UTF8(*FrameId), (strLength+1)*sizeof(char));
			out_ros_data.frame_id.size = strLength;
			out_ros_data.frame_id.capacity = strLength + 1;
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2HeaderMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSHeader& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSHeader& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	std_msgs__msg__Header header_msg;
};