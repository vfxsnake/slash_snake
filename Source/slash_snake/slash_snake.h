// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


/*
	creating a function macro to use for debuggin porposes, signle line call;
	values inside parentesis will be parameters to call the macro in this case "Location"
*/
#define DRAW_SPEHRE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.0f, 12, FColor::Red, true);
