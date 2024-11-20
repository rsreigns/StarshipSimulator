// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Missile.generated.h"

class UProjectileMovementComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UCapsuleComponent;

class UGameplayEffect;
class UNiagaraSystem;

UCLASS()
class STARSHIPSIMULATOR_API AMissile : public AActor
{
	GENERATED_BODY()
	
public:	
	AMissile();
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UNiagaraSystem* NiagaraSystem;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	UStaticMeshComponent* MissileMesh;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	UCapsuleComponent* CapsuleComp;
	
#pragma region Overrides
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
#pragma endregion
#pragma  region CoreVariables
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Missile")
	UParticleSystem* ExplosionEffect;
	
#pragma endregion


#pragma region Functions

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	void OnExploded();
#pragma endregion

};
