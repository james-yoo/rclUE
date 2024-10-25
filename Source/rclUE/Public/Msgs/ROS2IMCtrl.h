// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerControl.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/interactive_marker_control.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Marker.h"
#include "visualization_msgs/msg/detail/marker__functions.h"


// Generated
#include "ROS2IMCtrl.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSIMCtrl
{
	GENERATED_BODY()

public:
		static constexpr uint8 INHERIT = 0;
	static constexpr uint8 FIXED = 1;
	static constexpr uint8 VIEW_FACING = 2;
	static constexpr uint8 NONE = 0;
	static constexpr uint8 MENU = 1;
	static constexpr uint8 BUTTON = 2;
	static constexpr uint8 MOVE_AXIS = 3;
	static constexpr uint8 MOVE_PLANE = 4;
	static constexpr uint8 ROTATE_AXIS = 5;
	static constexpr uint8 MOVE_ROTATE = 6;
	static constexpr uint8 MOVE_3D = 7;
	static constexpr uint8 ROTATE_3D = 8;
	static constexpr uint8 MOVE_ROTATE_3D = 9;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat Orientation = FQuat::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 OrientationMode = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 InteractionMode = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAlwaysVisible = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FROSMarker> Markers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIndependentMarkerOrientation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	

	FROSIMCtrl()
	{
		
	}

	void SetFromROS2(const visualization_msgs__msg__InteractiveMarkerControl& in_ros_data)
	{
    	Name = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.name);

		Orientation = UROS2Utils::QuatROSToUE(in_ros_data.orientation);

		OrientationMode = in_ros_data.orientation_mode;

		InteractionMode = in_ros_data.interaction_mode;

		bAlwaysVisible = in_ros_data.always_visible;

		UROS2Utils::SequenceROSToUEArray<visualization_msgs__msg__Marker, FROSMarker>(in_ros_data.markers.data, Markers, in_ros_data.markers.size);

		bIndependentMarkerOrientation = in_ros_data.independent_marker_orientation;

		Description = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.description);

		
	}

	void SetROS2(visualization_msgs__msg__InteractiveMarkerControl& out_ros_data) const
	{
    	UROS2Utils::StringUEToROS(Name, out_ros_data.name);

		out_ros_data.orientation = UROS2Utils::QuatUEToROS(Orientation);

		out_ros_data.orientation_mode = OrientationMode;

		out_ros_data.interaction_mode = InteractionMode;

		out_ros_data.always_visible = bAlwaysVisible;

		if (out_ros_data.markers.data) {
		visualization_msgs__msg__Marker__Sequence__fini(&out_ros_data.markers);
		}
		if (!visualization_msgs__msg__Marker__Sequence__init(&out_ros_data.markers, Markers.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.markers  "));}
		UROS2Utils::ArrayUEToROSSequence<visualization_msgs__msg__Marker, FROSMarker>(Markers, out_ros_data.markers.data, Markers.Num());

		out_ros_data.independent_marker_orientation = bIndependentMarkerOrientation;

		UROS2Utils::StringUEToROS(Description, out_ros_data.description);

		
	}
};

UCLASS()
class RCLUE_API UROS2IMCtrlMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSIMCtrl& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSIMCtrl& Output) const;
	
	virtual void* Get() override;

	UFUNCTION(BlueprintCallable)
	static uint8 CONST_INHERIT()
	{
		return FROSIMCtrl::INHERIT;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_FIXED()
	{
		return FROSIMCtrl::FIXED;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_VIEW_FACING()
	{
		return FROSIMCtrl::VIEW_FACING;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_NONE()
	{
		return FROSIMCtrl::NONE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MENU()
	{
		return FROSIMCtrl::MENU;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_BUTTON()
	{
		return FROSIMCtrl::BUTTON;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MOVE_AXIS()
	{
		return FROSIMCtrl::MOVE_AXIS;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MOVE_PLANE()
	{
		return FROSIMCtrl::MOVE_PLANE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_ROTATE_AXIS()
	{
		return FROSIMCtrl::ROTATE_AXIS;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MOVE_ROTATE()
	{
		return FROSIMCtrl::MOVE_ROTATE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MOVE_3D()
	{
		return FROSIMCtrl::MOVE_3D;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_ROTATE_3D()
	{
		return FROSIMCtrl::ROTATE_3D;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_MOVE_ROTATE_3D()
	{
		return FROSIMCtrl::MOVE_ROTATE_3D;
	}
	


private:
	virtual FString MsgToString() const override;

	visualization_msgs__msg__InteractiveMarkerControl interactive_marker_control_msg;
};