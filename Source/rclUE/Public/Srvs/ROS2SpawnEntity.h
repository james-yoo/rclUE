// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/SpawnEntity.srv - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "ue_msgs/srv/spawn_entity.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2EntityState.h"
#include "rosidl_runtime_c/string_functions.h"

// Generated
#include "ROS2SpawnEntity.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnEntityReq
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Xml;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString RobotNamespace;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSEntityState State;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> Tags;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString JsonParameters;

    FROSSpawnEntityReq()
    {
    }

    void SetFromROS2(const ue_msgs__srv__SpawnEntity_Request& in_ros_data)
    {
        Xml = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.xml);

        RobotNamespace = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.robot_namespace);

        State.SetFromROS2(in_ros_data.state);

        UROS2Utils::StringSequenceROSToUEArray<rosidl_runtime_c__String>(in_ros_data.tags.data, Tags, in_ros_data.tags.size);

        JsonParameters = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.json_parameters);
    }

    void SetROS2(ue_msgs__srv__SpawnEntity_Request& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(Xml, out_ros_data.xml);

        UROS2Utils::StringUEToROS(RobotNamespace, out_ros_data.robot_namespace);

        State.SetROS2(out_ros_data.state);

        if (out_ros_data.tags.data)
        {
            rosidl_runtime_c__String__Sequence__fini(&out_ros_data.tags);
        }
        if (!rosidl_runtime_c__String__Sequence__init(&out_ros_data.tags, Tags.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.tags  "));
        }
        UROS2Utils::StringArrayUEToROSSequence(Tags, out_ros_data.tags.data, Tags.Num());

        UROS2Utils::StringUEToROS(JsonParameters, out_ros_data.json_parameters);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSSpawnEntityRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString StatusMessage;

    FROSSpawnEntityRes()
    {
    }

    void SetFromROS2(const ue_msgs__srv__SpawnEntity_Response& in_ros_data)
    {
        bSuccess = in_ros_data.success;

        StatusMessage = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.status_message);
    }

    void SetROS2(ue_msgs__srv__SpawnEntity_Response& out_ros_data) const
    {
        out_ros_data.success = bSuccess;

        UROS2Utils::StringUEToROS(StatusMessage, out_ros_data.status_message);
    }
};

UCLASS()
class RCLUE_API UROS2SpawnEntitySrv : public UROS2GenericSrv
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
    void SetRequest(const FROSSpawnEntityReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSSpawnEntityReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSSpawnEntityRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSSpawnEntityRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    ue_msgs__srv__SpawnEntity_Request SpawnEntity_req;
    ue_msgs__srv__SpawnEntity_Response SpawnEntity_res;
};
