// Fill out your copyright notice in the Description page of Project Settings.


#include "WoodenCrate.h"

// Constructor for the class, setting the default values
AWoodenCrate::AWoodenCrate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set root component
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BoxSceneComponent"));
	}

	// Find and set the mesh for the WoodenCrate
	if (!BoxMeshComponent)
	{
		BoxMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>BoxMesh(TEXT("'/Game/Models/WoodenBox/uploads_files_1868787_crate.uploads_files_1868787_crate'"));
		if (BoxMesh.Succeeded())
		{
			BoxMeshComponent->SetStaticMesh(BoxMesh.Object);
		}
		BoxMeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		BoxMeshComponent->SetupAttachment(RootComponent);
	}	
}

// Called when the game starts or when spawned
void AWoodenCrate::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWoodenCrate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
