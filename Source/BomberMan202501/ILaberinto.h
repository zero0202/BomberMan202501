// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ILaberinto.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UILaberinto : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN202501_API IILaberinto
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void SetBordes(int columnas, int filas) = 0;
	virtual void SetInterior(int m) = 0;
	virtual void SetPuertas(int p) = 0;
	virtual void SetObstaculos(int o) = 0;

};
