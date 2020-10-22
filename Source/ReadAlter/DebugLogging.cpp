// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugLogging.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>
#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(text)); //дериктива дебага 

// Sets default values
ADebugLogging::ADebugLogging()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADebugLogging::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("I Just Started Running")); // выводит текст в начале игры в аутлоге
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("SCREEN ME"));// Выводи текст на экран в начале игры 
	}
	
	
	print("HELLO SENUA");
	
	FVector MV(100 , 500 , 700);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My vector equal: %s"), *MV.ToString())); /*Debug, printf 
		обвернут текст  и %s показывает трехмерные кординаты обьекта через указатель на него *MV
		*/
	}
	
}  

// Called every frame
void ADebugLogging::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

