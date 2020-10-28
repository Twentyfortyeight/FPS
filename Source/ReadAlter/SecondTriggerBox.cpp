// Fill out your copyright notice in the Description page of Project Settings.


#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Turquoise,text)
#define printF(text,fstring) if(GEngine)GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,FString::Printf(TEXT(text),fstring))
#include "SecondTriggerBox.h"
#include "Math/Box.h"
#include "Math/TransformNonVectorized.h" 
#include "DrawDebugHelpers.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>



ASecondTriggerBox::ASecondTriggerBox()
{
	// Евент пересечения тригера
	OnActorBeginOverlap.AddDynamic(this, &ASecondTriggerBox::OnOverlapBegin); 
	OnActorEndOverlap.AddDynamic(this, &ASecondTriggerBox::OnOverlapEnd);
}

void ASecondTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Emerald,true, -1, 0, 5.f);

}
void ASecondTriggerBox::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor &&(OtherActor!= this))
	{
		print("Overlap Begin");
		printF("Overlapped Actor = : %s", *OverlappedActor->GetName());
	}
}
void ASecondTriggerBox::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		print("Overlap End");
		printF("Overlapped Actor = %s", *OverlappedActor->GetName());
	}
}