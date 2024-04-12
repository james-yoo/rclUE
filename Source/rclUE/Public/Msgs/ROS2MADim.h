// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/MultiArrayDimension.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/multi_array_dimension.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2MADim.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMADim
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Label;

    UPROPERTY(EditAnywhere)
    unsigned int Size = 0;

    UPROPERTY(EditAnywhere)
    unsigned int Stride = 0;

    FROSMADim()
    {
    }

    void SetFromROS2(const example_interfaces__msg__MultiArrayDimension& in_ros_data)
    {
        Label = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.label);

        Size = in_ros_data.size;

        Stride = in_ros_data.stride;
    }

    void SetROS2(example_interfaces__msg__MultiArrayDimension& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(Label, out_ros_data.label);

        out_ros_data.size = Size;

        out_ros_data.stride = Stride;
    }
};

UCLASS()
class RCLUE_API UROS2MADimMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMADim& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMADim& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__MultiArrayDimension multi_array_dimension_msg;
};
