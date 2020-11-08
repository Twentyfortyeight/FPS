// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorLineTrace.h"
#include "DrawDebugHelpers.h"
#include"Components/StaticMeshComponent.h" 
#include "Math/Box.h"
#include "Math/TransformNonVectorized.h" 
#include "DrawDebugHelpers.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>


// Sets default values
AActorLineTrace::AActorLineTrace()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshOne = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh One"));
	RootComponent = MeshOne;
	

	MeshTwo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Two"));
	MeshTwo->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AActorLineTrace::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorLineTrace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FHitResult OutHit;
	FVector Start = GetActorLocation();
	Start.Z += 50.f;
	Start.X += 200.f;

	FVector ForwardVector = GetActorForwardVector();
	FVector End = ((ForwardVector * 500.f) + Start);
	FCollisionQueryParams CollsionParms;
	DrawDebugLine(GetWorld(), Start, End, FColor::Emerald, false, 1, 0, 5);
	bool IsHit = ActorLineTraceSingle(OutHit, Start, End, ECC_WorldStatic, CollsionParms);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Emerald, FString::Printf(TEXT("The comp being hit is:%s"), *OutHit.GetComponent()->GetName()));
	}
}

