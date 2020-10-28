// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitchOverlapTrigger.h"
#include "Components/LightComponent.h"
#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
ALightSwitchOverlapTrigger::ALightSwitchOverlapTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALightSwitchOverlapTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightSwitchOverlapTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

