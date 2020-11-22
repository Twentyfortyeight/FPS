// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorFloating.h"

// Sets default values
AActorFloating::AActorFloating()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorFloating::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorFloating::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Обьекта летает верх вниз 
	FVector NewLocation = GetActorLocation();
	float DeltaHight = (FMath::Sin(TimeRuning + DeltaTime) - FMath::Sin(TimeRuning)); // fmath это математическая операция 
	NewLocation.X += DeltaHight * Xvalue;
	NewLocation.Y += DeltaHight * Yvalue;
	NewLocation.Z += DeltaHight * Zvalue;
	TimeRuning += DeltaTime;
	SetActorLocation(NewLocation);


}

