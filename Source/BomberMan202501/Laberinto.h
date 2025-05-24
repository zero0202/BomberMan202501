// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberinto.h"
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

	void SetBuilder(class IILaberintoBuilder* InBuilder);

	IILaberintoBuilder* Builder;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//void InicializarMapas(const TArray<TArray<int32>>& MapaBloques, const TArray<TArray<int32>>& MapaPuertas, const TArray<TArray<int32>>& MapaObstaculos);
public:

	virtual void SetBordes() override;
	virtual void SetInterior() override;
	virtual void SetPuertas() override;
	virtual void SetObstaculos() override;

};
