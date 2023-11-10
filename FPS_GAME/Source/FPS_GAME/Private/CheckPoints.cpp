// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoints.h"
#include "Components/BoxComponent.h"
#include "MainCharacter.h"

// Sets default values
ACheckPoints::ACheckPoints()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TriggerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerCollision->SetBoxExtent(FVector(50.f, 50.f, 50.f)); 
	RootComponent = TriggerCollision;
}

// Called when the game starts or when spawned
void ACheckPoints::BeginPlay()
{
	Super::BeginPlay();
	TriggerCollision->OnComponentBeginOverlap.AddDynamic(this, &ACheckPoints::OnBeingOverlap);
}


// Called every frame
void ACheckPoints::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACheckPoints::OnBeingOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (AMainCharacter* MainCharacter = Cast<AMainCharacter>(OtherActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("Collision Detected"));
		MainCharacter->SetRespawnLocation(GetActorLocation());
	}
}

void ACheckPoints::CollisionVerify()
{
	TArray<AActor*> OverlappingActors;
	TriggerCollision->GetOverlappingActors(OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		AMainCharacter* MainCharacter = Cast<AMainCharacter>(Actor);
		if (MainCharacter)
		{
			/*UE_LOG(LogTemp, Warning, TEXT("Collision Detected"));*/

		}
	}
}

