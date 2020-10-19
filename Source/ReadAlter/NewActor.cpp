// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActor.h"

// Sets default values
ANewActor::ANewActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	supermesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("Super Mesh")); ////присваение обькту тип статического  обькта
}

// Called when the game starts or when spawned
void ANewActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANewActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

