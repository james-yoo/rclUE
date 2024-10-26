// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/Odometry.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "nav_msgs/msg/odometry.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2StdHeader.h"
#include "Msgs/ROS2PoseCov.h"
#include "Msgs/ROS2TwistCov.h"


// Generated
#include "ROS2Odom.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSOdom
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSStdHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChildFrameId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSPoseCov Pose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSTwistCov Twist;

	

	FROSOdom()
	{
		
	}

	void SetFromROS2(const nav_msgs__msg__Odometry& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		ChildFrameId = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.child_frame_id);

		Pose.SetFromROS2(in_ros_data.pose);

		Twist.SetFromROS2(in_ros_data.twist);

		
	}

	void SetROS2(nav_msgs__msg__Odometry& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		UROS2Utils::StringUEToROS(ChildFrameId, out_ros_data.child_frame_id);

		Pose.SetROS2(out_ros_data.pose);

		Twist.SetROS2(out_ros_data.twist);

		
	}
};

UCLASS()
class RCLUE_API UROS2OdomMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSOdom& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSOdom& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	nav_msgs__msg__Odometry odometry_msg;
};