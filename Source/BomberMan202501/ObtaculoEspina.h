// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obtaculos.h"
#include "ObtaculoEspina.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN202501_API AObtaculoEspina : public AObtaculos
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AObtaculoEspina();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
