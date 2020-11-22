// Fill out your copyright notice in the Description page of Project Settings.


#include "DestroyActorOnOverlap.h"
#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"
#include"Components/StaticMeshComponent.h"

// Sets default values
ADestroyActorOnOverlap::ADestroyActorOnOverlap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MySphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("My Sphere Component"));
	MySphereComponent->InitSphereRadius(spradius);
	MySphereComponent->SetCollisionProfileName(TEXT("Trigger"));
	RootComponent = MySphereComponent;

	MySphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ADestroyActorOnOverlap::OnOverlapBegin);
}






// Called when the game starts or when spawned
void ADestroyActorOnOverlap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADestroyActorOnOverlap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugSphere(GetWorld(), GetActorLocation(), spradius, 20, FColor::Emerald, false, -1, 0, 1);
}

void ADestroyActorOnOverlap::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor!=nullptr)&& (OtherActor!=this)&& (OtherComp!=nullptr))
	{
		Destroy();
	}
}



