// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StructType.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ELDENRING_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	FItemData DefaultItem = FItemData();



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<FSlotData> Contents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	UDataTable* ItemDataTable;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	FItemData GetItemData(FName ItemID);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool FindSlot(const FName& ItemID, int32& SlotIndex);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void AddToStack(int32 Index, int32 Quantity);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool AnyEmptySlotsAvailable(int32& EmptyIndex);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool CreateNewStack(const FName& ItemID, int32 Quantity);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 GetMaxStackSize(const FName& ItemID);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 AddToInventory(const FName& ItemID, int32 Quantity);
};
