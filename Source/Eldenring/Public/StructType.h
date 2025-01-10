#pragma once
#include "Engine/DataTable.h"  // 데이터 테이블 관련 헤더 포함
#include "EnumType.h"
#include "StructType.generated.h"



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

	// 인벤토리타입
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	EBaseInventoryType BaseInventory;
};

