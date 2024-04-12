// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from tf2_msgs/action/LookupTransform.action - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "action_msgs/srv/cancel_goal.h"
#include "tf2_msgs/action/lookup_transform.h"
#include "unique_identifier_msgs/msg/uuid.h"

// rclUE
#include "Actions/ROS2GenericAction.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Duration.h"
#include "Msgs/ROS2TF2Err.h"
#include "Msgs/ROS2TFStamped.h"
#include "Msgs/ROS2Time.h"

// Generated
#include "ROS2LookupTF.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSLookupTFSGReq
{
    GENERATED_BODY()

public:
    TArray<uint8, TFixedAllocator<16>> GoalId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TargetFrame;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString SourceFrame;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTime SourceTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSDuration Timeout;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTime TargetTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString FixedFrame;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bAdvanced = false;

    FROSLookupTFSGReq()
    {
        UROS2Utils::GenerateRandomUUID16(GoalId);
    }

    void SetFromROS2(const tf2_msgs__action__LookupTransform_SendGoal_Request& in_ros_data)
    {
        for (int i = 0; i < 16; i++)
        {
            GoalId[i] = in_ros_data.goal_id.uuid[i];
        }

        TargetFrame = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.goal.target_frame);

        SourceFrame = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.goal.source_frame);

        SourceTime.SetFromROS2(in_ros_data.goal.source_time);

        Timeout.SetFromROS2(in_ros_data.goal.timeout);

        TargetTime.SetFromROS2(in_ros_data.goal.target_time);

        FixedFrame = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.goal.fixed_frame);

        bAdvanced = in_ros_data.goal.advanced;
    }

    void SetROS2(tf2_msgs__action__LookupTransform_SendGoal_Request& out_ros_data) const
    {
        for (int i = 0; i < 16; i++)
        {
            out_ros_data.goal_id.uuid[i] = GoalId[i];
        }

        UROS2Utils::StringUEToROS(TargetFrame, out_ros_data.goal.target_frame);

        UROS2Utils::StringUEToROS(SourceFrame, out_ros_data.goal.source_frame);

        SourceTime.SetROS2(out_ros_data.goal.source_time);

        Timeout.SetROS2(out_ros_data.goal.timeout);

        TargetTime.SetROS2(out_ros_data.goal.target_time);

        UROS2Utils::StringUEToROS(FixedFrame, out_ros_data.goal.fixed_frame);

        out_ros_data.goal.advanced = bAdvanced;
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSLookupTFSGRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bAccepted = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Stamp = 0.f;

    void SetFromROS2(const tf2_msgs__action__LookupTransform_SendGoal_Response& in_ros_data)
    {
        bAccepted = in_ros_data.accepted;
        Stamp = UROS2Utils::ROSStampToFloat(in_ros_data.stamp);
    }

    void SetROS2(tf2_msgs__action__LookupTransform_SendGoal_Response& out_ros_data) const
    {
        out_ros_data.accepted = bAccepted;
        out_ros_data.stamp = UROS2Utils::FloatToROSStamp(Stamp);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSLookupTFGRReq
{
    GENERATED_BODY()

public:
    TArray<uint8, TFixedAllocator<16>> GoalId;

    FROSLookupTFGRReq()
    {
        GoalId.Init(0, 16);
    }

    void SetFromROS2(const tf2_msgs__action__LookupTransform_GetResult_Request& in_ros_data)
    {
        for (int i = 0; i < 16; i++)
        {
            GoalId[i] = in_ros_data.goal_id.uuid[i];
        }
    }

    void SetROS2(tf2_msgs__action__LookupTransform_GetResult_Request& out_ros_data) const
    {
        for (int i = 0; i < 16; i++)
        {
            out_ros_data.goal_id.uuid[i] = GoalId[i];
        }
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSLookupTFGRRes
{
    GENERATED_BODY()

public:
    UPROPERTY()
    int8 GRResStatus = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTFStamped Transform;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTF2Err Error;

    FROSLookupTFGRRes()
    {
    }

    void SetFromROS2(const tf2_msgs__action__LookupTransform_GetResult_Response& in_ros_data)
    {
        GRResStatus = in_ros_data.status;
        Transform.SetFromROS2(in_ros_data.result.transform);

        Error.SetFromROS2(in_ros_data.result.error);
    }

    void SetROS2(tf2_msgs__action__LookupTransform_GetResult_Response& out_ros_data) const
    {
        out_ros_data.status = GRResStatus;
        Transform.SetROS2(out_ros_data.result.transform);

        Error.SetROS2(out_ros_data.result.error);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSLookupTFFB
{
    GENERATED_BODY()

public:
    TArray<uint8, TFixedAllocator<16>> GoalId;

    FROSLookupTFFB()
    {
        GoalId.Init(0, 16);
    }

    void SetFromROS2(const tf2_msgs__action__LookupTransform_FeedbackMessage& in_ros_data)
    {
        for (int i = 0; i < 16; i++)
        {
            GoalId[i] = in_ros_data.goal_id.uuid[i];
        }
    }

    void SetROS2(tf2_msgs__action__LookupTransform_FeedbackMessage& out_ros_data) const
    {
        for (int i = 0; i < 16; i++)
        {
            out_ros_data.goal_id.uuid[i] = GoalId[i];
        }
    }
};

UCLASS()
class RCLUE_API UROS2LookupTFAction : public UROS2GenericAction
{
    GENERATED_BODY()

public:
    virtual void Init() override;

    virtual void Fini() override;

    virtual const rosidl_action_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetGoalRequest(const FROSLookupTFSGReq& Goal);

    UFUNCTION(BlueprintCallable)
    void GetGoalRequest(FROSLookupTFSGReq& Goal) const;

    UFUNCTION(BlueprintCallable)
    void SetGoalResponse(const FROSLookupTFSGRes& Goal);

    UFUNCTION(BlueprintCallable)
    void GetGoalResponse(FROSLookupTFSGRes& Goal) const;

    UFUNCTION(BlueprintCallable)
    void SetResultRequest(const FROSLookupTFGRReq& Result);

    UFUNCTION(BlueprintCallable)
    void GetResultRequest(FROSLookupTFGRReq& Result) const;

    UFUNCTION(BlueprintCallable)
    void SetResultResponse(const FROSLookupTFGRRes& Result);

    UFUNCTION(BlueprintCallable)
    void GetResultResponse(FROSLookupTFGRRes& Result) const;

    UFUNCTION(BlueprintCallable)
    void SetFeedback(const FROSLookupTFFB& Feedback);

    UFUNCTION(BlueprintCallable)
    void GetFeedback(FROSLookupTFFB& Feedback) const;

    UFUNCTION(BlueprintCallable)
    void SetGoalIdToFeedback(FROSLookupTFFB& Feedback);

    virtual void* GetGoalRequest() override;
    virtual void* GetGoalResponse() override;
    virtual void* GetResultRequest() override;
    virtual void* GetResultResponse() override;
    virtual void* GetFeedbackMessage() override;

private:
    tf2_msgs__action__LookupTransform_SendGoal_Request LookupTransform_goal_request;
    tf2_msgs__action__LookupTransform_SendGoal_Response LookupTransform_goal_response;
    tf2_msgs__action__LookupTransform_GetResult_Request LookupTransform_result_request;
    tf2_msgs__action__LookupTransform_GetResult_Response LookupTransform_result_response;
    tf2_msgs__action__LookupTransform_FeedbackMessage LookupTransform_feedback_message;
};
