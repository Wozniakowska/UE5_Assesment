// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveablePlatform.h"

// Sets default values
AMoveablePlatform::AMoveablePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    //Init Variables
    isMoving = true;
    MoveDistance = 500.0f;
    MoveSpeed = 100.0f;
    MoveX = GetActorLocation().X;
    StartDistance = 0.0f;
}

// Called when the game starts or when spawned
void AMoveablePlatform::BeginPlay()
{
	Super::BeginPlay();
    MoveX = GetActorLocation().X + StartDistance;
}

// Called every frame
void AMoveablePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    MovePlatform(DeltaTime);
}

void AMoveablePlatform::MovePlatform(float DeltaTime)
{
    FVector NewMoveLocation = GetActorLocation();
    if (isMoving)
    {
        //Platform is moving forward
        NewMoveLocation.X += MoveSpeed * DeltaTime;

        // Check if reached the target
        if (NewMoveLocation.X >= MoveX + MoveDistance)
        {
            NewMoveLocation.X = MoveX + MoveDistance;
            isMoving = false;
        }
    }
    else
    {
        // Move the platform back
        NewMoveLocation.X -= MoveSpeed * DeltaTime;

        // Check if reached the target
        if (NewMoveLocation.X <= MoveX)
        {
            NewMoveLocation.X = MoveX;
            isMoving = true;
        }
    }

    // Setting new location
    SetActorLocation(NewMoveLocation);
}