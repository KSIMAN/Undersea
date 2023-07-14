// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnderseaGameMode.h"
#include "UnderseaPawn.h"

AUnderseaGameMode::AUnderseaGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AUnderseaPawn::StaticClass();
}
