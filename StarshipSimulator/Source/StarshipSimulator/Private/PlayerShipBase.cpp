// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShipBase.h"

// Dependencies
#include "EnhancedInputSubsystems.h"

//Components
#include "Camera/CameraComponent.h"
#include "Components/PlayerWidget.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Custom Classes


#include "StarshipSimulator/DebugHelper.h"

APlayerShipBase::APlayerShipBase()
{
	InteriorMesh = CreateDefaultSubobject<UStaticMeshComponent>("InteriorMesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	Widget = CreateDefaultSubobject<UPlayerWidget>("Widget");

	MissileSocket = CreateDefaultSubobject<USceneComponent>("MissileSocket");
	MissileSocket->SetupAttachment(GetShipMesh());
}

void APlayerShipBase::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* InputComp = Cast<UEnhancedInputComponent>(InputComponent);
	MyController= Cast<APlayerController>(GetController());
	if(InputComp && MyController)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem =
	ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(MyController->GetLocalPlayer());
		if (Subsystem && InputContext)
		{
			// Bind Input Actions
			Subsystem->AddMappingContext(InputContext,0);
			InputComp->BindAction(InteractAction,ETriggerEvent::Started,this,&ThisClass::InteractStart);
			InputComp->BindAction(InteractAction,ETriggerEvent::Completed,this,&ThisClass::InteractEnd);
			InputComp->BindAction(LookAction,ETriggerEvent::Triggered,this,&ThisClass::HandleLookInput);
			InputComp->BindAction(SwitchCamAction,ETriggerEvent::Started,this,&ThisClass::HandleSwitchCam);

		}
	}
}

UPlayerWidget* APlayerShipBase::GetUIComponent() const
{
	return Widget;
}

void APlayerShipBase::UpdateScannedActors(TArray<AActor*> ScannedActors) 
{
	HostilesCount = ScannedActors.Num();
}

void APlayerShipBase::InteractStart(const FInputActionValue& Value)
{

}

void APlayerShipBase::InteractEnd(const FInputActionValue& Value)
{
		
}

void APlayerShipBase::HandleLookInput(const FInputActionValue& Value)
{
	FVector2D InputValue = Value.Get<FVector2D>();
	AddControllerPitchInput(InputValue.Y);
	AddControllerYawInput(InputValue.X);
}

void APlayerShipBase::HandleSwitchCam(const FInputActionValue& Value)
{

}
	