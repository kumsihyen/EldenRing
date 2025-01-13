// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Combat/EnemyCombatComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "BaseGamePlayTags.h"
#include "BaseFunctionLibrary.h"
#include "BaseDebugHelper.h"
#include "Characters/EnemyCharacter.h"
#include "Components/BoxComponent.h"


void UEnemyCombatComponent::OnHitTargetActor(AActor* HitActor)
{
    if (OverlappedActors.Contains(HitActor))
    {
        return;
    }

    OverlappedActors.AddUnique(HitActor);

    bool bIsValidBlock = false;

    const bool bIsPlayerBlocking = UBaseFunctionLibrary::NativeActorHasTag(HitActor, BaseGamePlayTags::Player_Status_Blocking);
    const bool bIsAttackUnblockable = UBaseFunctionLibrary::NativeActorHasTag(GetOwningPawn(), BaseGamePlayTags::Enemy_Status_UnBlockableAttack);

    if (bIsPlayerBlocking && !bIsAttackUnblockable)
    {
        bIsValidBlock = UBaseFunctionLibrary::IsValidBlock(GetOwningPawn(), HitActor);
    }

    FGameplayEventData EventData;
    EventData.Instigator = GetOwningPawn();
    EventData.Target = HitActor;

    if (bIsValidBlock)
    {
        //피격자에게 게임플레이이벤트 전송 GA_Hero_Block
        UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(HitActor, BaseGamePlayTags::Player_Event_SuccessBlock, EventData);
        
    }
    else
    {
        UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwningPawn(), BaseGamePlayTags::Shared_Event_MeleeHit, EventData);
    }
}

void UEnemyCombatComponent::ToggleBodyCollision(bool bUse, EToggleDamageType ToggleDamageType)
{
    AEnemyCharacter* OwningEnemyCharacter =  GetOwningPawn<AEnemyCharacter>();

    check(OwningEnemyCharacter);

    UBoxComponent* LeftHandCollsionBox = OwningEnemyCharacter->GetLeftHandCollisionBox();
    UBoxComponent* RightHandCollsionBox = OwningEnemyCharacter->GetRightHandCollisionBox();
    
    check(LeftHandCollsionBox && RightHandCollsionBox);

    switch (ToggleDamageType)
    {
    case EToggleDamageType::LeftHand:
        LeftHandCollsionBox->SetCollisionEnabled(bUse? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
        break;
    case EToggleDamageType::RightHand:
        RightHandCollsionBox->SetCollisionEnabled(bUse? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
        break;
    default:
        break;
    }

    if (!bUse)
    {
        OverlappedActors.Empty();
    }
}
