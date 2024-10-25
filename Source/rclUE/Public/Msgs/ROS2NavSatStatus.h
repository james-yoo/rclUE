// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/NavSatStatus.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/nav_sat_status.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)


// Generated
#include "ROS2NavSatStatus.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSNavSatStatus
{
	GENERATED_BODY()

public:
		static constexpr int8 STATUS_UNKNOWN = -2;
	static constexpr int8 STATUS_NO_FIX = -1;
	static constexpr int8 STATUS_FIX = 0;
	static constexpr int8 STATUS_SBAS_FIX = 1;
	static constexpr int8 STATUS_GBAS_FIX = 2;
	static constexpr uint16 SERVICE_UNKNOWN = 0;
	static constexpr uint16 SERVICE_GPS = 1;
	static constexpr uint16 SERVICE_GLONASS = 2;
	static constexpr uint16 SERVICE_COMPASS = 4;
	static constexpr uint16 SERVICE_GALILEO = 8;


	UPROPERTY(EditAnywhere)
	int8 Status = 0;

	UPROPERTY(EditAnywhere)
	uint16 Service = 0;

	

	FROSNavSatStatus()
	{
		
	}

	void SetFromROS2(const sensor_msgs__msg__NavSatStatus& in_ros_data)
	{
    	Status = in_ros_data.status;

		Service = in_ros_data.service;

		
	}

	void SetROS2(sensor_msgs__msg__NavSatStatus& out_ros_data) const
	{
    	out_ros_data.status = Status;

		out_ros_data.service = Service;

		
	}
};

UCLASS()
class RCLUE_API UROS2NavSatStatusMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSNavSatStatus& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSNavSatStatus& Output) const;
	
	virtual void* Get() override;

	static int8 CONST_STATUS_UNKNOWN()
	{
		return FROSNavSatStatus::STATUS_UNKNOWN;
	}
	static int8 CONST_STATUS_NO_FIX()
	{
		return FROSNavSatStatus::STATUS_NO_FIX;
	}
	static int8 CONST_STATUS_FIX()
	{
		return FROSNavSatStatus::STATUS_FIX;
	}
	static int8 CONST_STATUS_SBAS_FIX()
	{
		return FROSNavSatStatus::STATUS_SBAS_FIX;
	}
	static int8 CONST_STATUS_GBAS_FIX()
	{
		return FROSNavSatStatus::STATUS_GBAS_FIX;
	}
	static uint16 CONST_SERVICE_UNKNOWN()
	{
		return FROSNavSatStatus::SERVICE_UNKNOWN;
	}
	static uint16 CONST_SERVICE_GPS()
	{
		return FROSNavSatStatus::SERVICE_GPS;
	}
	static uint16 CONST_SERVICE_GLONASS()
	{
		return FROSNavSatStatus::SERVICE_GLONASS;
	}
	static uint16 CONST_SERVICE_COMPASS()
	{
		return FROSNavSatStatus::SERVICE_COMPASS;
	}
	static uint16 CONST_SERVICE_GALILEO()
	{
		return FROSNavSatStatus::SERVICE_GALILEO;
	}
	


private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__NavSatStatus nav_sat_status_msg;
};