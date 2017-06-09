// Fill out your copyright notice in the Description page of Project Settings.

#include "Sauelendiagramm01.h"
#include "SaulenCalc.h"
#include "EngineUtils.h"

#include <iostream>
#include <stdlib.h>
using namespace std;


// Sets default values
ASaulenCalc::ASaulenCalc()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASaulenCalc::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASaulenCalc::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASaulenCalc::CalculateSaulenHeight(class UStaticMeshComponent* SaulenRef, float Height, float &Height_out)
{
	FVector MeshScale = FVector(0.5, 0.5, Height+0.1);
	
	SaulenRef->SetRelativeScale3D(MeshScale);

	Height_out = Height + 0.1;

}

void ASaulenCalc::CalculateSaulenHeight2(class UStaticMeshComponent* SaulenRef, float Height, float &Height_out, bool decrease)
{
	FVector MeshScale = FVector(0.5, 0.5, Height + 0.1);

	SaulenRef->SetRelativeScale3D(MeshScale);

	Height_out = (Height + 0.1);

}

void ASaulenCalc::SetActiveSaeuelen(TArray<UStaticMeshComponent*> SaulenArray, float Height, float &Height_out)
{
	/*int anzahl = 0;

	//for (int i = TArray.; a < 20; a = a + 1) {
	for (int i = 0; i != SaulenArray.Num(); ++i) //(auto& Str : SaulenArray)
	{
		++anzahl;
	}

	Height_out = anzahl;*/
}

void ASaulenCalc::SetActiveSaeuelenHeight(class UStaticMeshComponent* SaulenRef, int Anz, float Height, float &Height_out)
{
	FVector MeshScale = FVector(0.5, 0.5, (Height-(0.1/Anz)));

	SaulenRef->SetRelativeScale3D(MeshScale);

	Height_out = (Height - (0.1 / Anz));

}

void ASaulenCalc::SetActiveSaeuelenHeight2(class UStaticMeshComponent* SaulenRef, int Anz, float Height, float &Height_out, bool decrease)
{
	FVector MeshScale = FVector(0.5, 0.5, (Height - (0.1 / Anz)));

	SaulenRef->SetRelativeScale3D(MeshScale);

	Height_out = (Height - (0.1 / Anz));

}
