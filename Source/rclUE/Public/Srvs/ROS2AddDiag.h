// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/srv/AddDiagnostics.srv
// - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "diagnostic_msgs/srv/add_diagnostics.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2AddDiag.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSAddDiagReq
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString LoadNamespace;

    FROSAddDiagReq()
    {
    }

    void SetFromROS2(const diagnostic_msgs__srv__AddDiagnostics_Request& in_ros_data)
    {
        LoadNamespace = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.load_namespace);
    }

    void SetROS2(diagnostic_msgs__srv__AddDiagnostics_Request& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(LoadNamespace, out_ros_data.load_namespace);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSAddDiagRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Message;

    FROSAddDiagRes()
    {
    }

    void SetFromROS2(const diagnostic_msgs__srv__AddDiagnostics_Response& in_ros_data)
    {
        bSuccess = in_ros_data.success;

        Message = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.message);
    }

    void SetROS2(diagnostic_msgs__srv__AddDiagnostics_Response& out_ros_data) const
    {
        out_ros_data.success = bSuccess;

        UROS2Utils::StringUEToROS(Message, out_ros_data.message);
    }
};

UCLASS()
class RCLUE_API UROS2AddDiagSrv : public UROS2GenericSrv
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
    void SetRequest(const FROSAddDiagReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSAddDiagReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSAddDiagRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSAddDiagRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    diagnostic_msgs__srv__AddDiagnostics_Request AddDiagnostics_req;
    diagnostic_msgs__srv__AddDiagnostics_Response AddDiagnostics_res;
};
