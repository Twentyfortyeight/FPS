// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateAngleAxis.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "DrawDebugHelpers.h"

// Sets default values
ARotateAngleAxis::ARotateAngleAxis()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Demensions = FVector(300, 0, 0);
	AxisVector = FVector(0, 0, 1);
	Multiplier = 50.f;
}

// Called when the game starts or when spawned
void ARotateAngleAxis::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateAngleAxis::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = FVector(0, 0, 800);
	
	AngelAxxis += DeltaTime * Multiplier;
	
	if (AngelAxxis>=360)
	{
		AngelAxxis = 0;
	}

	FVector RotationValue = Demensions.RotateAngleAxis(AngelAxxis, AxisVector);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan,FString::Printf(TEXT("RotateValue: %s"),*RotationValue.ToString()));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("AngelAxis: %f"), AngelAxxis));
	}

	NewLocation.X += RotationValue.X;
	NewLocation.Y += RotationValue.Y;
	NewLocation.Z += RotationValue.Z;
	
	SetActorLocation(NewLocation, false, 0, ETeleportType::None);
}

