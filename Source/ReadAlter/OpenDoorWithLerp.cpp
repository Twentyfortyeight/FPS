// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoorWithLerp.h"
#include "Components/BoxComponent.h"
// Sets default values
AOpenDoorWithLerp::AOpenDoorWithLerp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpenDoorWithLerp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOpenDoorWithLerp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

