#pragma once

UENUM(BlueprintType)
enum class ECharacterState :uint8
{
	ECS_IdleState UMETA(DisplayName = "IdleState"),
	ECS_CombatState UMETA(DisplayName = "CombatState")
};

enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_Attacking UMETA(DisplayName = "Attacking")
};