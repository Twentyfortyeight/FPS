#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Turquoise,text)
#define printF(text,fstring) if(GEngine)GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,FString::Printf(TEXT(text),fstring))
#include "TriggerBoxSpecificActor.h"
#include "Math/Box.h"
#include "Math/TransformNonVectorized.h" 
#include "DrawDebugHelpers.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>



ATriggerBoxSpecificActor::ATriggerBoxSpecificActor()
{
	//Register Events
	OnActorBeginOverlap.AddDynamic(this, &ATriggerBoxSpecificActor::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ATriggerBoxSpecificActor::OnOverlapEnd);
}



void ATriggerBoxSpecificActor::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Emerald, true, -1, 0, 5.f);
}






void ATriggerBoxSpecificActor::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	//if the overlapping actor is the specific actor we identified in the editor
	if (OtherActor&& (OtherActor!=this) && OtherActor==SpecificActor)
	{
		print("Overlap Begin");
		printF("Overlapped Actor = : %s", *OverlappedActor->GetName());
	}
}

void ATriggerBoxSpecificActor::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this) && OtherActor == SpecificActor)
	{
		print("Overlap End");
		printF("Ended overlap Actor = : %s", *OtherActor->GetName());
	}
}
