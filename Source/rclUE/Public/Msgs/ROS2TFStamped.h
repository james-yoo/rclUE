// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/TransformStamped.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/transform_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"

// Generated
#include "ROS2TFStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTFStamped
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ChildFrameId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform Transform = FTransform::Identity;

    FROSTFStamped()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__TransformStamped& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        ChildFrameId = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.child_frame_id);

        Transform = UROS2Utils::TransformROSToUE(in_ros_data.transform);
    }

    void SetROS2(geometry_msgs__msg__TransformStamped& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        UROS2Utils::StringUEToROS(ChildFrameId, out_ros_data.child_frame_id);

        out_ros_data.transform = UROS2Utils::TransformUEToROS(Transform);
    }
};

UCLASS()
class RCLUE_API UROS2TFStampedMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTFStamped& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTFStamped& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__TransformStamped transform_stamped_msg;
};
