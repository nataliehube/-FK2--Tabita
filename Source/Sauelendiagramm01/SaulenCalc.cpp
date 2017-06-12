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
	FVector MeshScale = FVector(1, 1, Height+0.1);
	SaulenRef->SetRelativeScale3D(MeshScale);
	Height_out = Height + 0.1;

}

void ASaulenCalc::CalculateSaulenHeight2(class UStaticMeshComponent* SaulenRef, float Height, float &Height_out, bool decreaseactiv)
{
	if (!decreaseactiv) {
		Height_out = (Height + 0.1);
		FVector MeshScale = FVector(1, 1, Height_out);
		SaulenRef->SetRelativeScale3D(MeshScale);
	}
	else {
		Height_out = (Height - 0.1);
		if (Height_out < 0) {
			Height_out = 0;
		}
		FVector MeshScale = FVector(1, 1, Height_out);
		SaulenRef->SetRelativeScale3D(MeshScale);		
	}

}


void ASaulenCalc::SetActiveSaeuelenHeight(class UStaticMeshComponent* SaulenRef, int Anz, float Height, float &Height_out)
{
	FVector MeshScale = FVector(1, 1, (Height-(0.1/Anz)));
	SaulenRef->SetRelativeScale3D(MeshScale);
	Height_out = (Height - (0.1 / Anz));

}

void ASaulenCalc::SetActiveSaeuelenHeight2(class UStaticMeshComponent* SaulenRef, int Anz, float Height, float &Height_out, bool decreaseactiv)
{
	if (!decreaseactiv) {
		Height_out = (Height - (0.1 / Anz));
		if (Height_out < 0) {
			Height_out = 0;
		}
		FVector MeshScale = FVector(1, 1, Height_out);
		SaulenRef->SetRelativeScale3D(MeshScale);
		
	}
	else {
		Height_out = (Height + (0.1 / Anz));
		FVector MeshScale = FVector(1, 1, Height_out);
		SaulenRef->SetRelativeScale3D(MeshScale);
		
	}

}
