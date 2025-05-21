// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberinto.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "Puerta.h"
#include "Obtaculos.h"
#include "ILaberintoBuilder.h"
#include "Laberinto.generated.h"

UCLASS()
class BOMBERMAN202501_API ALaberinto : public AActor, public IILaberinto
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
/*
	TArray<ABloque*> BLoque;
	TArray<APuerta*> Puertas;
	TArray<AObtaculos*> Obstaculos;
*/
	IILaberintoBuilder* Builder;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;	

public:

	virtual void SetBordes();
	virtual void SetInterior();
	virtual void SetPuertas();
	virtual void SetObstaculos();

};
