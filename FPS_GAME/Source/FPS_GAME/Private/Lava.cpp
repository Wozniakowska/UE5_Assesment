// Fill out your copyright notice in the Description page of Project Settings.


#include "Lava.h"
#include "Components/BoxComponent.h"
#include "MainCharacter.h"

// Sets default values
ALava::ALava()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	//BoxComponent->SetBoxExtent(FVector(2500.f, 350.f, 200.f)); // Set the size of the trigger box
    /*BoxComponent->SetRelativeScale3D(FVector(3.0f, 3.0f, 16.0f));*/
	/*BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ALava::OverlapBegin);*/
	RootComponent = BoxComponent;
}

// Called when the game starts or when spawned
void ALava::BeginPlay()
{
	Super::BeginPlay();

}

//void ALava::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//    // Check if the overlapping actor is of a specific class, for example, a player character
//    if (OtherActor && OtherActor != this && OtherComp)
//    {
//        if (OtherActor->IsA(AMainCharacter::StaticClass()))
//        {
//            // Call the StartDamage function from the character class
//            AMainCharacter* Player = Cast<AMainCharacter>(OtherActor);
//            if (Player)
//            {
//                Player->StartDamage();
//                GetWorldTimerManager().SetTimer(DamageTimerHandle, this, &ALava::DamagePlayer, 1.0f, true);
//            }
//        }
//    }
//}

// Called every frame
void ALava::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
