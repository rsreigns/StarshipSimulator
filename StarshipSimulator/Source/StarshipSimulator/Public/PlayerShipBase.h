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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ship|Camera")
	float BackCamDistance = 3000.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ship|Camera")
	FVector ScreenCamLocation = FVector(400.f, 0.f, 0.f);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ship|Camera")
	FVector DefaultCamLocation = FVector(400.f, 0.f, 0.f);
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ship|Camera")
	float BackCamZOffset = 1000.f;
	// Core

	UPROPERTY(BlueprintReadOnly)
	int32 CurrentCamIndex = 0;
#pragma endregion

#pragma region CoreFunctions

	//Input
	void InteractStart(const FInputActionValue& Value );
	void InteractEnd(const FInputActionValue& Value );
	void HandleLookInput(const FInputActionValue& Value );
	void HandleSwitchCam(const FInputActionValue& Value );

	virtual void DestroyShip() override;
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnShipDestroyed();

#pragma endregion

#pragma region Getters
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Player|Defaults")
	FORCEINLINE UCameraComponent* GetCamera() const { return Camera; }
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Player|Defaults")
	FORCEINLINE USpringArmComponent* GetSpringArm() const { return SpringArm; }
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Player|Defaults")
	FORCEINLINE UPlayerWidget* GetPlayerWidget() const { return Widget; }
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Player|Defaults")
	FORCEINLINE UStaticMeshComponent* GetInteriorMesh() const { return InteriorMesh; }
	
#pragma endregion
	
};
