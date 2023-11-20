// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*MOVEABLE PLATFORM X*/
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveablePlatform.generated.h"

UCLASS()
class FPS_GAME_API AMoveablePlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveablePlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float MoveSpeed;

	UPROPERTY(EditAnywhere)
	float MoveDistance;

	UPROPERTY(EditAnywhere)
	float StartDistance;

	float MoveX;
	bool isMoving;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void MovePlatform(float DeltaTime);
};
