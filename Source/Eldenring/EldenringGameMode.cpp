// Copyright Epic Games, Inc. All Rights Reserved.

#include "EldenringGameMode.h"
#include "EldenringCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEldenringGameMode::AEldenringGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
