// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/CameraInfo.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "sensor_msgs/msg/camera_info.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2CameraInfoMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSCameraInfo
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
	FString distortion_model;

	TArray<double> d;

	TArray<double> k;

	TArray<double> r;

	TArray<double> p;

	unsigned int binning_x;

	unsigned int binning_y;

	unsigned int roi_x_offset;

	unsigned int roi_y_offset;

	unsigned int roi_height;

	unsigned int roi_width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool roi_do_rectify;

	

	void SetFromROS2(sensor_msgs__msg__CameraInfo in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		height = in_ros_data.height;

		width = in_ros_data.width;

		distortion_model.AppendChars(in_ros_data.distortion_model.data, in_ros_data.distortion_model.size);

		for (int i = 0; i < in_ros_data.d.size; i++)
		{
			d[i] = in_ros_data.d.data[i];
		}

		for (int i = 0; i < 9; i++)
		{
			k[i] = in_ros_data.k[i];
		}

		for (int i = 0; i < 9; i++)
		{
			r[i] = in_ros_data.r[i];
		}

		for (int i = 0; i < 12; i++)
		{
			p[i] = in_ros_data.p[i];
		}

		binning_x = in_ros_data.binning_x;

		binning_y = in_ros_data.binning_y;

		roi_x_offset = in_ros_data.roi.x_offset;

		roi_y_offset = in_ros_data.roi.y_offset;

		roi_height = in_ros_data.roi.height;

		roi_width = in_ros_data.roi.width;

		roi_do_rectify = in_ros_data.roi.do_rectify;

		
	}

	void SetROS2(sensor_msgs__msg__CameraInfo& out_ros_data) const
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

		if (out_ros_data.distortion_model.data != nullptr)
		{
			free(out_ros_data.distortion_model.data);
		}
		out_ros_data.distortion_model.data = (decltype(out_ros_data.distortion_model.data))malloc((distortion_model.Len() + 1)*sizeof(decltype(*out_ros_data.distortion_model.data)));
		memcpy(out_ros_data.distortion_model.data, TCHAR_TO_ANSI(*distortion_model), (distortion_model.Len()+1)*sizeof(char));
		out_ros_data.distortion_model.size = distortion_model.Len();
		out_ros_data.distortion_model.capacity = distortion_model.Len() + 1;

		if (out_ros_data.d.data != nullptr)
		{
			free(out_ros_data.d.data);
		}
		out_ros_data.d.data = (decltype(out_ros_data.d.data))malloc((d.Num())*sizeof(decltype(*out_ros_data.d.data)));
		
		for (int i = 0; i < d.Num(); i++)
		{
			out_ros_data.d.data[i] = d[i];
		}

		out_ros_data.d.size = d.Num();
		out_ros_data.d.capacity = d.Num();

		for (int i = 0; i < 9; i++)
		{
			out_ros_data.k[i] = k[i];
		}

		for (int i = 0; i < 9; i++)
		{
			out_ros_data.r[i] = r[i];
		}

		for (int i = 0; i < 12; i++)
		{
			out_ros_data.p[i] = p[i];
		}

		out_ros_data.binning_x = binning_x;

		out_ros_data.binning_y = binning_y;

		out_ros_data.roi.x_offset = roi_x_offset;

		out_ros_data.roi.y_offset = roi_y_offset;

		out_ros_data.roi.height = roi_height;

		out_ros_data.roi.width = roi_width;

		out_ros_data.roi.do_rectify = roi_do_rectify;

		
	}
};

UCLASS()
class RCLUE_API UROS2CameraInfoMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSCameraInfo& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSCameraInfo& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__CameraInfo camera_info_msg;
};