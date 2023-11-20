// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveablePlatformVertical.h"

// Sets default values
AMoveablePlatformVertical::AMoveablePlatformVertical()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    //Init Variables
    isMoving = true;
    MoveDistance = 500.0f;
    MoveSpeed = 100.0f;
    MoveZ = GetActorLocation().Z;
    StartDistance = 0.0f;
}

// Called when the game starts or when spawned
void AMoveablePlatformVertical::BeginPlay()
{
	Super::BeginPlay();
    MoveZ = GetActorLocation().Z + StartDistance;
}

// Called every frame
void AMoveablePlatformVertical::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    MovePlatformVertical(DeltaTime);
}

void AMoveablePlatformVertical::MovePlatformVertical(float DeltaTime)
{
    FVector NewMoveLocation = GetActorLocation();
    if (isMoving)
    {
        //Platform is moving forward
        NewMoveLocation.Z += MoveSpeed * DeltaTime;

        // Check if reached the target
        if (NewMoveLocation.Z >= MoveZ + MoveDistance)
        {
            NewMoveLocation.Z = MoveZ + MoveDistance;
            isMoving = false;
        }
    }
    else
    {
        // Move the platform back
        NewMoveLocation.Z -= MoveSpeed * DeltaTime;

        // Check if reached the target
        if (NewMoveLocation.Z <= MoveZ)
        {
            NewMoveLocation.Z = MoveZ;
            isMoving = true;
        }
    }

    // Setting new location
    SetActorLocation(NewMoveLocation);
}

