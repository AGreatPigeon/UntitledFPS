// Copyright Epic Games, Inc. All Rights Reserved.

#include "UntitledFPSGameMode.h"
#include "UntitledFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUntitledFPSGameMode::AUntitledFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
