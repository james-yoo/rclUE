// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/PointStamped.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/point_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2StdHeader.h"

// Generated
#include "ROS2PointStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointStamped
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSStdHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Point = FVector::ZeroVector;

    FROSPointStamped()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__PointStamped& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Point = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Point>(in_ros_data.point);
    }

    void SetROS2(geometry_msgs__msg__PointStamped& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        out_ros_data.point = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Point>(Point);
    }
};

UCLASS()
class RCLUE_API UROS2PointStampedMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPointStamped& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPointStamped& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__PointStamped point_stamped_msg;
};
