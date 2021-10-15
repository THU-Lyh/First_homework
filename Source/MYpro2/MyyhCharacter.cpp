// Fill out your copyright notice in the Description page of Project Settings.


#include "MyyhCharacter.h"

// Sets default values
AMyyhCharacter::AMyyhCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyyhCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyyhCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyyhCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

