// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueHielo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN202501_API ABloqueHielo : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueHielo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	FVector PosicionInicial;
	float TiempoMovimiento;
};
