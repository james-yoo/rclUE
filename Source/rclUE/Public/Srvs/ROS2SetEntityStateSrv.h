// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/SetEntityState.srv - do not modify

#pragma once

#include "CoreMinimal.h"

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue_msgs/srv/set_entity_state.h"

#include "ROS2SetEntityStateSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSetEntityState_Request
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString state_name;

	double state_pose_position_x;

	double state_pose_position_y;

	double state_pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat state_pose_orientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector state_twist_linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector state_twist_angular;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString state_reference_frame;

	

	void SetFromROS2(ue_msgs__srv__SetEntityState_Request in_ros_data)
	{
    	state_name.AppendChars(in_ros_data.state.name.data, in_ros_data.state.name.size);

		state_pose_position_x = in_ros_data.state.pose.position.x;

		state_pose_position_y = in_ros_data.state.pose.position.y;

		state_pose_position_z = in_ros_data.state.pose.position.z;

		state_pose_orientation.X = in_ros_data.state.pose.orientation.x;
		state_pose_orientation.Y = in_ros_data.state.pose.orientation.y;
		state_pose_orientation.Z = in_ros_data.state.pose.orientation.z;
		state_pose_orientation.W = in_ros_data.state.pose.orientation.w;

		state_twist_linear.X = in_ros_data.state.twist.linear.x;
		state_twist_linear.Y = in_ros_data.state.twist.linear.y;
		state_twist_linear.Z = in_ros_data.state.twist.linear.z;

		state_twist_angular.X = in_ros_data.state.twist.angular.x;
		state_twist_angular.Y = in_ros_data.state.twist.angular.y;
		state_twist_angular.Z = in_ros_data.state.twist.angular.z;

		state_reference_frame.AppendChars(in_ros_data.state.reference_frame.data, in_ros_data.state.reference_frame.size);

		
	}

	void SetROS2(ue_msgs__srv__SetEntityState_Request& out_ros_data) const
	{
    	if (out_ros_data.state.name.data != nullptr)
		{
			free(out_ros_data.state.name.data);
		}
		out_ros_data.state.name.data = (decltype(out_ros_data.state.name.data))malloc((state_name.Len() + 1)*sizeof(decltype(*out_ros_data.state.name.data)));
		memcpy(out_ros_data.state.name.data, TCHAR_TO_ANSI(*state_name), (state_name.Len()+1)*sizeof(char));
		out_ros_data.state.name.size = state_name.Len();
		out_ros_data.state.name.capacity = state_name.Len() + 1;

		out_ros_data.state.pose.position.x = state_pose_position_x;

		out_ros_data.state.pose.position.y = state_pose_position_y;

		out_ros_data.state.pose.position.z = state_pose_position_z;

		out_ros_data.state.pose.orientation.x = state_pose_orientation.X;
		out_ros_data.state.pose.orientation.y = state_pose_orientation.Y;
		out_ros_data.state.pose.orientation.z = state_pose_orientation.Z;
		out_ros_data.state.pose.orientation.w = state_pose_orientation.W;

		out_ros_data.state.twist.linear.x = state_twist_linear.X;
		out_ros_data.state.twist.linear.y = state_twist_linear.Y;
		out_ros_data.state.twist.linear.z = state_twist_linear.Z;

		out_ros_data.state.twist.angular.x = state_twist_angular.X;
		out_ros_data.state.twist.angular.y = state_twist_angular.Y;
		out_ros_data.state.twist.angular.z = state_twist_angular.Z;

		if (out_ros_data.state.reference_frame.data != nullptr)
		{
			free(out_ros_data.state.reference_frame.data);
		}
		out_ros_data.state.reference_frame.data = (decltype(out_ros_data.state.reference_frame.data))malloc((state_reference_frame.Len() + 1)*sizeof(decltype(*out_ros_data.state.reference_frame.data)));
		memcpy(out_ros_data.state.reference_frame.data, TCHAR_TO_ANSI(*state_reference_frame), (state_reference_frame.Len()+1)*sizeof(char));
		out_ros_data.state.reference_frame.size = state_reference_frame.Len();
		out_ros_data.state.reference_frame.capacity = state_reference_frame.Len() + 1;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSetEntityState_Response
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool success;

	

	void SetFromROS2(ue_msgs__srv__SetEntityState_Response in_ros_data)
	{
    	success = in_ros_data.success;

		
	}

	void SetROS2(ue_msgs__srv__SetEntityState_Response& out_ros_data) const
	{
    	out_ros_data.success = success;

		
	}
};

UCLASS()
class RCLUE_API UROS2SetEntityStateSrv : public UROS2GenericSrv
{
	GENERATED_BODY()

public:
  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_service_type_support_t* GetTypeSupport() const override;
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetRequest(const FROSSetEntityState_Request& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSSetEntityState_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSSetEntityState_Response& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSSetEntityState_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue_msgs__srv__SetEntityState_Request SetEntityState_req;
	ue_msgs__srv__SetEntityState_Response SetEntityState_res;
};