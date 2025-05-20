// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "LaberintoConcreto_1.generated.h"

UCLASS()
class BOMBERMAN202501_API ALaberintoConcreto_1 : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoConcreto_1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY()
	ALaberinto* Laberinto;

public:

	virtual void BuildBordes() override;
	virtual void BuildInterior() override;
	virtual void BuildPuertas() override;
	virtual void BuildObstaculos() override;
	virtual class ALaberinto* ObtenerLaberinto() override;

};
