// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/TwistStamped.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/twist_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2StdHeader.h"
#include "Msgs/ROS2Twist.h"


// Generated
#include "ROS2TwistStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTwistStamped
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSStdHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSTwist Twist;

	

	FROSTwistStamped()
	{
		
	}

	void SetFromROS2(const geometry_msgs__msg__TwistStamped& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		Twist.SetFromROS2(in_ros_data.twist);

		
	}

	void SetROS2(geometry_msgs__msg__TwistStamped& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		Twist.SetROS2(out_ros_data.twist);

		
	}
};

UCLASS()
class RCLUE_API UROS2TwistStampedMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSTwistStamped& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSTwistStamped& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__TwistStamped twist_stamped_msg;
};