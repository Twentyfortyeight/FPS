// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerActor.h"
#include "TimerManager.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "Engine/World.h"

// Sets default values
ATimerActor::ATimerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimerActor::BeginPlay()
{
	Super::BeginPlay();
	/*GetWorldTimerManager().SetTimer(MemberTimer, this, &ATimerActor::ReapeatingFunction, 2.0f, true, 5.0f);ѕовтор€ет собщение 2f это врем€ между сообщени€ми 
	*/
}

// Called every frame
void ATimerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATimerActor::ReapeatingFunction()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, (TEXT("Hallo pitro")));
	}
}

