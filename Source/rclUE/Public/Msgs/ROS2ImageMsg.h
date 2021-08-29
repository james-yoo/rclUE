// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/Image.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "sensor_msgs/msg/image.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2ImageMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSImage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	unsigned int height;

	unsigned int width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString encoding;

	uint8 is_bigendian;

	unsigned int step;

	TArray<uint8> data;

	

	void SetFromROS2(sensor_msgs__msg__Image in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		height = in_ros_data.height;

		width = in_ros_data.width;

		encoding.AppendChars(in_ros_data.encoding.data, in_ros_data.encoding.size);

		is_bigendian = in_ros_data.is_bigendian;

		step = in_ros_data.step;

		for (int i = 0; i < in_ros_data.data.size; i++)
		{
			data[i] = in_ros_data.data.data[i];
		}

		
	}

	void SetROS2(sensor_msgs__msg__Image& out_ros_data) const
	{
    	out_ros_data.header.stamp.sec = header_stamp_sec;

		out_ros_data.header.stamp.nanosec = header_stamp_nanosec;

		if (out_ros_data.header.frame_id.data != nullptr)
		{
			free(out_ros_data.header.frame_id.data);
		}
		out_ros_data.header.frame_id.data = (decltype(out_ros_data.header.frame_id.data))malloc((header_frame_id.Len() + 1)*sizeof(decltype(*out_ros_data.header.frame_id.data)));
		memcpy(out_ros_data.header.frame_id.data, TCHAR_TO_ANSI(*header_frame_id), (header_frame_id.Len()+1)*sizeof(char));
		out_ros_data.header.frame_id.size = header_frame_id.Len();
		out_ros_data.header.frame_id.capacity = header_frame_id.Len() + 1;

		out_ros_data.height = height;

		out_ros_data.width = width;

		if (out_ros_data.encoding.data != nullptr)
		{
			free(out_ros_data.encoding.data);
		}
		out_ros_data.encoding.data = (decltype(out_ros_data.encoding.data))malloc((encoding.Len() + 1)*sizeof(decltype(*out_ros_data.encoding.data)));
		memcpy(out_ros_data.encoding.data, TCHAR_TO_ANSI(*encoding), (encoding.Len()+1)*sizeof(char));
		out_ros_data.encoding.size = encoding.Len();
		out_ros_data.encoding.capacity = encoding.Len() + 1;

		out_ros_data.is_bigendian = is_bigendian;

		out_ros_data.step = step;

		if (out_ros_data.data.data != nullptr)
		{
			free(out_ros_data.data.data);
		}
		out_ros_data.data.data = (decltype(out_ros_data.data.data))malloc((data.Num())*sizeof(decltype(*out_ros_data.data.data)));
		
		for (int i = 0; i < data.Num(); i++)
		{
			out_ros_data.data.data[i] = data[i];
		}

		out_ros_data.data.size = data.Num();
		out_ros_data.data.capacity = data.Num();

		
	}
};

UCLASS()
class RCLUE_API UROS2ImageMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSImage Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSImage& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__Image image_msg;
};