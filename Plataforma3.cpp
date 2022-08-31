// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma3.h"

// Sets default values
APlataforma3::APlataforma3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = 10.0f;
	Frequency = 0.0f;
	Amplitude = 20.0f;
}

// Called when the game starts or when spawned
void APlataforma3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlataforma3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector newLocation = GetActorLocation();
	float DeltaHigh = FMath::Sin(Speed * (Frequency + DeltaTime)) - FMath::Sin(Speed * Frequency);
	newLocation.Z += DeltaHigh * Amplitude;
	SetActorLocation(newLocation);
	Frequency += DeltaTime;
}

