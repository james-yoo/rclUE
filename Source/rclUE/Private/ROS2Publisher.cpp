// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Publisher.h"

DEFINE_LOG_CATEGORY(LogROS2Publisher);

// Sets default values for this component's properties
UROS2Publisher::UROS2Publisher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UROS2Publisher::BeginPlay()
{
	UE_LOG(LogROS2Publisher, Warning, TEXT("Publisher BeginPlay (%s)"), *__LOG_INFO__);

	if (ownerNode == nullptr)
	{
		ownerNode = Cast<AROS2Node>(GetOwner());
	}

	Super::BeginPlay();

	if (ownerNode != nullptr)
	{
		Init();
	}
	else
	{
		ensureMsgf(false, TEXT("Publisher BeginPlay - Owner not set (%s)"), *__LOG_INFO__);
	}
	
	UE_LOG(LogROS2Publisher, Warning, TEXT("Publisher BeginPlay - Done (%s)"), *__LOG_INFO__);
}

void UROS2Publisher::Init(bool IsTransientLocal)
{
	check(ownerNode != nullptr);
	if (State == UROS2State::Created && ownerNode->State == UROS2State::Initialized)
	{
		InitializeMessage(); // needed to get type support
		
		check(IsValid(TopicMessage));
		
		const rosidl_message_type_support_t * msg_type_support = TopicMessage->GetTypeSupport(); // this should be a parameter, but for the moment we leave it fixed

		ownerNode->Init();
		UE_LOG(LogROS2Publisher, Warning, TEXT("Publisher Init - rclc_publisher_init_default (%s)"), *__LOG_INFO__);

		if (IsTransientLocal) // required for tf_static
		{
			pub = rcl_get_zero_initialized_publisher();
			rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();
			pub_opt.qos.durability = RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL;
			//pub_opt.qos.reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
			rcl_ret_t rc = rcl_publisher_init(
				&pub,
				ownerNode->GetNode(),
				msg_type_support,
				TCHAR_TO_ANSI(*TopicName),
				&pub_opt);
				
			if (rc != RCL_RET_OK)
			{
				UE_LOG(LogROS2Publisher, Error, TEXT("Failed status : %d (%s). Terminating."),(int)rc, *__LOG_INFO__);
				UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
			}
		}
		else
		{
			rcl_ret_t rc = rclc_publisher_init_default(&pub, ownerNode->GetNode(), msg_type_support, TCHAR_TO_ANSI(*TopicName));
			if (rc != RCL_RET_OK)
			{
				UE_LOG(LogROS2Publisher, Error, TEXT("Failed status : %d (%s). Terminating."),(int)rc, *__LOG_INFO__);
				UKismetSystemLibrary::QuitGame(GetOwner()->GetWorld(), nullptr, EQuitPreference::Quit, true);
			}
		}

		GWorld->GetGameInstance()->GetTimerManager().SetTimer(timerHandle, this, &UROS2Publisher::UpdateAndPublishMessage, 1.f/(float)PublicationFrequencyHz, true);

		State = UROS2State::Initialized;
	}
	else if (State == UROS2State::Initialized && ownerNode->State == UROS2State::Initialized)
	{
		ensureMsgf(false, TEXT("Publisher Init - already initialized! (%s)"), *__LOG_INFO__);
	}
	else if (ownerNode->State == UROS2State::Created)
	{
		ensureMsgf(false, TEXT("Publisher Init (%s) - Node needs to be initialized before publisher! (%s)"), *TopicName, *__LOG_INFO__);
	}
	else
	{
		ensureMsgf(false, TEXT("Publisher Init - this shouldn't happen! (%s)"), *__LOG_INFO__);
	}
}

void UROS2Publisher::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UE_LOG(LogROS2Publisher, Warning, TEXT("Publisher EndPlay (%s)"), *__LOG_INFO__);

	Super::EndPlay(EndPlayReason);
	
	UE_LOG(LogROS2Publisher, Warning, TEXT("Publisher EndPlay - Done (%s)"), *__LOG_INFO__);
}

// Called every frame
void UROS2Publisher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UROS2Publisher::Destroy()
{
	UE_LOG(LogROS2Publisher, Warning, TEXT("Publisher Destroy (%s)"), *__LOG_INFO__);
	if (TopicMessage != nullptr)
	{
		TopicMessage->Fini();
	}

	if (ownerNode != nullptr)
	{
		UE_LOG(LogROS2Publisher, Warning, TEXT("Publisher Destroy - rcl_publisher_fini (%s)"), *__LOG_INFO__);
		RCSOFTCHECK(rcl_publisher_fini(&pub, ownerNode->GetNode()));
	}
	UE_LOG(LogROS2Publisher, Warning, TEXT("Publisher Destroy - Done (%s)"), *__LOG_INFO__);
}

void UROS2Publisher::InitializeMessage()
{
	if (TopicName != FString() && MsgClass)
	{
		TopicMessage = NewObject<UROS2GenericMsg>(this, MsgClass);

		if (ensure(IsValid(TopicMessage)))
		{
			TopicMessage->Init();
		}
		else
		{
			ensureMsgf(false, TEXT("Topic (%s) is nullptr! (%s)"), *TopicName, *__LOG_INFO__);
		}
	}
	else
	{
		ensureMsgf(false, TEXT("TopicName or MsgClass uninitialized! (%s)"), *__LOG_INFO__);
	}
}

void UROS2Publisher::UpdateAndPublishMessage_Implementation()
{
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));
	
	UpdateDelegate.ExecuteIfBound(TopicMessage);
	Publish();
}

void UROS2Publisher::Publish()
{
	check(State == UROS2State::Initialized);
	check(ownerNode != nullptr);

	pub_msg = TopicMessage->Get();
	
    RCSOFTCHECK(rcl_publish(&pub, pub_msg, NULL));
}
