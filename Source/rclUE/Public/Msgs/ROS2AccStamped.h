// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/AccelStamped.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/accel_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2StdHeader.h"
#include "Msgs/ROS2Acc.h"


// Generated
#include "ROS2AccStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSAccStamped
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSStdHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSAcc Accel;

	

	FROSAccStamped()
	{
		
	}

	void SetFromROS2(const geometry_msgs__msg__AccelStamped& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		Accel.SetFromROS2(in_ros_data.accel);

		
	}

	void SetROS2(geometry_msgs__msg__AccelStamped& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		Accel.SetROS2(out_ros_data.accel);

		
	}
};

UCLASS()
class RCLUE_API UROS2AccStampedMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSAccStamped& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSAccStamped& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__AccelStamped accel_stamped_msg;
};