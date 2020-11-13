//Вращение актора во круг персонажа на 360 


#include "RotateActorAroundPlayer.h"
#include "EngineGlobals.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "Engine/World.h"
#include "GameFramework/Actor.h"



// Sets default values
ARotateActorAroundPlayer::ARotateActorAroundPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Demension = FVector(300, 0, 0);
	AxisVector = FVector(0, 0, 1);
	Multiplier = 50.f;
}

// Called when the game starts or when spawned
void ARotateActorAroundPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateActorAroundPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	/*
	FVector NewLocation=GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	AngelAxis += DeltaTime * Multiplier;

	if (AngelAxis>360.0f)
	{
		AngelAxis = 0;
	}

	FVector RotateValue = Demension.RotateAngleAxis(AngelAxis, AxisVector);
	NewLocation.X += RotateValue.X;
	NewLocation.Y += RotateValue.Y;
	NewLocation.Z += RotateValue.Z;
	FRotator NewRotation = FRotator(0, AngelAxis, 0);

	FQuat QuatRotation = FQuat(NewRotation);
	SetActorLocationAndRotation(NewLocation, QuatRotation, false,0,ETeleportType::None);
	*/

}

