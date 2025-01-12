// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	ItemDataTable = LoadObject<UDataTable>(nullptr, TEXT("/Game/Characters/NewDataTable.NewDataTable"));

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FItemData UInventoryComponent::GetItemData(FName ItemID)
{
	if (!ItemDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("DataTable is null!"));
		return DefaultItem;
	}

	FItemData* Row = ItemDataTable->FindRow<FItemData>(ItemID, TEXT("Lookup Item"));
	if (!Row)
	{
		UE_LOG(LogTemp, Warning, TEXT("Row not found for ItemID: %s"), *ItemID.ToString());
	}

	return *Row;
}

bool UInventoryComponent::FindSlot(const FName& ItemID, int32& SlotIndex)
{
	// 초기화
	SlotIndex = -1;

	for (int32 Index = 0; Index < Contents.Num(); ++Index)
	{
		const FSlotData& Slot = Contents[Index];

		// 아이템 ID가 일치하는지 확인
		if (Slot.ItemID == ItemID)
		{
			// 최대 스택 크기 조건 확인

			if (Slot.Quantity < GetMaxStackSize(ItemID))
			{
				SlotIndex = Index;
				return true; // 조건을 만족하는 슬롯의 인덱스 반환
			}
		}
	}

	// 조건을 만족하는 슬롯이 없을 경우
	//bFoundSlot = false;
	return false;

}

void UInventoryComponent::AddToStack(int32 Index, int32 Quantity)
{
	// 배열 인덱스 유효성 검사
	if (!Contents.IsValidIndex(Index))
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Index: %d"), Index);
		return;
	}

	// 기존 슬롯 데이터 가져오기
	FSlotData& Slot = Contents[Index];

	// 수량 업데이트
	Slot.Quantity += Quantity;

	// 업데이트된 데이터를 다시 설정 (자동적으로 참조를 업데이트함)
	Contents[Index] = Slot;

	// 디버깅용 출력
	UE_LOG(LogTemp, Log, TEXT("Updated Slot at Index %d: ItemID = %s, Quantity = %d"),
		Index, *Slot.ItemID.ToString(), Slot.Quantity);
}

bool UInventoryComponent::AnyEmptySlotsAvailable(int32& EmptyIndex)
{
	// 빈 슬롯을 초기값으로 설정
	EmptyIndex = -1;

	// 배열 순회
	for (int32 Index = 0; Index < Contents.Num(); ++Index)
	{
		const FSlotData& Slot = Contents[Index];

		// 슬롯이 빈 상태인지 확인
		if (Slot.Quantity == 0)
		{
			EmptyIndex = Index; // 빈 슬롯의 인덱스를 설정
			return true;        // 빈 슬롯 발견
		}
	}

	// 빈 슬롯이 없는 경우
	UE_LOG(LogTemp, Warning, TEXT("빈 슬롯이 없는 경우 bool UInventoryComponent::AnyEmptySlotsAvailable(int32& EmptyIndex)"));
	return false;
}

bool UInventoryComponent::CreateNewStack(const FName& ItemID, int32 Quantity)
{

	int32 EmptyIndex = -1;

	// 빈 슬롯 확인
	if (AnyEmptySlotsAvailable(EmptyIndex))
	{
		// 빈 슬롯이 있을 경우, 새로운 스택 생성
		FSlotData NewSlot;
		NewSlot.ItemID = ItemID;
		NewSlot.Quantity = Quantity;
		NewSlot.ObjectID = 0; // 필요한 경우 적절한 값으로 설정

		// 배열의 빈 슬롯에 새 스택 설정
		Contents[EmptyIndex] = NewSlot;

		return true; // 성공적으로 추가됨
	}
	// 빈 슬롯이 없을 경우
	return false;

}



int32 UInventoryComponent::GetMaxStackSize(const FName& ItemID)
{
	// 데이터 테이블이 유효한지 확인
	if (!ItemDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("Data Table is null!"));
		return -1; // 데이터 테이블이 없을 경우 -1 반환
	}

	// 데이터 테이블에서 행 가져오기
	FItemData* Row = ItemDataTable->FindRow<FItemData>(ItemID, TEXT("Lookup Item"));
	if (!Row)
	{
		UE_LOG(LogTemp, Warning, TEXT("Row not found for ItemID: %s"), *ItemID.ToString());
		return -1; // 해당 아이템 ID의 행이 없을 경우 -1 반환
	}

	// 최대 스택 크기 반환
	return Row->MaximumQuantity;
}

int32 UInventoryComponent::AddToInventory(const FName& ItemID, int32 Quantity)
{
	int32 Lcl_QuantityRemaining = Quantity;
	int32 EmptyIndex = 0;
	int32 SlotIndex = 0;
	bool Lcl_HasFailed = false;
	bool findSlot = false;

	while (Lcl_QuantityRemaining > 0 && !Lcl_HasFailed)
	{

		if (FindSlot(ItemID, SlotIndex))
		{
			// 슬롯이 존재하면 스택에 수량 추가
			AddToStack(SlotIndex, Quantity);
		}
		else
		{
			//슬롯에 추가한 아이템이 없다면 새로운 스택을 추가
			if (AnyEmptySlotsAvailable(EmptyIndex))
			{
				if (CreateNewStack(ItemID, 1))
				{

					Lcl_QuantityRemaining -= 1;
				}
				else
				{

					Lcl_HasFailed = true;
				}
			}
			else
			{
				Lcl_HasFailed = true;
			}
		}
	}

	return Lcl_QuantityRemaining;
}