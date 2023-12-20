// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "WoodenCrate.generated.h"

UCLASS()
class FPS_GAME_API AWoodenCrate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWoodenCrate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Shootable") UBoxComponent* BoxCollisionComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Shootable") UStaticMeshComponent* BoxMeshComponent;

	void WhenShot();

	TArray<FVector> PositionArray;

	UPROPERTY(EditDefaultsOnly, Category = "Gunplay") TSubclassOf<class AWoodenCrate> WoodenCrateClass;
};
