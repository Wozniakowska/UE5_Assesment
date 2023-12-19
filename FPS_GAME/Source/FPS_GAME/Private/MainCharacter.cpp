
// Fill out your copyright notice in the Description page of Project Settings.

#include "MainCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/BoxComponent.h"
#include "Lava.h"
#include "GameFramework/PlayerController.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FPSCamera->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));
	FPSCamera->SetRelativeLocation(FVector(0.0f, 0.0f, BaseEyeHeight - 60.0f));
	FPSCamera->bUsePawnControlRotation = true;
	FPSMeshArms = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMeshArms"));
	check(FPSMeshArms != nullptr);
	FPSMeshArms->SetupAttachment(FPSCamera);
	JumpHeight = 60.0f;
	PlayerHealth = 10.00f;
	RespawnDelay = 0.01f;
	/*SpawnLocation = FVector(0.0f, 0.0f, 0.0f);*/
	isDead = false;
	bIsCrouching = false;

	if (!GunMeshComponent)
	{
		GunMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMeshComponent"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>GunMesh(TEXT("'/Game/Models/Weapon/uploads_files_4092110_Sci-fi+Gun.uploads_files_4092110_Sci-fi+Gun'"));
		if (GunMesh.Succeeded())
		{
			GunMeshComponent->SetStaticMesh(GunMesh.Object);
		}
		GunMeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		GunMeshComponent->SetupAttachment(FPSMeshArms);
	}
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	/*SpawnLocation = GetActorLocation();*/

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AMainCharacter::CountdownTimer, 1.0f, true, 1.0f);

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>
			(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	if (FPSMeshArms != nullptr)
	{
		FPSMeshArms->bCastDynamicShadow = false;

		FPSMeshArms->CastShadow = false;

		FPSMeshArms->SetOnlyOwnerSee(true);
	}
	GetMesh()->SetOwnerNoSee(true);
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsJumping && CanJump())
	{
		// Apply a higher jump while the space bar is held down
		GetCharacterMovement()->Velocity.Z = JumpHeight;
	}
	if (PlayerHealth < 0.00f)
	{
		PlayerHealth = 0.00f;
		Die();
	}
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMainCharacter::Jumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainCharacter::Look);

		EnhancedInputComponent->BindAction(DamageAction, ETriggerEvent::Triggered, this, &AMainCharacter::StartDamage);

		EnhancedInputComponent->BindAction(HealAction, ETriggerEvent::Triggered, this, &AMainCharacter::StartHealing);

		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Triggered, this, &AMainCharacter::CrouchStart);

		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &AMainCharacter::CrouchStop);

		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &AMainCharacter::Shoot);
	}
}

void AMainCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AMainCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(-LookAxisVector.Y);
	}
}

void AMainCharacter::Jumping()
{
	Jump();
	bIsJumping = true;
}

void AMainCharacter::CrouchStart()
{
	if (!bIsCrouching)
	{
		UE_LOG(LogTemp, Warning, TEXT("Crouching"));
		bIsCrouching = true;
		Crouch();
	}
}

void AMainCharacter::CrouchStop()
{
	if (bIsCrouching)
	{
		bIsCrouching = false;
		UnCrouch();
	}
}

void AMainCharacter::CountdownTimer()
{
	UE_LOG(LogTemp, Warning, TEXT("Countdown Timer"));
	if (Seconds > 0)
	{
		--Seconds;
		UE_LOG(LogTemp, Warning, TEXT("Seconds %f"), Seconds);
	}
	else
	{
		--Minutes;
		Seconds = 59.0f;
		UE_LOG(LogTemp, Warning, TEXT("Seconds %f"), Minutes);
		if (Minutes <= 0)
		{
			GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
			Seconds = 0.0f;
		}
	}
}

void AMainCharacter::SetRespawnLocation(const FVector& NewRespawnLocation)
{
	SpawnLocation = NewRespawnLocation;
}

void AMainCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
	//UE_LOG(LogTemp, Warning, TEXT("OtherActor %i"), OtherActor.ActorGuid.A);
}

float AMainCharacter::GetSeconds()
{
	return Seconds;
}

void AMainCharacter::TakeDamage(float DamageAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Damage taken"), DamageAmount);
	PlayerHealth -= DamageAmount;
	
}

void AMainCharacter::StartDamage()
{
	TakeDamage(0.2f);
}

void AMainCharacter::Heal(float HealAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Player Healing..."), HealAmount);
	PlayerHealth += HealAmount;
	if (PlayerHealth >= 1.00f)
	{
		PlayerHealth = 1.00f;
	}
}

void AMainCharacter::StartHealing()
{
	Heal(0.2f);
}

void AMainCharacter::Respawn()
{
	UE_LOG(LogTemp, Warning, TEXT("Spawning..."));
	SetActorLocation(SpawnLocation);
	isDead = false;
	PlayerHealth = 1.0f;
	
}

void AMainCharacter::Die()
{
	isDead = true;
	UE_LOG(LogTemp, Warning, TEXT(" Died!"));
	GetWorld()->GetTimerManager().SetTimer(RespawnTimeHandle, this, &AMainCharacter::Respawn, RespawnDelay, false);
}

void AMainCharacter::Shoot()
{	
	if (ProjectileClass)
	{
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		//MuzzleOffset.Set(40.0f, 0.0f, -20.0f);
		MuzzleOffset.Set(130.0f, GunMeshComponent->GetRelativeLocation().Y - 15.0f, -30.0f);

		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

		FRotator MuzzleRotation = CameraRotation;
		//MuzzleRotation.Roll -= 40.0f;

		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			AProjectile* ProjectileObj = World->SpawnActor<AProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (ProjectileObj)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = MuzzleRotation.Vector();
				ProjectileObj->FireInDirection(LaunchDirection);
			}
		}
	}
}