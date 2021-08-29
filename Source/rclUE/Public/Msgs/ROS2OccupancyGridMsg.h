// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/OccupancyGrid.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "nav_msgs/msg/occupancy_grid.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2OccupancyGridMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSOccupancyGrid
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int info_map_load_time_sec;

	unsigned int info_map_load_time_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float info_resolution;

	unsigned int info_width;

	unsigned int info_height;

	double info_origin_position_x;

	double info_origin_position_y;

	double info_origin_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat info_origin_orientation;

	TArray<int8> data;

	

	void SetFromROS2(nav_msgs__msg__OccupancyGrid in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		info_map_load_time_sec = in_ros_data.info.map_load_time.sec;

		info_map_load_time_nanosec = in_ros_data.info.map_load_time.nanosec;

		info_resolution = in_ros_data.info.resolution;

		info_width = in_ros_data.info.width;

		info_height = in_ros_data.info.height;

		info_origin_position_x = in_ros_data.info.origin.position.x;

		info_origin_position_y = in_ros_data.info.origin.position.y;

		info_origin_position_z = in_ros_data.info.origin.position.z;

		info_origin_orientation.X = in_ros_data.info.origin.orientation.x;
		info_origin_orientation.Y = in_ros_data.info.origin.orientation.y;
		info_origin_orientation.Z = in_ros_data.info.origin.orientation.z;
		info_origin_orientation.W = in_ros_data.info.origin.orientation.w;

		for (int i = 0; i < in_ros_data.data.size; i++)
		{
			data[i] = in_ros_data.data.data[i];
		}

		
	}

	void SetROS2(nav_msgs__msg__OccupancyGrid& out_ros_data) const
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

		out_ros_data.info.map_load_time.sec = info_map_load_time_sec;

		out_ros_data.info.map_load_time.nanosec = info_map_load_time_nanosec;

		out_ros_data.info.resolution = info_resolution;

		out_ros_data.info.width = info_width;

		out_ros_data.info.height = info_height;

		out_ros_data.info.origin.position.x = info_origin_position_x;

		out_ros_data.info.origin.position.y = info_origin_position_y;

		out_ros_data.info.origin.position.z = info_origin_position_z;

		out_ros_data.info.origin.orientation.x = info_origin_orientation.X;
		out_ros_data.info.origin.orientation.y = info_origin_orientation.Y;
		out_ros_data.info.origin.orientation.z = info_origin_orientation.Z;
		out_ros_data.info.origin.orientation.w = info_origin_orientation.W;

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
class RCLUE_API UROS2OccupancyGridMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSOccupancyGrid Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSOccupancyGrid& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	nav_msgs__msg__OccupancyGrid occupancy_grid_msg;
};