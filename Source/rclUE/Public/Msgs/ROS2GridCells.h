// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/GridCells.msg - do not
// modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "nav_msgs/msg/grid_cells.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"

// Generated
#include "ROS2GridCells.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSGridCells {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float CellWidth = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float CellHeight = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<FVector> Cells;

  FROSGridCells() {}

  void SetFromROS2(const nav_msgs__msg__GridCells &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    CellWidth = in_ros_data.cell_width;

    CellHeight = in_ros_data.cell_height;

    UROS2Utils::VectorSequenceROSToUEArray<geometry_msgs__msg__Point>(
        in_ros_data.cells.data, Cells, in_ros_data.cells.size);
  }

  void SetROS2(nav_msgs__msg__GridCells &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    out_ros_data.cell_width = CellWidth;

    out_ros_data.cell_height = CellHeight;

    UROS2Utils::ROSSequenceResourceAllocation<
        geometry_msgs__msg__Point__Sequence>(out_ros_data.cells, Cells.Num());
    UROS2Utils::VectorArrayUEToROSSequence<geometry_msgs__msg__Point>(
        Cells, out_ros_data.cells.data, Cells.Num());
  }
};

UCLASS()
class RCLUE_API UROS2GridCellsMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSGridCells &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSGridCells &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  nav_msgs__msg__GridCells grid_cells_msg;
};