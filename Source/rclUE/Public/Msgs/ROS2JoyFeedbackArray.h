// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/JoyFeedbackArray.msg -
// do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "sensor_msgs/msg/joy_feedback_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2JoyFeedback.h"

// Generated
#include "ROS2JoyFeedbackArray.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJoyFeedbackArray {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FROSJoyFeedback> Array;

  FROSJoyFeedbackArray() {}

  void SetFromROS2(const sensor_msgs__msg__JoyFeedbackArray &in_ros_data) {
    UROS2Utils::SequenceROSToUEArray<sensor_msgs__msg__JoyFeedback,
                                     FROSJoyFeedback>(
        in_ros_data.array.data, Array, in_ros_data.array.size);
  }

  void SetROS2(sensor_msgs__msg__JoyFeedbackArray &out_ros_data) const {
    UROS2Utils::ROSSequenceResourceAllocation<
        sensor_msgs__msg__JoyFeedback__Sequence>(out_ros_data.array,
                                                 Array.Num());
    UROS2Utils::ArrayUEToROSSequence<sensor_msgs__msg__JoyFeedback,
                                     FROSJoyFeedback>(
        Array, out_ros_data.array.data, Array.Num());
  }
};

UCLASS()
class RCLUE_API UROS2JoyFeedbackArrayMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSJoyFeedbackArray &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSJoyFeedbackArray &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  sensor_msgs__msg__JoyFeedbackArray joy_feedback_array_msg;
};