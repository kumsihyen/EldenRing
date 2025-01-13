#pragma once
#include "Engine/DataTable.h"  // 데이터 테이블 관련 헤더 포함
#include "EnumType.h"
#include "StructType.generated.h"


class UInputMappingContext;

USTRUCT(BlueprintType)
struct FItemData: public FTableRowBase  // FTableRowBase를 상속
{
	GENERATED_BODY()

	// 아이템 이름
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FText Name;  // 변수 이름만 변경

	// 아이템 설명
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FText Description;  // 변수 이름만 변경


	// 텍스처 2D (UTexture2D*로 사용)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	UTexture2D* Thumbnail;

	// 액터 클래스 (TSubclassOf로 사용)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TSubclassOf<AActor> ItemActorClass;

	// 최대 아이템 수량
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int32 MaximumQuantity;

	// 인벤토리 타입
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	EBaseInventoryType BaseInventory;


	FItemData()
		: Name(FText::FromString(TEXT("Default Name"))),
		Description(FText::FromString(TEXT("Default Description"))),
		Thumbnail(nullptr),
		ItemActorClass(nullptr),
		MaximumQuantity(1),
		BaseInventory(EBaseInventoryType::Weapon) 
	{
	}
};

USTRUCT(BlueprintType)
struct FSlotData
{
	GENERATED_BODY()

	//아이템 ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SlotData")
	FName ItemID;

	//인벤토리에 있는 현재 수량
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SlotData")
	int32 Quantity;

	//오브젝트 ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SlotData")
	int32 ObjectID;
};


USTRUCT(BlueprintType)
struct FAttackPower
{
	GENERATED_BODY()

	//물리
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackPower")
	float Phy;

	//마법
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackPower")
	float Mag;

	//화염
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackPower")
	float Fire;

	//벼락
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackPower")
	float Light;

	//신성
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackPower")
	float Holy;

	//크리티컬 피해는 무기의 일반 기본 데미지를 곱하여 크리티컬 공격이 일반 공격보다 몇 배 더 많은 피해를 입힙니다.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackPower")
	float CriticalDamage;
	//Highland Axe는 110% 또는 1.1x 승수를 의미하는 "110"의 크리티컬 스탯을 나열합니다.
	//치명타 공격을 수행할 수 있는 몇 가지 상황
	//1. 패링 후 비틀거릴때
	//2. 자고 있는 적을 공격 시
	//3. 말에서 내릴때
};

USTRUCT(BlueprintType)
struct FGuardReduction
{
	GENERATED_BODY()

	//물리 경감률
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GuardReduction")
	float PhyReduction;

	//마법 경감률
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GuardReduction")
	float MagReduction;

	//화염 경감률
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GuardReduction")
	float FireReduction;

	//벼락 경감률
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GuardReduction")
	float LightReduction;

	//신성 경감률
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GuardReduction")
	float HolyReduction;

	//가드 강도
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GuardReduction")
	float GuardToughness;
};


USTRUCT(BlueprintType)
struct FWeaponData
{
	GENERATED_BODY()

	//총합공격력
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponData")
	float TotalDamage;

	//중량
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponData")
	float Weight;

	//소비 FP
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponData")
	float CostFP;
	
	//공격력
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponData")
	FAttackPower AttackPower;
	
	//가드 시 감소율
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponData")
	FGuardReduction GuardReduction;

	//애님레이어
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponData")
	TSubclassOf<UAnimInstance> AnimInstanceClass;

	// 입력 매핑 컨텍스트 오브젝트
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponData")
	UInputMappingContext* InputMappingContext;

	// 입력 매핑 컨텍스트 오브젝트
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponData")
    FGuid Guid;
	

	//태크랑 웨폰 어빌리티 추가해야함
};


