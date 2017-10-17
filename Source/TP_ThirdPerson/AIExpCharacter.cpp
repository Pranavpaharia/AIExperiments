// Fill out your copyright notice in the Description page of Project Settings.

#include "TP_ThirdPerson.h"
#include "AIExpCharacter.h"


// Sets default values
AAIExpCharacter::AAIExpCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAIExpCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIExpCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIExpCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

