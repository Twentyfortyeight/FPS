// Fill out your copyright notice in the Description page of Project Settings.


#include "RadialImpulse.h"
#include "DrawDebugHelpers.h"
#include "CollisionShape.h"
#include "Runtime/Engine/Public/WorldCollision.h"
#include "Engine/World.h"
#include "Math/Quat.h"
#include "Components/PrimitiveComponent.h" 


// Sets default values
ARadialImpulse::ARadialImpulse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARadialImpulse::BeginPlay()
{
	Super::BeginPlay();
	TArray<FHitResult> OutHits;
	FVector MyLocation = GetActorLocation();
	FCollisionShape MyCollsionSphere = FCollisionShape::MakeSphere(500.f);
	DrawDebugSphere(GetWorld(), MyLocation, MyCollsionSphere.GetSphereRadius(), 50, FColor::Emerald, true);
	
	bool ItsHit = GetWorld()->SweepMultiByChannel(OutHits, MyLocation, MyLocation, FQuat::Identity, ECC_WorldStatic, MyCollsionSphere);
	if (ItsHit)
	{
		for (auto&Hit:OutHits)
		{
			UStaticMeshComponent* MeshComp = Cast<UStaticMeshComponent>((Hit.GetActor())->GetRootComponent());
			
			if (MeshComp)
			{
				MeshComp->AddRadialImpulse(MyLocation, 500.f, 2000.f, ERadialImpulseFalloff::RIF_Constant, true);
			}
		}
	}
}

// Called every frame
void ARadialImpulse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

