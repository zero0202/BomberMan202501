// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorLaberinto.h"
#include "LaberintoConcreto_1.h"

// Sets default values
ADirectorLaberinto::ADirectorLaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LaberintoBuilder = nullptr;
}

// Called when the game starts or when spawned
void ADirectorLaberinto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorLaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ADirectorLaberinto::SeleccionarLaberinto(IILaberintoBuilder* Builder)
{
	LaberintoBuilder = Builder;;
}

void ADirectorLaberinto::ConstruirLaberinto()
{
	LaberintoBuilder->BuildBordes();
	LaberintoBuilder->BuildInterior();
	LaberintoBuilder->BuildPuertas();
	LaberintoBuilder->BuildObstaculos();


}

ALaberinto* ADirectorLaberinto::ObtenerLaberinto() const
{
	if (LaberintoBuilder)
	{
		return LaberintoBuilder->ObtenerLaberinto();
	}
	else
	{
		return nullptr;
	}
}

