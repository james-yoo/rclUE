// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from type_description_interfaces/msg/TypeDescription.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "type_description_interfaces/msg/type_description.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2TDIIndividualTypeDescription.h"
#include "type_description_interfaces/msg/detail/individual_type_description__functions.h"

// Generated
#include "ROS2TDITypeDescription.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSTDITypeDescription
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTDIIndividualTypeDescription TypeDescription;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSTDIIndividualTypeDescription> ReferencedTypeDescriptions;

    FROSTDITypeDescription()
    {
    }

    void SetFromROS2(const type_description_interfaces__msg__TypeDescription& in_ros_data)
    {
        TypeDescription.SetFromROS2(in_ros_data.type_description);

        UROS2Utils::SequenceROSToUEArray<type_description_interfaces__msg__IndividualTypeDescription,
                                         FROSTDIIndividualTypeDescription>(in_ros_data.referenced_type_descriptions.data,
                                                                           ReferencedTypeDescriptions,
                                                                           in_ros_data.referenced_type_descriptions.size);
    }

    void SetROS2(type_description_interfaces__msg__TypeDescription& out_ros_data) const
    {
        TypeDescription.SetROS2(out_ros_data.type_description);

        if (out_ros_data.referenced_type_descriptions.data)
        {
            type_description_interfaces__msg__IndividualTypeDescription__Sequence__fini(&out_ros_data.referenced_type_descriptions);
        }
        if (!type_description_interfaces__msg__IndividualTypeDescription__Sequence__init(&out_ros_data.referenced_type_descriptions,
                                                                                         ReferencedTypeDescriptions.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.referenced_type_descriptions  "));
        }
        UROS2Utils::ArrayUEToROSSequence<type_description_interfaces__msg__IndividualTypeDescription,
                                         FROSTDIIndividualTypeDescription>(
            ReferencedTypeDescriptions, out_ros_data.referenced_type_descriptions.data, ReferencedTypeDescriptions.Num());
    }
};

UCLASS()
class RCLUE_API UROS2TDITypeDescriptionMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTDITypeDescription& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTDITypeDescription& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    type_description_interfaces__msg__TypeDescription type_description_msg;
};
