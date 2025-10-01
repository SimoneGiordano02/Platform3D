// Copyright Epic Games, Inc. All Rights Reserved.

#include "Platform3DGameMode.h"
#include "Platform3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlatform3DGameMode::APlatform3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
