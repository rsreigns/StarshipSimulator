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
#include "Controller/MyPlayerController.h"

#include "StarshipSimulator/DebugHelper.h"

APlayerShipBase::APlayerShipBase()
{
	InteriorMesh = CreateDefaultSubobject<UStaticMeshComponent>("InteriorMesh");
	InteriorMesh->SetupAttachment(ShipMesh);
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(ShipMesh);
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	Widget = CreateDefaultSubobject<UPlayerWidget>("Widget");

}

void APlayerShipBase::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* InputComp = Cast<UEnhancedInputComponent>(InputComponent);
	AMyPlayerController* MyController = Cast<AMyPlayerController>(GetController());
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
	if (CurrentCamIndex == 0)
	{
		CurrentCamIndex = 1;
		// go from chair seat to screen : spring arm location forward x set in blueprint, length = 0, remove offsets.
		SpringArm->SetRelativeLocation(ScreenCamLocation);
		SpringArm->TargetArmLength = 0;
		return;
	}
	if (CurrentCamIndex == 1)
	{
		CurrentCamIndex = 2;
		//go from screen to ship back : SA relative = 0, length = 3000, socket z offset = 1000
		SpringArm->SetRelativeLocation(FVector::ZeroVector);
		SpringArm->TargetArmLength = BackCamDistance;
		SpringArm->SocketOffset = FVector(0.f, 0.f, BackCamZOffset);
		InteriorMesh->SetHiddenInGame(true,true);
		ShipMesh->SetHiddenInGame(false);
		return;
	}
	if (CurrentCamIndex == 2)
	{
		CurrentCamIndex = 0;
		//go from ship back to chair seat : length = 0, offset = 0
		SpringArm->SetRelativeLocation(DefaultCamLocation);
		SpringArm->TargetArmLength = 0.f;
		SpringArm->SocketOffset = FVector(0.f, 0.f, 0.f);
		InteriorMesh->SetHiddenInGame(false,true);
		ShipMesh->SetHiddenInGame(true);
		return;
	}
}

void APlayerShipBase::DestroyShip()
{
	Super::DestroyShip();
	BP_OnShipDestroyed();
}
	