// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwingingBall.generated.h"

UCLASS()
class FPS_GAME_API ASwingingBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwingingBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere) float SwingingSpeed;
	UPROPERTY(EditAnywhere) float SwingingDistance;
	FVector CurrentLocation;
	void SwingBall(float DeltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
