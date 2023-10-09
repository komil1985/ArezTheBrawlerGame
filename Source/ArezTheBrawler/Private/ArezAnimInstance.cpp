// Fill out your copyright notice in the Description page of Project Settings.


#include "ArezAnimInstance.h"
#include "MyPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UArezAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	MyPlayerCharacter = Cast<AMyPlayer>(TryGetPawnOwner());
	if (MyPlayerCharacter)
	{
		MyPlayerCharacterMovement = MyPlayerCharacter->GetCharacterMovement();
	}

}

void UArezAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (MyPlayerCharacterMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(MyPlayerCharacterMovement->Velocity);
		CharacterState = MyPlayerCharacter->GetCharacterState();
	}
}
