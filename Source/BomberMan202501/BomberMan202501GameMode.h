// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IFabricaBloques.h"
#include "DirectorLaberinto.h"
#include "LaberintoConcreto_1.h"
#include "BomberMan202501GameMode.generated.h"

class ALaberinto;
UCLASS(minimalapi)
class ABomberMan202501GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan202501GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	
	UPROPERTY()
	TScriptInterface<IIFabricaBloques> FabricaBloques;
public:

	ALaberinto* Laberinto_1;
	TArray<ALaberinto*>Laberinto;
};



