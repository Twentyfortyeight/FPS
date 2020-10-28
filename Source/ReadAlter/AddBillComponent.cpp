// Fill out your copyright notice in the Description page of Project Settings.


#include "AddBillComponent.h"
#include "Components/BillboardComponent.h"

// Sets default values
AAddBillComponent::AAddBillComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Добавление обьекта в игру 
	Meshbillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("My billboard"));
	Meshbillboard->SetHiddenInGame(false, true);
	RootComponent = Meshbillboard;

}

// Called when the game starts or when spawned
void AAddBillComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAddBillComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

