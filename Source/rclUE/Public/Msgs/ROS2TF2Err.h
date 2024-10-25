// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from tf2_msgs/msg/TF2Error.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "tf2_msgs/msg/tf2_error.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)


// Generated
#include "ROS2TF2Err.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTF2Err
{
	GENERATED_BODY()

public:
		static constexpr uint8 NO_ERROR = 0;
	static constexpr uint8 LOOKUP_ERROR = 1;
	static constexpr uint8 CONNECTIVITY_ERROR = 2;
	static constexpr uint8 EXTRAPOLATION_ERROR = 3;
	static constexpr uint8 INVALID_ARGUMENT_ERROR = 4;
	static constexpr uint8 TIMEOUT_ERROR = 5;
	static constexpr uint8 TRANSFORM_ERROR = 6;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Error = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ErrorString;

	

	FROSTF2Err()
	{
		
	}

	void SetFromROS2(const tf2_msgs__msg__TF2Error& in_ros_data)
	{
    	Error = in_ros_data.error;

		ErrorString = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.error_string);

		
	}

	void SetROS2(tf2_msgs__msg__TF2Error& out_ros_data) const
	{
    	out_ros_data.error = Error;

		UROS2Utils::StringUEToROS(ErrorString, out_ros_data.error_string);

		
	}
};

UCLASS()
class RCLUE_API UROS2TF2ErrMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSTF2Err& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSTF2Err& Output) const;
	
	virtual void* Get() override;

	UFUNCTION(BlueprintCallable)
	static uint8 CONST_NO_ERROR()
	{
		return FROSTF2Err::NO_ERROR;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_LOOKUP_ERROR()
	{
		return FROSTF2Err::LOOKUP_ERROR;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_CONNECTIVITY_ERROR()
	{
		return FROSTF2Err::CONNECTIVITY_ERROR;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_EXTRAPOLATION_ERROR()
	{
		return FROSTF2Err::EXTRAPOLATION_ERROR;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_INVALID_ARGUMENT_ERROR()
	{
		return FROSTF2Err::INVALID_ARGUMENT_ERROR;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_TIMEOUT_ERROR()
	{
		return FROSTF2Err::TIMEOUT_ERROR;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_TRANSFORM_ERROR()
	{
		return FROSTF2Err::TRANSFORM_ERROR;
	}
	


private:
	virtual FString MsgToString() const override;

	tf2_msgs__msg__TF2Error tf2_error_msg;
};