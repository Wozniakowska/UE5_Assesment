// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h" 
#include "Components/CapsuleComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MainCharacter.generated.h"

UCLASS()
class FPS_GAME_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/***************Player Health and Death system****************/
	void Heal(float HealAmount);
	void StartHealing();
	FTimerHandle RespawnTimeHandle;
	void Respawn();
	void Die();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float PlayerHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn")
		FVector SpawnLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float RespawnDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		bool isDead;
	/*************************************************************/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CountdownTimer")
	float Seconds = 59.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CountdownTimer")
	int32 Minutes = 2.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CountdownTimer")
	FTimerHandle CountdownTimerHandle;

	// Format the timer as "MM:SS"
	UFUNCTION(BlueprintImplementableEvent, Category = "UI")
	void UpdateTimerUI(const FString& TimerText);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputMappingContext* DefaultMappingContext;

	//Jump Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* JumpAction;

	//Move Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* MoveAction;

	//Look Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* LookAction;

	//Testing Damage Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* DamageAction;

	//Testing Heal Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		class UInputAction* HealAction;

	bool bIsJumping;
	float JumpHeight;


	//Take damage function
	void TakeDamage(float DamageAmount);
	//Start damage - assign the damage number
	void StartDamage();

	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	void Jumping();

	void CountdownTimer();

	// Camera component
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* FPSCamera;

	// First-person mesh (arms), visible only to the owning player.
	UPROPERTY(VisibleDefaultsOnly, Category = "MeshArms")
	USkeletalMeshComponent* FPSMeshArms;



};
