// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateAngleAxisSpecifyVector.h"
#include "Engine/World.h"
#include "EngineGlobals.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>



// Sets default values
ARotateAngleAxisSpecifyVector::ARotateAngleAxisSpecifyVector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AngleAxis = 0;
}

// Called when the game starts or when spawned
void ARotateAngleAxisSpecifyVector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateAngleAxisSpecifyVector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
    // declare arbitrary vector point in the world to circle around
	FVector NewLocation = FVector(0,0,800);
	// declare size of radius to move around
	FVector Radius = FVector(200, 0, 0);
	
	// angle increases by 1 every frame
	AngleAxis++;
	
	// prevent number from growind indefinitely
	if(AngleAxis>360.0f)
	{
		AngleAxis = 1;
	}

	FVector RotateValue = Radius.RotateAngleAxis(AngleAxis, FVector(0, 0, 1));
	NewLocation.X += RotateValue.X;
	NewLocation.Y += RotateValue.Y;
	NewLocation.Z += RotateValue.Z;

	SetActorLocation(NewLocation);
}

