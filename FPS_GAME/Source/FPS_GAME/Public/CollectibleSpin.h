// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectibleSpin.generated.h"

UCLASS()
class FPS_GAME_API ACollectibleSpin : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectibleSpin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float pitchValue;
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float YawValue;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float RollValue;

	
};
