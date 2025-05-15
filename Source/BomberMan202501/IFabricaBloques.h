// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "UObject/Interface.h"
#include "IFabricaBloques.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIFabricaBloques : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN202501_API IIFabricaBloques
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual ABloque* CrearBloquesCuadrados() = 0; 
	virtual ABloque* CrearBloquesRedondos() = 0; 
};
