// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan202501GameMode.h"
#include "BomberMan202501Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueConcreto.h"
#include "BloqueArena.h"
#include "BloqueElectrico.h"
#include "BloqueHielo.h"
#include "BloqueHongo.h"
#include "BloqueLava.h"
#include "BloquePegajoso.h"
#include "FabricaBloquesNormales.h"
#include "Engine/World.h"

ABomberMan202501GameMode::ABomberMan202501GameMode()
{

    //PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan202501GameMode::BeginPlay()
{
	Super::BeginPlay();

    AFabricaBloquesNormales* FabricaNormales = GetWorld()->SpawnActor<AFabricaBloquesNormales>();
    if (FabricaNormales)
    {
        FabricaBloques = TScriptInterface<IIFabricaBloques>(FabricaNormales);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to spawn FabricaBloquesNormales"));
    }
    GenerarLaberinto();
    GenerarMapaDesdeCodigo();
  
}

void ABomberMan202501GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABomberMan202501GameMode::GenerarMapaDesdeCodigo()
{

    int Columnas = 49;
    int Filas = 49;

    int TColumnas = Columnas + 1;
    int TFilas = Filas + 1;
    int Y;
    int X;

    //inicializamos la matriz
    MapaLaberinto.SetNum(TFilas);
    for (Y = 0; Y < TFilas; Y++)
    {
        MapaLaberinto[Y].SetNum(TColumnas);
        for (X = 0; X < TColumnas; X++)
        {
            // Bordes de acero
            if (X == 0 || Y == 0 || X == TColumnas - 1 || Y == TFilas - 1)
            {
                MapaLaberinto[Y][X] = 4; // Acero
            }
            else
            {
                MapaLaberinto[Y][X] = -1; // Se define al poner 
            }
        }
    }
    //FIntPoint para almacenar los dos puntos x, y
    //int32, int32
    TSet<FIntPoint> Visitadas;//evita repetidos y bucles infinitos 
    TArray<FIntPoint> Pila;//explora 
    auto Direcciones = { FIntPoint(0, -2), FIntPoint(0, 2), FIntPoint(-2, 0), FIntPoint(2, 0) };

    //verifica si esta dentro del 49
    auto Valido = [&](int X, int Y) -> bool
        {
            return X > 0 && Y > 0 && X < Columnas && Y < Filas;
        };

    FIntPoint Inicio(1, 1);
    Pila.Push(Inicio);
    MapaLaberinto[Inicio.Y][Inicio.X] = 0;
    Visitadas.Add(Inicio);

    // Mientras haya elementos en la pila
    while (Pila.Num() > 0)
    {
        FIntPoint Actual = Pila.Top();
        TArray<FIntPoint> Vecinos;

        for (FIntPoint Dir : Direcciones)
        {
            FIntPoint Nuevo = Actual + Dir;
            if (Valido(Nuevo.X, Nuevo.Y) && !Visitadas.Contains(Nuevo))
            {
                Vecinos.Add(Nuevo);
            }
        }

        if (Vecinos.Num() > 0)
        {
            FIntPoint Elegido = Vecinos[FMath::RandRange(0, Vecinos.Num() - 1)];

            // Abrir camino
            int MidX = (Actual.X + Elegido.X) / 2;
            int MidY = (Actual.Y + Elegido.Y) / 2;

            MapaLaberinto[Elegido.Y][Elegido.X] = 0;
            MapaLaberinto[MidY][MidX] = 0;

            Pila.Push(Elegido);
            Visitadas.Add(Elegido);
        }
        else
        {
            Pila.Pop(); // Regresar al anterior
        }
    }

    // Muros internos: 40% izquierda madera, resto ladrillo
    int BloqueColumnas = TColumnas * 0.4f;
    int BloqueFilas = TFilas * 0.3f;

    // Bloques internos
    for (Y = 1; Y < TFilas - 1; Y++)
    {
        for (X = 1; X < TColumnas - 1; X++)
        {
            if (MapaLaberinto[Y][X] == -1)
            {
                if (X < BloqueColumnas && Y < BloqueFilas)
                {
                    MapaLaberinto[Y][X] = 1; // Solo madera
                }
                else
                {
                    MapaLaberinto[Y][X] = 4; // Solo ladrillo
                }
            }
        }
    }

    // Entrada y salida
    MapaLaberinto[1][0] = 0;
    MapaLaberinto[TFilas - 2][TColumnas - 1] = 0;



}

void ABomberMan202501GameMode::GenerarLaberinto()
{
    float Espaciado = 900.0f;

    //las filas y columnas se estan creando directamente se derivan automaticamente 
    // El tamaño lo decide el contenido del array.
    //puedo hacer un laberinto más grande o más pequeño solo cambiando el array, sin tocar nada más del código

    // Recorre cada fila del mapa del laberinto (eje Y)
    for (int Y = 0; Y < MapaLaberinto.Num(); ++Y)
    {
        // Recorre cada columna dentro de la fila actual (eje X)
        for (int X = 0; X < MapaLaberinto[Y].Num(); ++X)
        {
            // Obtiene el tipo de bloque que hay en la posición (Y, X)
            int Tipo = MapaLaberinto[Y][X];

            // Si el tipo es 0, se considera espacio vacío y no se genera nada
            if (Tipo == 0) {

                FVector PosicionLibre = FVector(X * Espaciado, Y * Espaciado, 0.0f); // ajusta altura si deseas
                PuntosPatrullaLibres.Add(PosicionLibre);
                continue;



            }

            //creacion directamente desde que se genera x y y, en la pocion 0 0 0 por defecto
            FVector Posicion = FVector(X * Espaciado, Y * Espaciado, 0.0f);
            FRotator Rotacion = FRotator::ZeroRotator;
            ABloque* BloqueSpawned = nullptr;

            if (FabricaBloques)
            {
                if (Tipo % 2 == 0)
                {
                    BloqueSpawned = FabricaBloques->CrearBloquesCuadrados();
                }
                else
                {
                    BloqueSpawned = FabricaBloques->CrearBloquesRedondos();
                }

                if (BloqueSpawned)
                {
                    BloqueSpawned->SetActorLocationAndRotation(Posicion, Rotacion);
                    BloquesA.Add(BloqueSpawned);
                }
            }
        }
    }

}

