// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/MapMetaData.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "nav_msgs/msg/map_meta_data.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2MapMetaDataMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMapMetaData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int map_load_time_sec;

	unsigned int map_load_time_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float resolution;

	unsigned int width;

	unsigned int height;

	double origin_position_x;

	double origin_position_y;

	double origin_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat origin_orientation;

	

	void SetFromROS2(const nav_msgs__msg__MapMetaData& in_ros_data)
	{
    	map_load_time_sec = in_ros_data.map_load_time.sec;

		map_load_time_nanosec = in_ros_data.map_load_time.nanosec;

		resolution = in_ros_data.resolution;

		width = in_ros_data.width;

		height = in_ros_data.height;

		origin_position_x = in_ros_data.origin.position.x;

		origin_position_y = in_ros_data.origin.position.y;

		origin_position_z = in_ros_data.origin.position.z;

		origin_orientation.X = in_ros_data.origin.orientation.x;
		origin_orientation.Y = in_ros_data.origin.orientation.y;
		origin_orientation.Z = in_ros_data.origin.orientation.z;
		origin_orientation.W = in_ros_data.origin.orientation.w;

		
	}

	void SetROS2(nav_msgs__msg__MapMetaData& out_ros_data) const
	{
    	out_ros_data.map_load_time.sec = map_load_time_sec;

		out_ros_data.map_load_time.nanosec = map_load_time_nanosec;

		out_ros_data.resolution = resolution;

		out_ros_data.width = width;

		out_ros_data.height = height;

		out_ros_data.origin.position.x = origin_position_x;

		out_ros_data.origin.position.y = origin_position_y;

		out_ros_data.origin.position.z = origin_position_z;

		out_ros_data.origin.orientation.x = origin_orientation.X;
		out_ros_data.origin.orientation.y = origin_orientation.Y;
		out_ros_data.origin.orientation.z = origin_orientation.Z;
		out_ros_data.origin.orientation.w = origin_orientation.W;

		
	}
};

UCLASS()
class RCLUE_API UROS2MapMetaDataMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSMapMetaData& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSMapMetaData& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	nav_msgs__msg__MapMetaData map_meta_data_msg;
};