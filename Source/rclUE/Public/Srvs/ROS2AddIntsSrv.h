// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue4_interfaces/AddInts.srv - do not modify

#pragma once

#include "CoreMinimal.h"

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue4_interfaces/srv/add_ints.h"

#include "ROS2AddIntsSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSAddInts_Request
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 a;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 b;

	

	void SetFromROS2(ue4_interfaces__srv__AddInts_Request in_ros_data)
	{
    	a = in_ros_data.a;

		b = in_ros_data.b;

		
	}

	void SetROS2(ue4_interfaces__srv__AddInts_Request& out_ros_data) const
	{
    	out_ros_data.a = a;

		out_ros_data.b = b;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSAddInts_Response
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 sum;

	

	void SetFromROS2(ue4_interfaces__srv__AddInts_Response in_ros_data)
	{
    	sum = in_ros_data.sum;

		
	}

	void SetROS2(ue4_interfaces__srv__AddInts_Response& out_ros_data) const
	{
    	out_ros_data.sum = sum;

		
	}
};

UCLASS()
class RCLUE_API UROS2AddIntsSrv : public UROS2GenericSrv
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
	void SetRequest(const FROSAddInts_Request Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSAddInts_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSAddInts_Response Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSAddInts_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue4_interfaces__srv__AddInts_Request AddInts_req;
	ue4_interfaces__srv__AddInts_Response AddInts_res;
};