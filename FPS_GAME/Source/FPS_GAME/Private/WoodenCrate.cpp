// Fill out your copyright notice in the Description page of Project Settings.


#include "WoodenCrate.h"

// Sets default values
AWoodenCrate::AWoodenCrate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BoxSceneComponent"));
	}

	/*if (!BoxCollisionComponent)
	{

	}*/

	if (!BoxMeshComponent)
	{
		BoxMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>BoxMesh(TEXT("'/Game/Models/WoodenBox/uploads_files_1868787_crate.uploads_files_1868787_crate'"));
		if (BoxMesh.Succeeded())
		{
			BoxMeshComponent->SetStaticMesh(BoxMesh.Object);
		}
	}	
}

// Called when the game starts or when spawned
void AWoodenCrate::BeginPlay()
{
	Super::BeginPlay();

	UWorld* ThisWorld = GetWorld();
	PositionArray.Add(FVector(4435.706604, 803.699899, 578.028089));
	FRotator rotation(0, 0, 0);
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();
	AWoodenCrate* WoodenCrateObj = ThisWorld->SpawnActor<AWoodenCrate>(WoodenCrateClass, PositionArray[0], rotation, SpawnParams);
	if (WoodenCrateObj)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("ShouldBeSpawned"));
	}	
}

// Called every frame
void AWoodenCrate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

