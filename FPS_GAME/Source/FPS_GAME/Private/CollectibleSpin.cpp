// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectibleSpin.h"

// Sets default values
ACollectibleSpin::ACollectibleSpin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	pitchValue = 0.f;
	YawValue = 0.f;
	RollValue = 0.f;
}

// Called when the game starts or when spawned
void ACollectibleSpin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectibleSpin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FQuat QuatRotation = FQuat(FRotator(pitchValue, YawValue, RollValue));
	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);
}

