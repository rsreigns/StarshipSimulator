

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "BaseShip.generated.h"

class UStaticMeshComponent;;
class UBaseASC;
class UGameplayAbility;
class UBaseAttributes;


UCLASS()
class STARSHIPSIMULATOR_API ABaseShip : public APawn, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	ABaseShip();
#pragma region Overrides
	
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual void PossessedBy(AController* NewController) override;
#pragma endregion

#pragma region Components
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	UStaticMeshComponent* ShipMesh;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	UBaseASC* BaseASC;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	UBaseAttributes* BaseAttributes;
	
#pragma endregion

#pragma region CoreVariables

	
#pragma endregion

#pragma region CoreFunctions
	/*UFUNCTION()
	void OnTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, 
	class AController* InstigatedBy, AActor* DamageCauser);*/
#pragma endregion



#pragma region Getters

	FORCEINLINE UStaticMeshComponent* GetShipMesh() const { return ShipMesh; }
	FORCEINLINE UBaseASC* GetBaseASC() const { return BaseASC; }
	
#pragma endregion


};
