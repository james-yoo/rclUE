// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from actionlib_msgs/msg/GoalStatusArray.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "actionlib_msgs/msg/goal_status_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2GoalStatus.h"
#include "Msgs/ROS2Header.h"
#include "actionlib_msgs/msg/detail/goal_status__functions.h"

// Generated
#include "ROS2GoalStatusArray.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSGoalStatusArray
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSGoalStatus> StatusList;

    FROSGoalStatusArray()
    {
    }

    void SetFromROS2(const actionlib_msgs__msg__GoalStatusArray& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::SequenceROSToUEArray<actionlib_msgs__msg__GoalStatus, FROSGoalStatus>(
            in_ros_data.status_list.data, StatusList, in_ros_data.status_list.size);
    }

    void SetROS2(actionlib_msgs__msg__GoalStatusArray& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        if (out_ros_data.status_list.data)
        {
            actionlib_msgs__msg__GoalStatus__Sequence__fini(&out_ros_data.status_list);
        }
        if (!actionlib_msgs__msg__GoalStatus__Sequence__init(&out_ros_data.status_list, StatusList.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.status_list  "));
        }
        UROS2Utils::ArrayUEToROSSequence<actionlib_msgs__msg__GoalStatus, FROSGoalStatus>(
            StatusList, out_ros_data.status_list.data, StatusList.Num());
    }
};

UCLASS()
class RCLUE_API UROS2GoalStatusArrayMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGoalStatusArray& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGoalStatusArray& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    actionlib_msgs__msg__GoalStatusArray goal_status_array_msg;
};
