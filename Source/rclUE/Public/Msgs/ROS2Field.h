// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from type_description_interfaces/msg/Field.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "type_description_interfaces/msg/field.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2FieldType.h"


// Generated
#include "ROS2Field.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSField
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSFieldType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DefaultValue;

	

	FROSField()
	{
		
	}

	void SetFromROS2(const type_description_interfaces__msg__Field& in_ros_data)
	{
    	Name = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.name);

		Type.SetFromROS2(in_ros_data.type);

		DefaultValue = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.default_value);

		
	}

	void SetROS2(type_description_interfaces__msg__Field& out_ros_data) const
	{
    	UROS2Utils::StringUEToROS(Name, out_ros_data.name);

		Type.SetROS2(out_ros_data.type);

		UROS2Utils::StringUEToROS(DefaultValue, out_ros_data.default_value);

		
	}
};

UCLASS()
class RCLUE_API UROS2FieldMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSField& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSField& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	type_description_interfaces__msg__Field field_msg;
};