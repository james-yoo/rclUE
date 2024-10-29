// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from pcl_msgs/msg/Vertices.msg - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "pcl_msgs/msg/vertices.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2Vertices.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSVertices
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    TArray<unsigned int> Vertices;

    FROSVertices()
    {
    }

    void SetFromROS2(const pcl_msgs__msg__Vertices& in_ros_data)
    {
        UROS2Utils::SequenceROSToUEArray<unsigned int, unsigned int>(
            in_ros_data.vertices.data, Vertices, in_ros_data.vertices.size);
    }

    void SetROS2(pcl_msgs__msg__Vertices& out_ros_data) const
    {
        if (out_ros_data.vertices.data)
        {
            rosidl_runtime_c__uint32__Sequence__fini(&out_ros_data.vertices);
        }
        if (!rosidl_runtime_c__uint32__Sequence__init(&out_ros_data.vertices, Vertices.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.vertices  "));
        }
        UROS2Utils::ArrayUEToROSSequence<unsigned int, unsigned int>(Vertices, out_ros_data.vertices.data, Vertices.Num());
    }
};

UCLASS()
class RCLUE_API UROS2VerticesMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSVertices& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSVertices& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    pcl_msgs__msg__Vertices vertices_msg;
};
