// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/MarkerArray.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/marker_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Marker.h"
#include "visualization_msgs/msg/detail/marker__functions.h"


// Generated
#include "ROS2MarkerArray.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMarkerArray
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FROSMarker> Markers;

	

	FROSMarkerArray()
	{
		
	}

	void SetFromROS2(const visualization_msgs__msg__MarkerArray& in_ros_data)
	{
    	UROS2Utils::SequenceROSToUEArray<visualization_msgs__msg__Marker, FROSMarker>(in_ros_data.markers.data, Markers, in_ros_data.markers.size);

		
	}

	void SetROS2(visualization_msgs__msg__MarkerArray& out_ros_data) const
	{
    	if (out_ros_data.markers.data) {
		visualization_msgs__msg__Marker__Sequence__fini(&out_ros_data.markers);
		}
		if (!visualization_msgs__msg__Marker__Sequence__init(&out_ros_data.markers, Markers.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.markers  "));}
		UROS2Utils::ArrayUEToROSSequence<visualization_msgs__msg__Marker, FROSMarker>(Markers, out_ros_data.markers.data, Markers.Num());

		
	}
};

UCLASS()
class RCLUE_API UROS2MarkerArrayMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSMarkerArray& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSMarkerArray& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	visualization_msgs__msg__MarkerArray marker_array_msg;
};