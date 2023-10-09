#pragma once

UENUM(BlueprintType)
enum class ECharacterState :uint8
{
	ECS_IdleState UMETA(DisplayName = "IdleState"),
	ECS_CombatState UMETA(DisplayName = "CombatState")
};
