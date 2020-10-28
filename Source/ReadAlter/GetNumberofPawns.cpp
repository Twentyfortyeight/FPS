// Fill out your copyright notice in the Description page of Project Settings.


#include "GetNumberofPawns.h"
#include "Engine/World.h"
#include "Engine/GameEngine.h"
#include <Runtime\Engine\Classes\Engine\Engine.h>

// Sets default values
AGetNumberofPawns::AGetNumberofPawns()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGetNumberofPawns::BeginPlay()
{
	Super::BeginPlay();
	//¬ыводит количество Pawn на текущем уровне 
	int32 NumPawns = GetWorld()->GetNumPawns(); //дл€ того чтоб получить метод getworld надо подключить дерективу Engine/World.h
	if (GEngine) //дл€ подключени€ GEngine надо прописать дерективу Engine/GameEngine.h
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald, FString::Printf(TEXT("Numbers of Pawns OBject: %d"),NumPawns));
	}
}

// Called every frame
void AGetNumberofPawns::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

