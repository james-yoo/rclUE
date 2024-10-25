// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from type_description_interfaces/srv/GetTypeDescription.srv - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "type_description_interfaces/srv/get_type_description.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

#include "Msgs/ROS2TypeDescription.h"
#include "Msgs/ROS2TypeSource.h"
#include "type_description_interfaces/msg/detail/type_source__functions.h"
#include "Msgs/ROS2KeyValue.h"
#include "type_description_interfaces/msg/detail/key_value__functions.h"


// Generated
#include "ROS2GetTypeDescription.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSGetTypeDescriptionReq
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TypeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TypeHash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIncludeTypeSources = false;

	

	FROSGetTypeDescriptionReq()
	{
		
	}

	void SetFromROS2(const type_description_interfaces__srv__GetTypeDescription_Request& in_ros_data)
	{
    	TypeName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.type_name);

		TypeHash = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.type_hash);

		bIncludeTypeSources = in_ros_data.include_type_sources;

		
	}

	void SetROS2(type_description_interfaces__srv__GetTypeDescription_Request& out_ros_data) const
	{
    	UROS2Utils::StringUEToROS(TypeName, out_ros_data.type_name);

		UROS2Utils::StringUEToROS(TypeHash, out_ros_data.type_hash);

		out_ros_data.include_type_sources = bIncludeTypeSources;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSGetTypeDescriptionRes
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSuccessful = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FailureReason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSTypeDescription TypeDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FROSTypeSource> TypeSources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FROSKeyValue> ExtraInformation;

	

	FROSGetTypeDescriptionRes()
	{
		
	}

	void SetFromROS2(const type_description_interfaces__srv__GetTypeDescription_Response& in_ros_data)
	{
    	bSuccessful = in_ros_data.successful;

		FailureReason = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.failure_reason);

		TypeDescription.SetFromROS2(in_ros_data.type_description);

		UROS2Utils::SequenceROSToUEArray<type_description_interfaces__msg__TypeSource, FROSTypeSource>(in_ros_data.type_sources.data, TypeSources, in_ros_data.type_sources.size);

		UROS2Utils::SequenceROSToUEArray<type_description_interfaces__msg__KeyValue, FROSKeyValue>(in_ros_data.extra_information.data, ExtraInformation, in_ros_data.extra_information.size);

		
	}

	void SetROS2(type_description_interfaces__srv__GetTypeDescription_Response& out_ros_data) const
	{
    	out_ros_data.successful = bSuccessful;

		UROS2Utils::StringUEToROS(FailureReason, out_ros_data.failure_reason);

		TypeDescription.SetROS2(out_ros_data.type_description);

		if (out_ros_data.type_sources.data) {
		type_description_interfaces__msg__TypeSource__Sequence__fini(&out_ros_data.type_sources);
		}
		if (!type_description_interfaces__msg__TypeSource__Sequence__init(&out_ros_data.type_sources, TypeSources.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.type_sources  "));}
		UROS2Utils::ArrayUEToROSSequence<type_description_interfaces__msg__TypeSource, FROSTypeSource>(TypeSources, out_ros_data.type_sources.data, TypeSources.Num());

		if (out_ros_data.extra_information.data) {
		type_description_interfaces__msg__KeyValue__Sequence__fini(&out_ros_data.extra_information);
		}
		if (!type_description_interfaces__msg__KeyValue__Sequence__init(&out_ros_data.extra_information, ExtraInformation.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.extra_information  "));}
		UROS2Utils::ArrayUEToROSSequence<type_description_interfaces__msg__KeyValue, FROSKeyValue>(ExtraInformation, out_ros_data.extra_information.data, ExtraInformation.Num());

		
	}
};

UCLASS()
class RCLUE_API UROS2GetTypeDescriptionSrv : public UROS2GenericSrv
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
	void SetRequest(const FROSGetTypeDescriptionReq& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSGetTypeDescriptionReq& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSGetTypeDescriptionRes& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSGetTypeDescriptionRes& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

	
	

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	type_description_interfaces__srv__GetTypeDescription_Request GetTypeDescription_req;
	type_description_interfaces__srv__GetTypeDescription_Response GetTypeDescription_res;
};