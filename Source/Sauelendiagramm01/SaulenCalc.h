// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SaulenCalc.generated.h"

UCLASS()
class SAUELENDIAGRAMM01_API ASaulenCalc : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASaulenCalc();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Saulen Calculation")
	void CalculateSaulenHeight(class UStaticMeshComponent* SaulenRef, float Heigh, float &Height_out);

	UFUNCTION(BlueprintCallable, Category = "Set Donor")
		void CalculateSaulenHeight2(class UStaticMeshComponent* SaulenRef, float Heigh, float &Height_out, bool decreaseactiv);

	UFUNCTION(BlueprintCallable, Category = "Saulen Active Set")
	void SetActiveSaeuelenHeight(class UStaticMeshComponent* SaulenRef, int Anz, float Height, float &Height_out);

	UFUNCTION(BlueprintCallable, Category = "Set Active")
	void SetActiveSaeuelenHeight2(class UStaticMeshComponent* SaulenRef, int Anz, float Height, float &Height_out, bool decreaseactiv);

	
};
