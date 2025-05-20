// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obtaculos.h"
#include "ObtaculoMuro.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN202501_API AObtaculoMuro : public AObtaculos
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AObtaculoMuro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
