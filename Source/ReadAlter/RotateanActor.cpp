// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateanActor.h"

// Sets default values
ARotateanActor::ARotateanActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PitchValue = 0.f;
	RollhValue = 0.f;
	YawhValue = 0.f;

}

// Called when the game starts or when spawned
void ARotateanActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateanActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FRotator QuatNewRoration = FRotator(PitchValue, YawhValue, RollhValue);
	
	
	
	AddActorLocalRotation(QuatNewRoration, false, 0, ETeleportType::None);

}

