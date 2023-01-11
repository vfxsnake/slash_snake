// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "slash_snake/DebugMacros.h" // include slash snake for additional macors and extra global functions.

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Begin Play called!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"));
	
	// outputin messages to engine screan
	if (GEngine)  // chekc if the pointer is valid GEngine returns a pointer to the instance of the engine. 
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("c++ item log on screan message!!<<<<<<<<<<<<<<<<<<<<<<<<"));
		DRAW_SPEHRE(GetActorLocation(), FColor::Red);  // no need of the semicolon as the macro is defined with one
		DRAW_VECTOR(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * DEBUG_LINE_LENGTH); // no need of semicolon as it is a macro
	}
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// formating strings * operator is overloaded in FStrings to return a constant char array (c string)
		
}

