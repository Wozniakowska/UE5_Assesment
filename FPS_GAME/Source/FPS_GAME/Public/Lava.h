// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lava.generated.h"

UCLASS()
class FPS_GAME_API ALava : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALava();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CollisionComponents")
	class UBoxComponent* BoxComponent;
	UFUNCTION()
	//void OverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	//// Timer handle for applying damage repeatedly
	//FTimerHandle DamageTimerHandle;
	float InitCollisionRadius;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
