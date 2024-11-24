// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeirsOfValiaGameMode.h"
#include "HeirsOfValiaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeirsOfValiaGameMode::AHeirsOfValiaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
