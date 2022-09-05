// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/ImageMarker.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "visualization_msgs/msg/image_marker.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2ImageMarkerMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSImageMarker
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int HeaderStampSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int HeaderStampNanosec = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HeaderFrameId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Ns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Id = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Type = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Action = 0;

	UPROPERTY(EditAnywhere)
	double PositionX = 0.f;

	UPROPERTY(EditAnywhere)
	double PositionY = 0.f;

	UPROPERTY(EditAnywhere)
	double PositionZ = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Scale = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutlineColorR = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutlineColorG = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutlineColorB = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutlineColorA = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Filled = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FillColorR = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FillColorG = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FillColorB = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FillColorA = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int LifetimeSec = 0;

	UPROPERTY(EditAnywhere)
	unsigned int LifetimeNanosec = 0;

	UPROPERTY(EditAnywhere)
	TArray<double> PointsX;

	UPROPERTY(EditAnywhere)
	TArray<double> PointsY;

	UPROPERTY(EditAnywhere)
	TArray<double> PointsZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> OutlineColorsR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> OutlineColorsG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> OutlineColorsB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> OutlineColorsA;

	

	void SetFromROS2(const visualization_msgs__msg__ImageMarker& in_ros_data)
	{
    	HeaderStampSec = in_ros_data.header.stamp.sec;

		HeaderStampNanosec = in_ros_data.header.stamp.nanosec;

		HeaderFrameId.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		Ns.AppendChars(in_ros_data.ns.data, in_ros_data.ns.size);

		Id = in_ros_data.id;

		Type = in_ros_data.type;

		Action = in_ros_data.action;

		PositionX = in_ros_data.position.x;

		PositionY = in_ros_data.position.y;

		PositionZ = in_ros_data.position.z;

		Scale = in_ros_data.scale;

		OutlineColorR = in_ros_data.outline_color.r;

		OutlineColorG = in_ros_data.outline_color.g;

		OutlineColorB = in_ros_data.outline_color.b;

		OutlineColorA = in_ros_data.outline_color.a;

		Filled = in_ros_data.filled;

		FillColorR = in_ros_data.fill_color.r;

		FillColorG = in_ros_data.fill_color.g;

		FillColorB = in_ros_data.fill_color.b;

		FillColorA = in_ros_data.fill_color.a;

		LifetimeSec = in_ros_data.lifetime.sec;

		LifetimeNanosec = in_ros_data.lifetime.nanosec;

		for (auto i = 0; i < in_ros_data.points.size; ++i)
		{
			PointsX.Emplace(in_ros_data.points.data[i].x);
		}

		for (auto i = 0; i < in_ros_data.points.size; ++i)
		{
			PointsY.Emplace(in_ros_data.points.data[i].y);
		}

		for (auto i = 0; i < in_ros_data.points.size; ++i)
		{
			PointsZ.Emplace(in_ros_data.points.data[i].z);
		}

		for (auto i = 0; i < in_ros_data.outline_colors.size; ++i)
		{
			OutlineColorsR.Emplace(in_ros_data.outline_colors.data[i].r);
		}

		for (auto i = 0; i < in_ros_data.outline_colors.size; ++i)
		{
			OutlineColorsG.Emplace(in_ros_data.outline_colors.data[i].g);
		}

		for (auto i = 0; i < in_ros_data.outline_colors.size; ++i)
		{
			OutlineColorsB.Emplace(in_ros_data.outline_colors.data[i].b);
		}

		for (auto i = 0; i < in_ros_data.outline_colors.size; ++i)
		{
			OutlineColorsA.Emplace(in_ros_data.outline_colors.data[i].a);
		}

		
	}

	void SetROS2(visualization_msgs__msg__ImageMarker& out_ros_data) const
	{
    	out_ros_data.header.stamp.sec = HeaderStampSec;

		out_ros_data.header.stamp.nanosec = HeaderStampNanosec;

		{
			FTCHARToUTF8 strUtf8( *HeaderFrameId );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.header.frame_id.data != nullptr)
		{
			free(out_ros_data.header.frame_id.data);
		}
		out_ros_data.header.frame_id.data = (decltype(out_ros_data.header.frame_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.header.frame_id.data)));
		memcpy(out_ros_data.header.frame_id.data, TCHAR_TO_UTF8(*HeaderFrameId), (strLength+1)*sizeof(char));
			out_ros_data.header.frame_id.size = strLength;
			out_ros_data.header.frame_id.capacity = strLength + 1;
		}

		{
			FTCHARToUTF8 strUtf8( *Ns );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.ns.data != nullptr)
		{
			free(out_ros_data.ns.data);
		}
		out_ros_data.ns.data = (decltype(out_ros_data.ns.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.ns.data)));
		memcpy(out_ros_data.ns.data, TCHAR_TO_UTF8(*Ns), (strLength+1)*sizeof(char));
			out_ros_data.ns.size = strLength;
			out_ros_data.ns.capacity = strLength + 1;
		}

		out_ros_data.id = Id;

		out_ros_data.type = Type;

		out_ros_data.action = Action;

		out_ros_data.position.x = PositionX;

		out_ros_data.position.y = PositionY;

		out_ros_data.position.z = PositionZ;

		out_ros_data.scale = Scale;

		out_ros_data.outline_color.r = OutlineColorR;

		out_ros_data.outline_color.g = OutlineColorG;

		out_ros_data.outline_color.b = OutlineColorB;

		out_ros_data.outline_color.a = OutlineColorA;

		out_ros_data.filled = Filled;

		out_ros_data.fill_color.r = FillColorR;

		out_ros_data.fill_color.g = FillColorG;

		out_ros_data.fill_color.b = FillColorB;

		out_ros_data.fill_color.a = FillColorA;

		out_ros_data.lifetime.sec = LifetimeSec;

		out_ros_data.lifetime.nanosec = LifetimeNanosec;

		if (out_ros_data.points.data != nullptr)
		{
			free(out_ros_data.points.data);
		}
		out_ros_data.points.data = (decltype(out_ros_data.points.data))malloc(PointsX.Num() * (sizeof(PointsX) + sizeof(PointsY) + sizeof(PointsZ)));
		out_ros_data.points.size = PointsX.Num();
		out_ros_data.points.capacity = PointsX.Num();
		for (auto i = 0; i < PointsX.Num(); ++i)
		{
			out_ros_data.points.data[i].x = PointsX[i];

			out_ros_data.points.data[i].y = PointsY[i];

			out_ros_data.points.data[i].z = PointsZ[i];

			}
	if (out_ros_data.outline_colors.data != nullptr)
		{
			free(out_ros_data.outline_colors.data);
		}
		out_ros_data.outline_colors.data = (decltype(out_ros_data.outline_colors.data))malloc(OutlineColorsR.Num() * (sizeof(OutlineColorsR) + sizeof(OutlineColorsG) + sizeof(OutlineColorsB) + sizeof(OutlineColorsA)));
		out_ros_data.outline_colors.size = OutlineColorsR.Num();
		out_ros_data.outline_colors.capacity = OutlineColorsR.Num();
		for (auto i = 0; i < OutlineColorsR.Num(); ++i)
		{
			out_ros_data.outline_colors.data[i].r = OutlineColorsR[i];

			out_ros_data.outline_colors.data[i].g = OutlineColorsG[i];

			out_ros_data.outline_colors.data[i].b = OutlineColorsB[i];

			out_ros_data.outline_colors.data[i].a = OutlineColorsA[i];

			}
	
	}
};

UCLASS()
class RCLUE_API UROS2ImageMarkerMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSImageMarker& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSImageMarker& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	visualization_msgs__msg__ImageMarker image_marker_msg;
};