// Fill out your copyright notice in the Description page of Project Settings.


#include "Obtaculos.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
// Sets default values
AObtaculos::AObtaculos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Para la creacion de la malla 
	MeshObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshObstaculo"));
	MeshObstaculo->SetupAttachment(RootComponent);
	RootComponent = MeshObstaculo;

}

// Called when the game starts or when spawned
void AObtaculos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObtaculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

