// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"

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
	}
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

