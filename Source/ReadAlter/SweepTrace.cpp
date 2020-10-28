// Fill out your copyright notice in the Description page of Project Settings.


#include "SweepTrace.h"
#include "Engine/GameEngine.h"
#include "DrawDebugHelpers.h"
#include "CollisionShape.h"
#include "Engine/World.h"


// Sets default values
ASweepTrace::ASweepTrace()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASweepTrace::BeginPlay()
{
	/*Super::BeginPlay();
	TArray<FHitResult>OutHits;// Шаблон который вызывает класса HitResult 
	FVector ActorLocation = GetActorLocation(); 
	FCollisionShape MyCollsionSphere = FCollisionShape::MakeSphere(500.f); // MakeSphere это радиус сферы 
	DrawDebugSphere(GetWorld(), ActorLocation, MyCollsionSphere.GetSphereRadius(), 100, FColor::Blue, true);//создает дебаг 
	
	bool isHit = GetWorld()->SweepMultiByChannel(OutHits, ActorLocation, ActorLocation, FQuat::Identity, ECC_WorldStatic, MyCollsionSphere);
	if (isHit)
	{
		for(auto& Hit:OutHits)
		{ 
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("hit result: %s"),*Hit.Actor->GetName()));
			}
		}
	}
	*/
}

// Called every frame
void ASweepTrace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

