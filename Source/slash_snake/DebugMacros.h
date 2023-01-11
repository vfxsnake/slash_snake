#pragma once

#include "DrawDebugHelpers.h"   // for drawing shapes for debugging.

/*
	creating a function macro to use for debuggin porposes, signle line call;
	values inside parentesis will be parameters to call the macro in this case "Location"
*/
#define DRAW_SPEHRE(Location, Color) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.0f, 12, Color, true);
#define DEBUG_LINE_LENGTH 100.0f
#define DRAW_LINE(StartLocation, EndLocation, Color) if (GetWorld()) DrawDebugLine(GetWorld(),StartLocation, EndLocation, Color, true, -1.0f, 0, 1.0f);
#define DRAW_POINT(Location, Color) if (GetWorld()) DrawDebugPoint(GetWorld(),Location, 10.0f, Color, true, -1.0f);
#define DRAW_VECTOR(StartLocation, EndLocation) if (GetWorld())\
		{\
			DRAW_LINE(StartLocation, EndLocation, FColor::Purple) \
			DRAW_POINT(StartLocation, FColor::Blue) \
			DRAW_POINT(EndLocation, FColor::Red) \
		};
