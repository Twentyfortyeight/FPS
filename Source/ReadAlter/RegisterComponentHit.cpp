// Fill out your copyright notice in the Description page of Project Settings.


#include "RegisterComponentHit.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Engine/GameEngine.h"
#include <Runtime\Engine\Classes\Engine\Engine.h>

// Sets default values
ARegisterComponentHit::ARegisterComponentHit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	/* –егистрирует попадение по Actor нужно включить симул€цию физики Psuhics and Query
	
	MyComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	MyComp->SetSimulatePhysics(true);
	MyComp->SetNotifyRigidBodyCollision(true);
	MyComp->BodyInstance.SetCollisionProfileName("Block all");
	MyComp->OnComponentHit.AddDynamic(this, &ARegisterComponentHit::OnCompHit);
	RootComponent = MyComp;
	*/
}

// Called when the game starts or when spawned
void ARegisterComponentHit::BeginPlay()
{
	Super::BeginPlay();
	
}
// Called every frame
void ARegisterComponentHit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/*
void ARegisterComponentHit::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor!= NULL)&& (OtherActor!= this)&& (OtherComp!=NULL))
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, FString::Printf(TEXT("Hitobject: %s"),*OtherActor->GetName()));
		}
	}
}
*/

