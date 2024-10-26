// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/WrenchStamped.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/wrench_stamped.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2StdHeader.h"
#include "Msgs/ROS2Wrench.h"

// Generated
#include "ROS2WrenchStamped.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSWrenchStamped
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSStdHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSWrench Wrench;

    FROSWrenchStamped()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__WrenchStamped& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Wrench.SetFromROS2(in_ros_data.wrench);
    }

    void SetROS2(geometry_msgs__msg__WrenchStamped& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        Wrench.SetROS2(out_ros_data.wrench);
    }
};

UCLASS()
class RCLUE_API UROS2WrenchStampedMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSWrenchStamped& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSWrenchStamped& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__WrenchStamped wrench_stamped_msg;
};
