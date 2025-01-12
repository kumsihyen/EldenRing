#pragma once

UENUM()
enum class EBaseInventoryType : uint8
{
	Weapon UMETA(DisplayName = "Weapon"),
	Armor UMETA(DisplayName = "Armor"),
	Shield UMETA(DisplayName = "Shield"),
};