// Copyright 2021-2024 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/BatteryState.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/battery_state.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


// Generated
#include "ROS2BatteryState.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSBatteryState
{
	GENERATED_BODY()

public:
		static constexpr uint8 POWER_SUPPLY_STATUS_UNKNOWN = 0;
	static constexpr uint8 POWER_SUPPLY_STATUS_CHARGING = 1;
	static constexpr uint8 POWER_SUPPLY_STATUS_DISCHARGING = 2;
	static constexpr uint8 POWER_SUPPLY_STATUS_NOT_CHARGING = 3;
	static constexpr uint8 POWER_SUPPLY_STATUS_FULL = 4;
	static constexpr uint8 POWER_SUPPLY_HEALTH_UNKNOWN = 0;
	static constexpr uint8 POWER_SUPPLY_HEALTH_GOOD = 1;
	static constexpr uint8 POWER_SUPPLY_HEALTH_OVERHEAT = 2;
	static constexpr uint8 POWER_SUPPLY_HEALTH_DEAD = 3;
	static constexpr uint8 POWER_SUPPLY_HEALTH_OVERVOLTAGE = 4;
	static constexpr uint8 POWER_SUPPLY_HEALTH_UNSPEC_FAILURE = 5;
	static constexpr uint8 POWER_SUPPLY_HEALTH_COLD = 6;
	static constexpr uint8 POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE = 7;
	static constexpr uint8 POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE = 8;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_UNKNOWN = 0;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_NIMH = 1;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_LION = 2;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_LIPO = 3;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_LIFE = 4;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_NICD = 5;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_LIMN = 6;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_TERNARY = 7;
	static constexpr uint8 POWER_SUPPLY_TECHNOLOGY_VRLA = 8;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FROSHeader Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Voltage = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Temperature = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Current = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Charge = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Capacity = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DesignCapacity = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Percentage = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 PowerSupplyStatus = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 PowerSupplyHealth = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 PowerSupplyTechnology = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPresent = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> CellVoltage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> CellTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SerialNumber;

	

	FROSBatteryState()
	{
		
	}

	void SetFromROS2(const sensor_msgs__msg__BatteryState& in_ros_data)
	{
    	Header.SetFromROS2(in_ros_data.header);

		Voltage = in_ros_data.voltage;

		Temperature = in_ros_data.temperature;

		Current = in_ros_data.current;

		Charge = in_ros_data.charge;

		Capacity = in_ros_data.capacity;

		DesignCapacity = in_ros_data.design_capacity;

		Percentage = in_ros_data.percentage;

		PowerSupplyStatus = in_ros_data.power_supply_status;

		PowerSupplyHealth = in_ros_data.power_supply_health;

		PowerSupplyTechnology = in_ros_data.power_supply_technology;

		bPresent = in_ros_data.present;

		UROS2Utils::SequenceROSToUEArray<float, float>(in_ros_data.cell_voltage.data, CellVoltage, in_ros_data.cell_voltage.size);

		UROS2Utils::SequenceROSToUEArray<float, float>(in_ros_data.cell_temperature.data, CellTemperature, in_ros_data.cell_temperature.size);

		Location = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.location);

		SerialNumber = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.serial_number);

		
	}

	void SetROS2(sensor_msgs__msg__BatteryState& out_ros_data) const
	{
    	Header.SetROS2(out_ros_data.header);

		out_ros_data.voltage = Voltage;

		out_ros_data.temperature = Temperature;

		out_ros_data.current = Current;

		out_ros_data.charge = Charge;

		out_ros_data.capacity = Capacity;

		out_ros_data.design_capacity = DesignCapacity;

		out_ros_data.percentage = Percentage;

		out_ros_data.power_supply_status = PowerSupplyStatus;

		out_ros_data.power_supply_health = PowerSupplyHealth;

		out_ros_data.power_supply_technology = PowerSupplyTechnology;

		out_ros_data.present = bPresent;

		if (out_ros_data.cell_voltage.data) {
		rosidl_runtime_c__float32__Sequence__fini(&out_ros_data.cell_voltage);
		}
		if (!rosidl_runtime_c__float32__Sequence__init(&out_ros_data.cell_voltage, CellVoltage.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.cell_voltage  "));}
		UROS2Utils::ArrayUEToROSSequence<float, float>(CellVoltage, out_ros_data.cell_voltage.data, CellVoltage.Num());

		if (out_ros_data.cell_temperature.data) {
		rosidl_runtime_c__float32__Sequence__fini(&out_ros_data.cell_temperature);
		}
		if (!rosidl_runtime_c__float32__Sequence__init(&out_ros_data.cell_temperature, CellTemperature.Num())) {UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.cell_temperature  "));}
		UROS2Utils::ArrayUEToROSSequence<float, float>(CellTemperature, out_ros_data.cell_temperature.data, CellTemperature.Num());

		UROS2Utils::StringUEToROS(Location, out_ros_data.location);

		UROS2Utils::StringUEToROS(SerialNumber, out_ros_data.serial_number);

		
	}
};

UCLASS()
class RCLUE_API UROS2BatteryStateMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSBatteryState& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSBatteryState& Output) const;
	
	virtual void* Get() override;

	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_STATUS_UNKNOWN()
	{
		return FROSBatteryState::POWER_SUPPLY_STATUS_UNKNOWN;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_STATUS_CHARGING()
	{
		return FROSBatteryState::POWER_SUPPLY_STATUS_CHARGING;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_STATUS_DISCHARGING()
	{
		return FROSBatteryState::POWER_SUPPLY_STATUS_DISCHARGING;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_STATUS_NOT_CHARGING()
	{
		return FROSBatteryState::POWER_SUPPLY_STATUS_NOT_CHARGING;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_STATUS_FULL()
	{
		return FROSBatteryState::POWER_SUPPLY_STATUS_FULL;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_UNKNOWN()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_UNKNOWN;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_GOOD()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_GOOD;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_OVERHEAT()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_OVERHEAT;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_DEAD()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_DEAD;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_OVERVOLTAGE()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_OVERVOLTAGE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_UNSPEC_FAILURE()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_UNSPEC_FAILURE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_COLD()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_COLD;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE()
	{
		return FROSBatteryState::POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_UNKNOWN()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_UNKNOWN;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_NIMH()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_NIMH;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_LION()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_LION;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_LIPO()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_LIPO;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_LIFE()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_LIFE;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_NICD()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_NICD;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_LIMN()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_LIMN;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_TERNARY()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_TERNARY;
	}
	UFUNCTION(BlueprintCallable)
	static uint8 CONST_POWER_SUPPLY_TECHNOLOGY_VRLA()
	{
		return FROSBatteryState::POWER_SUPPLY_TECHNOLOGY_VRLA;
	}
	


private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__BatteryState battery_state_msg;
};