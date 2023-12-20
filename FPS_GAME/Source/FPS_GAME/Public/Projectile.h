// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "WoodenCrate.h"
#include "Projectile.generated.h"

//class UNiagaraSystem;

UCLASS()
class FPS_GAME_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION() void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile") USphereComponent* CollisionComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile") UStaticMeshComponent* ProjectileMeshComponent;	
	
	UPROPERTY(VisibleAnywhere, Category = "Movement") UProjectileMovementComponent* ProjectileMovementComponent;
	
	UPROPERTY(VisibleDefaultsOnly, Category = "Movement") UMaterialInstanceDynamic* ProjectileMaterialInstance;

	UPROPERTY(VisibleAnywhere, Category = "Projectile") UNiagaraComponent* BulletNiagaraComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile") UNiagaraSystem* BulletTrail;	
	
	void FireInDirection(const FVector& ShootDirection);
};
