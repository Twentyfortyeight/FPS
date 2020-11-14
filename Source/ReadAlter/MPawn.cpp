// Fill out your copyright notice in the Description page of Project Settings.


#include "MPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AMPawn::AMPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));

	UCameraComponent*OurCameracomp = CreateDefaultSubobject<UCameraComponent>(TEXT("Our Camera"));
	OurVisibleActor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Our mesh"));
	OurCameracomp->SetupAttachment(RootComponent);
	OurCameracomp->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f));
	OurCameracomp->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));

	OurVisibleActor->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	{
		float CurrentScale = OurVisibleActor->GetComponentScale().X;
		if (bGrowing)
		{
			CurrentScale += DeltaTime;
		}
		else
		{
			CurrentScale -= (DeltaTime * 0.5f);
		}
		CurrentScale = FMath::Clamp(CurrentScale, 1.0f, 2.0f);
		OurVisibleActor->SetWorldScale3D(FVector(CurrentScale));
	}
	
	{
		if (!CurrentVelosity.IsNearlyZero())
		{
			FVector NewLocation = GetActorLocation() + (CurrentVelosity * DeltaTime);
			SetActorLocation(NewLocation);
		}
	}
}


// Called to bind functionality to input
void AMPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAction("Growing", IE_Pressed, this, &AMPawn::StartGrowing);
	InputComponent->BindAction("Growing", IE_Released, this, &AMPawn::StopGrowing);
	
	InputComponent->BindAxis("Move_Axis_X", this, &AMPawn::MoveX);
	InputComponent->BindAxis("Move_Axis_Y", this, &AMPawn::MoveY);
	
}

void AMPawn::MoveX(float AxisValue)
{
	CurrentVelosity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.f;

}

void AMPawn::MoveY(float AxisValue)
{
	CurrentVelosity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.f;
}

void AMPawn::StartGrowing()
{
	bGrowing = true;
}

void AMPawn::StopGrowing()
{
	bGrowing = false;
}

