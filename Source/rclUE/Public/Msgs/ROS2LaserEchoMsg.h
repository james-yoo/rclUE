// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/LaserEcho.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "sensor_msgs/msg/laser_echo.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2LaserEchoMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSLaserEcho
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> echoes;

	

	void SetFromROS2(sensor_msgs__msg__LaserEcho in_ros_data)
	{
    	for (int i = 0; i < in_ros_data.echoes.size; i++)
		{
			echoes[i] = in_ros_data.echoes.data[i];
		}

		
	}

	void SetROS2(sensor_msgs__msg__LaserEcho& out_ros_data) const
	{
    	if (out_ros_data.echoes.data != nullptr)
		{
			free(out_ros_data.echoes.data);
		}
		out_ros_data.echoes.data = (decltype(out_ros_data.echoes.data))malloc((echoes.Num())*sizeof(decltype(*out_ros_data.echoes.data)));
		
		for (int i = 0; i < echoes.Num(); i++)
		{
			out_ros_data.echoes.data[i] = echoes[i];
		}

		out_ros_data.echoes.size = echoes.Num();
		out_ros_data.echoes.capacity = echoes.Num();

		
	}
};

UCLASS()
class RCLUE_API UROS2LaserEchoMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSLaserEcho& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSLaserEcho& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__LaserEcho laser_echo_msg;
};