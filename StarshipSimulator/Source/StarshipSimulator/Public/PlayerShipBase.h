// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "Interface/PlayerUIInterface.h"
#include "PlayerShipBase.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UPlayerWidget;
class USceneComponent;
class UStaticMeshComponent;

class UGameplayAbility;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class STARSHIPSIMULATOR_API APlayerShipBase : public ABaseShip, public IPlayerUIInterface
{
	GENERATED_BODY()
public:
	APlayerShipBase() ;

#pragma region Components
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Components")
	UStaticMeshComponent* InteriorMesh;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Components")
	UCameraComponent* Camera;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Components")
	USpringArmComponent* SpringArm;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Components")
	UPlayerWidget* Widget;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Components")
	USceneComponent* MissileSocket;
	
#pragma endregion
	
#pragma region Overrides
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual UPlayerWidget* GetUIComponent() const override;
	virtual void UpdateScannedActors(TArray<AActor*> ScannedActors)  override;

#pragma endregion
	
#pragma region CoreVariables
	// Input Mapping
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Ship|Input")
	UInputMappingContext* InputContext;
	
	//Inut Actions
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Ship|Input")
	UInputAction* InteractAction;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Ship|Input")
	UInputAction* LookAction;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Ship|Input")
	UInputAction* SwitchCamAction;

	// Abilities
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Ship|Ability")
	UGameplayAbility* MissileAbility;

	// Ship Defaults
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Ship|Movement")
	float SpeedMultiplier;

	// Core
	UPROPERTY(BlueprintReadOnly)
	APlayerController* MyController;
	int32 HostilesCount;
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<AActor>TargetLockedActor;
	
#pragma endregion

#pragma region CoreFunctions

	//Input
	void InteractStart(const FInputActionValue& Value );
	void InteractEnd(const FInputActionValue& Value );
	void HandleLookInput(const FInputActionValue& Value );
	void HandleSwitchCam(const FInputActionValue& Value );

#pragma endregion

#pragma region Getters
	FORCEINLINE UCameraComponent* GetCamera() const { return Camera; }
	FORCEINLINE USpringArmComponent* GetSpringArm() const { return SpringArm; }
	FORCEINLINE UPlayerWidget* GetPlayerWidget() const { return Widget; }
	FORCEINLINE USceneComponent* GetMissileSocket() const { return MissileSocket; }
	FORCEINLINE UStaticMeshComponent* GetInteriorMesh() const { return InteriorMesh; }
	
#pragma endregion
	
};
