// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/MeshFile.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/mesh_file.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "rosidl_runtime_c/primitives_sequence_functions.h"


// Generated
#include "ROS2MeshFile.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMeshFile
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Filename;

	UPROPERTY(EditAnywhere)
	TArray<uint8> Data;

	

	FROSMeshFile()
	{
		
	}

	void SetFromROS2(const visualization_msgs__msg__MeshFile& in_ros_data)
	{
    	Filename = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.filename);

		UROS2Utils::SequenceROSToUEArray<uint8, uint8>(in_ros_data.data.data, Data, in_ros_data.data.size);

		
	}

	void SetROS2(visualization_msgs__msg__MeshFile& out_ros_data) const
	{
    	UROS2Utils::StringUEToROS(Filename, out_ros_data.filename);

		if (out_ros_data.data.data) {
		rosidl_runtime_c__uint8__Sequence__fini(&out_ros_data.data);
		}
		if (!rosidl_runtime_c__uint8__Sequence__init(&out_ros_data.data, Data.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.data  "));}
		UROS2Utils::ArrayUEToROSSequence<uint8, uint8>(Data, out_ros_data.data.data, Data.Num());

		
	}
};

UCLASS()
class RCLUE_API UROS2MeshFileMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSMeshFile& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSMeshFile& Output) const;
	
	virtual void* Get() override;

	


private:
	virtual FString MsgToString() const override;

	visualization_msgs__msg__MeshFile mesh_file_msg;
};