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

	if (!BoxMeshComponent)
	{
		BoxMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>BoxMesh(TEXT("'/Game/Models/WoodenBox/uploads_files_1868787_crate.uploads_files_1868787_crate'"));
		if (BoxMesh.Succeeded())
		{
			BoxMeshComponent->SetStaticMesh(BoxMesh.Object);
		}
		BoxMeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		BoxMeshComponent->OnComponentHit.AddDynamic(this, &AWoodenCrate::WhenShot);
		BoxMeshComponent->SetupAttachment(RootComponent);
	}

	if (!BoxNiagaraComponent)
	{
		BoxDestroy = LoadObject<UNiagaraSystem>(nullptr, TEXT("'/Game/Models/Weapon/ShotCrate.ShotCrate'"));
		BoxNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BoxNiagaraComponent"));
		BoxNiagaraComponent->SetupAttachment(RootComponent);
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

void AWoodenCrate::WhenShot(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
	{
		//BoxNiagaraComponent->SetAsset(BoxDestroy);
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange, "Shot");
	}	
}
