// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/srv/GetPlan.srv - do not modify

#pragma once

#include <CoreMinimal.h>

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "nav_msgs/srv/get_plan.h"

#include "ROS2GetPlanSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSGetPlanRequest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int StartHeaderStampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int StartHeaderStampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartHeaderFrameId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StartPosePosition = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat StartPoseOrientation = FQuat::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int GoalHeaderStampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int GoalHeaderStampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GoalHeaderFrameId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector GoalPosePosition = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat GoalPoseOrientation = FQuat::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Tolerance = 0.f;

	

	void SetFromROS2(const nav_msgs__srv__GetPlan_Request& in_ros_data)
	{
    	StartHeaderStampSec = in_ros_data.start.header.stamp.sec;

		StartHeaderStampNanosec = in_ros_data.start.header.stamp.nanosec;

		StartHeaderFrameId.AppendChars(in_ros_data.start.header.frame_id.data, in_ros_data.start.header.frame_id.size);

		StartPosePosition.X = in_ros_data.start.pose.position.x;
		StartPosePosition.Y = in_ros_data.start.pose.position.y;
		StartPosePosition.Z = in_ros_data.start.pose.position.z;

		StartPoseOrientation.X = in_ros_data.start.pose.orientation.x;
		StartPoseOrientation.Y = in_ros_data.start.pose.orientation.y;
		StartPoseOrientation.Z = in_ros_data.start.pose.orientation.z;
		StartPoseOrientation.W = in_ros_data.start.pose.orientation.w;

		GoalHeaderStampSec = in_ros_data.goal.header.stamp.sec;

		GoalHeaderStampNanosec = in_ros_data.goal.header.stamp.nanosec;

		GoalHeaderFrameId.AppendChars(in_ros_data.goal.header.frame_id.data, in_ros_data.goal.header.frame_id.size);

		GoalPosePosition.X = in_ros_data.goal.pose.position.x;
		GoalPosePosition.Y = in_ros_data.goal.pose.position.y;
		GoalPosePosition.Z = in_ros_data.goal.pose.position.z;

		GoalPoseOrientation.X = in_ros_data.goal.pose.orientation.x;
		GoalPoseOrientation.Y = in_ros_data.goal.pose.orientation.y;
		GoalPoseOrientation.Z = in_ros_data.goal.pose.orientation.z;
		GoalPoseOrientation.W = in_ros_data.goal.pose.orientation.w;

		Tolerance = in_ros_data.tolerance;

		
	}

	void SetROS2(nav_msgs__srv__GetPlan_Request& out_ros_data) const
	{
    	out_ros_data.start.header.stamp.sec = StartHeaderStampSec;

		out_ros_data.start.header.stamp.nanosec = StartHeaderStampNanosec;

		{
			FTCHARToUTF8 strUtf8( *StartHeaderFrameId );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.start.header.frame_id.data != nullptr)
		{
			free(out_ros_data.start.header.frame_id.data);
		}
		out_ros_data.start.header.frame_id.data = (decltype(out_ros_data.start.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.start.header.frame_id.data)));
		memcpy(out_ros_data.start.header.frame_id.data, TCHAR_TO_UTF8(*StartHeaderFrameId), (strLength+1)*sizeof(char));
			out_ros_data.start.header.frame_id.size = strLength;
			out_ros_data.start.header.frame_id.capacity = strLength + 1;
		}

		out_ros_data.start.pose.position.x = StartPosePosition.X;
		out_ros_data.start.pose.position.y = StartPosePosition.Y;
		out_ros_data.start.pose.position.z = StartPosePosition.Z;

		out_ros_data.start.pose.orientation.x = StartPoseOrientation.X;
		out_ros_data.start.pose.orientation.y = StartPoseOrientation.Y;
		out_ros_data.start.pose.orientation.z = StartPoseOrientation.Z;
		out_ros_data.start.pose.orientation.w = StartPoseOrientation.W;

		out_ros_data.goal.header.stamp.sec = GoalHeaderStampSec;

		out_ros_data.goal.header.stamp.nanosec = GoalHeaderStampNanosec;

		{
			FTCHARToUTF8 strUtf8( *GoalHeaderFrameId );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.goal.header.frame_id.data != nullptr)
		{
			free(out_ros_data.goal.header.frame_id.data);
		}
		out_ros_data.goal.header.frame_id.data = (decltype(out_ros_data.goal.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.goal.header.frame_id.data)));
		memcpy(out_ros_data.goal.header.frame_id.data, TCHAR_TO_UTF8(*GoalHeaderFrameId), (strLength+1)*sizeof(char));
			out_ros_data.goal.header.frame_id.size = strLength;
			out_ros_data.goal.header.frame_id.capacity = strLength + 1;
		}

		out_ros_data.goal.pose.position.x = GoalPosePosition.X;
		out_ros_data.goal.pose.position.y = GoalPosePosition.Y;
		out_ros_data.goal.pose.position.z = GoalPosePosition.Z;

		out_ros_data.goal.pose.orientation.x = GoalPoseOrientation.X;
		out_ros_data.goal.pose.orientation.y = GoalPoseOrientation.Y;
		out_ros_data.goal.pose.orientation.z = GoalPoseOrientation.Z;
		out_ros_data.goal.pose.orientation.w = GoalPoseOrientation.W;

		out_ros_data.tolerance = Tolerance;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSGetPlanResponse
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int PlanHeaderStampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int PlanHeaderStampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlanHeaderFrameId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> PlanPosesHeaderStampSec;

	UPROPERTY(EditAnywhere)
	TArray<unsigned int> PlanPosesHeaderStampNanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PlanPosesHeaderFrameId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> PlanPosesPosePosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuat> PlanPosesPoseOrientation;

	

	void SetFromROS2(const nav_msgs__srv__GetPlan_Response& in_ros_data)
	{
    	PlanHeaderStampSec = in_ros_data.plan.header.stamp.sec;

		PlanHeaderStampNanosec = in_ros_data.plan.header.stamp.nanosec;

		PlanHeaderFrameId.AppendChars(in_ros_data.plan.header.frame_id.data, in_ros_data.plan.header.frame_id.size);

		for (auto i = 0; i < in_ros_data.plan.poses.size; ++i)
		{
			PlanPosesHeaderStampSec.Emplace(in_ros_data.plan.poses.data[i].header.stamp.sec);
		}

		for (auto i = 0; i < in_ros_data.plan.poses.size; ++i)
		{
			PlanPosesHeaderStampNanosec.Emplace(in_ros_data.plan.poses.data[i].header.stamp.nanosec);
		}

		for (auto i = 0; i < in_ros_data.plan.poses.size; ++i)
		{
			PlanPosesHeaderFrameId.Emplace("");
			PlanPosesHeaderFrameId[i].AppendChars(in_ros_data.plan.poses.data[i].header.frame_id.data,in_ros_data.plan.poses.data[i].header.frame_id.size);
		}

		for (auto i = 0; i < in_ros_data.plan.poses.size; ++i)
		{
			PlanPosesPosePosition.Emplace(FVector::ZeroVector);
			PlanPosesPosePosition[i].X = in_ros_data.plan.poses.data[i].pose.position.x;
			PlanPosesPosePosition[i].Y = in_ros_data.plan.poses.data[i].pose.position.y;
			PlanPosesPosePosition[i].Z = in_ros_data.plan.poses.data[i].pose.position.z;
		}

		for (auto i = 0; i < in_ros_data.plan.poses.size; ++i)
		{
			PlanPosesPoseOrientation.Emplace(FQuat::Identity);
			PlanPosesPoseOrientation[i].X = in_ros_data.plan.poses.data[i].pose.orientation.x;
			PlanPosesPoseOrientation[i].Y = in_ros_data.plan.poses.data[i].pose.orientation.y;
			PlanPosesPoseOrientation[i].Z = in_ros_data.plan.poses.data[i].pose.orientation.z;
			PlanPosesPoseOrientation[i].W = in_ros_data.plan.poses.data[i].pose.orientation.w;
		}

		
	}

	void SetROS2(nav_msgs__srv__GetPlan_Response& out_ros_data) const
	{
    	out_ros_data.plan.header.stamp.sec = PlanHeaderStampSec;

		out_ros_data.plan.header.stamp.nanosec = PlanHeaderStampNanosec;

		{
			FTCHARToUTF8 strUtf8( *PlanHeaderFrameId );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.plan.header.frame_id.data != nullptr)
		{
			free(out_ros_data.plan.header.frame_id.data);
		}
		out_ros_data.plan.header.frame_id.data = (decltype(out_ros_data.plan.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.plan.header.frame_id.data)));
		memcpy(out_ros_data.plan.header.frame_id.data, TCHAR_TO_UTF8(*PlanHeaderFrameId), (strLength+1)*sizeof(char));
			out_ros_data.plan.header.frame_id.size = strLength;
			out_ros_data.plan.header.frame_id.capacity = strLength + 1;
		}

		if (out_ros_data.plan.poses.data != nullptr)
		{
			free(out_ros_data.plan.poses.data);
		}
		out_ros_data.plan.poses.data = (decltype(out_ros_data.plan.poses.data))malloc(PlanPosesHeaderStampSec.Num() * (sizeof(PlanPosesHeaderStampSec) + sizeof(PlanPosesHeaderStampNanosec) + sizeof(PlanPosesHeaderFrameId) + sizeof(PlanPosesPosePosition) + sizeof(PlanPosesPoseOrientation)));
		out_ros_data.plan.poses.size = PlanPosesHeaderStampSec.Num();
		out_ros_data.plan.poses.capacity = PlanPosesHeaderStampSec.Num();
		for (auto i = 0; i < PlanPosesHeaderStampSec.Num(); ++i)
		{
			out_ros_data.plan.poses.data[i].header.stamp.sec = PlanPosesHeaderStampSec[i];

			out_ros_data.plan.poses.data[i].header.stamp.nanosec = PlanPosesHeaderStampNanosec[i];

			{
				FTCHARToUTF8 strUtf8( *PlanPosesHeaderFrameId[i] );
			int32 strLength = strUtf8.Length();
				out_ros_data.plan.poses.data[i].header.frame_id.data = (decltype(out_ros_data.plan.poses.data[i].header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.plan.poses.data[i].header.frame_id.data)));
		memcpy(out_ros_data.plan.poses.data[i].header.frame_id.data, TCHAR_TO_UTF8(*PlanPosesHeaderFrameId[i]), (strLength+1)*sizeof(char));
				out_ros_data.plan.poses.data[i].header.frame_id.size = strLength;
				out_ros_data.plan.poses.data[i].header.frame_id.capacity = strLength + 1;
			}

			out_ros_data.plan.poses.data[i].pose.position.x = PlanPosesPosePosition[i].X;
			out_ros_data.plan.poses.data[i].pose.position.y = PlanPosesPosePosition[i].Y;
			out_ros_data.plan.poses.data[i].pose.position.z = PlanPosesPosePosition[i].Z;

			out_ros_data.plan.poses.data[i].pose.orientation.x = PlanPosesPoseOrientation[i].X;
			out_ros_data.plan.poses.data[i].pose.orientation.y = PlanPosesPoseOrientation[i].Y;
			out_ros_data.plan.poses.data[i].pose.orientation.z = PlanPosesPoseOrientation[i].Z;
			out_ros_data.plan.poses.data[i].pose.orientation.w = PlanPosesPoseOrientation[i].W;

			}
	
	}
};

UCLASS()
class RCLUE_API UROS2GetPlanSrv : public UROS2GenericSrv
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
	void SetRequest(const FROSGetPlanRequest& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSGetPlanRequest& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSGetPlanResponse& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSGetPlanResponse& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	nav_msgs__srv__GetPlan_Request GetPlan_req;
	nav_msgs__srv__GetPlan_Response GetPlan_res;
};