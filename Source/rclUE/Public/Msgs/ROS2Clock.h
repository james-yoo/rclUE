// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from rosgraph_msgs/msg/Clock.msg - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "rosgraph_msgs/msg/clock.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Time.h"

// Generated
#include "ROS2Clock.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSClock {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSTime Clock;

  FROSClock() {}

  void SetFromROS2(const rosgraph_msgs__msg__Clock &in_ros_data) {
    Clock.SetFromROS2(in_ros_data.clock);
  }

  void SetROS2(rosgraph_msgs__msg__Clock &out_ros_data) const {
    Clock.SetROS2(out_ros_data.clock);
  }
};

UCLASS()
class RCLUE_API UROS2ClockMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSClock &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSClock &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  rosgraph_msgs__msg__Clock clock_msg;
};