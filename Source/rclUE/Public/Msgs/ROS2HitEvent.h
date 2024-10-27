// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/msg/HitEvent.msg - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "ue_msgs/msg/hit_event.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2HitResult.h"

// Generated
#include "ROS2HitEvent.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSHitEvent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString SelfName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString OtherActorName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector NormalImpluse = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHitResult HitResult;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString OtherComponentName;

    FROSHitEvent()
    {
    }

    void SetFromROS2(const ue_msgs__msg__HitEvent& in_ros_data)
    {
        SelfName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.self_name);

        OtherActorName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.other_actor_name);

        NormalImpluse = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.normal_impluse);

        HitResult.SetFromROS2(in_ros_data.hit_result);

        OtherComponentName = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.other_component_name);
    }

    void SetROS2(ue_msgs__msg__HitEvent& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(SelfName, out_ros_data.self_name);

        UROS2Utils::StringUEToROS(OtherActorName, out_ros_data.other_actor_name);

        out_ros_data.normal_impluse = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(NormalImpluse);

        HitResult.SetROS2(out_ros_data.hit_result);

        UROS2Utils::StringUEToROS(OtherComponentName, out_ros_data.other_component_name);
    }
};

UCLASS()
class RCLUE_API UROS2HitEventMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSHitEvent& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSHitEvent& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    ue_msgs__msg__HitEvent hit_event_msg;
};
