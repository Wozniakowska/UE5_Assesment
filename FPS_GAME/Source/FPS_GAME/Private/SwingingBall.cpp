// Fill out your copyright notice in the Description page of Project Settings.


#include "SwingingBall.h"
#include "Components/BoxComponent.h"

// Sets default values
ASwingingBall::ASwingingBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SwingingSpeed = 3.0f;
	SwingingDistance = 50.0f;
}

// Called when the game starts or when spawned
void ASwingingBall::BeginPlay()
{
	Super::BeginPlay();
	CurrentLocation = GetActorLocation();
}

// Called every frame
void ASwingingBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SwingBall(DeltaTime);
}

void ASwingingBall::SwingBall(float DeltaTime)
{
	//FVector NewBallLocation = CurrentLocation + FVector(SwingingDistance * FMath::Sin(SwingingSpeed * GetGameTimeSinceCreation()), 0.0f, 0.0f);
	FVector NewBallLocation = CurrentLocation + FVector(SwingingDistance * FMath::Sin(SwingingSpeed * GetGameTimeSinceCreation()),0.0f, 0.0f);
	SetActorLocation(NewBallLocation);
}
