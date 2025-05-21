// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "ILaberinto.h"
#include "DirectorLaberinto.generated.h"

UCLASS()
class BOMBERMAN202501_API ADirectorLaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorLaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

	IILaberintoBuilder* LaberintoBuilder;
	class Laberinto* Laberinto;
public:

	void SeleccionarLaberinto(IILaberintoBuilder* NewBuilder);
	//void SeleccionarLaberinto(IILaberinto* Builder);
	void ConstruirLaberinto();
	//void Modificar();
	class ALaberinto* ObtenerLaberinto() const;
	//void GetLaberinto();
	//set buil interior mensajes
};
