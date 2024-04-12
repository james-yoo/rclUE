// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/srv/AddTwoInts.srv - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/srv/add_two_ints.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2AddTwoInts.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSAddTwoIntsReq
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int64 A = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int64 B = 0;

    FROSAddTwoIntsReq()
    {
    }

    void SetFromROS2(const example_interfaces__srv__AddTwoInts_Request& in_ros_data)
    {
        A = in_ros_data.a;

        B = in_ros_data.b;
    }

    void SetROS2(example_interfaces__srv__AddTwoInts_Request& out_ros_data) const
    {
        out_ros_data.a = A;

        out_ros_data.b = B;
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSAddTwoIntsRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int64 Sum = 0;

    FROSAddTwoIntsRes()
    {
    }

    void SetFromROS2(const example_interfaces__srv__AddTwoInts_Response& in_ros_data)
    {
        Sum = in_ros_data.sum;
    }

    void SetROS2(example_interfaces__srv__AddTwoInts_Response& out_ros_data) const
    {
        out_ros_data.sum = Sum;
    }
};

UCLASS()
class RCLUE_API UROS2AddTwoIntsSrv : public UROS2GenericSrv
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
    void SetRequest(const FROSAddTwoIntsReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSAddTwoIntsReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSAddTwoIntsRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSAddTwoIntsRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    example_interfaces__srv__AddTwoInts_Request AddTwoInts_req;
    example_interfaces__srv__AddTwoInts_Response AddTwoInts_res;
};
