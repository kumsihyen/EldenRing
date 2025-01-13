// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/BaseAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "BaseFunctionLibrary.h"
#include "BaseGamePlayTags.h"
#include "Interfaces/PawnUIInterface.h"
#include "BaseDebugHelper.h"
#include "Components/Ui/PawnUiComponent.h"
#include "Components/Ui/HeroUiComponent.h"

UBaseAttributeSet::UBaseAttributeSet()
{
	InitCurrentHp(1.f);
	InitMaxHp(1.f);
	InitMaxMp(1.f);
	InitCurrentMp(1.f);
	InitDefence(1.f);
	InitAttack(1.f);
	InitDamageTaken(1.f);
}

void UBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    if (!CachedUIInterface.IsValid())
    {
        CachedUIInterface = TWeakInterfacePtr<IPawnUIInterface>(Data.Target.GetAvatarActor());
    }

    checkf(CachedUIInterface.IsValid(), TEXT("%s does not Implemetation IPawnUIInterface."), *Data.Target.GetAvatarActor()->GetActorLabel());

    UPawnUiComponent* PawnUiComponent = CachedUIInterface->GetPawnUIComponent();

    checkf(PawnUiComponent, TEXT("Can not Load PawnUIComponent from %s"), *Data.Target.GetAvatarActor()->GetActorLabel());

    if (Data.EvaluatedData.Attribute == GetCurrentHpAttribute())
    {
        const float NewCurrentHp = FMath::Clamp(GetCurrentHp(), 0.0f, GetMaxHp());
        SetCurrentHp(NewCurrentHp);
        
        PawnUiComponent->OnCurrentHpChanged.Broadcast(GetCurrentHp() / GetMaxHp());
    }

    if (Data.EvaluatedData.Attribute == GetCurrentMpAttribute())
    {
        const float NewCurrentMp = FMath::Clamp(GetCurrentMp(), 0.0f, GetMaxMp());
        SetCurrentMp(NewCurrentMp);

        if (UHeroUIComponent* HeroUIComponent = CachedUIInterface->GetHeroUIComponent())
        {
            HeroUIComponent->OnCurrentMpChanged.Broadcast(GetCurrentMp() / GetMaxMp());
        }
    }

    if (Data.EvaluatedData.Attribute == GetDamageTakenAttribute())
    {
        const float BeforeHp = GetCurrentHp();
        const float Damage = GetDamageTaken();

        const float NewCurrentHp = FMath::Clamp(BeforeHp - Damage, 0.0f, GetMaxHp());
        SetCurrentHp(NewCurrentHp);

        const FString DebugString = FString::Printf(TEXT("Before Hp: %f, Damage: %f, NewCurrentHp : %f"), BeforeHp, Damage, NewCurrentHp);
        //Debug::Print(DebugString, FColor::Green);
        
        //TODO:: Ui에 값을 전달
        PawnUiComponent->OnCurrentHpChanged.Broadcast(GetCurrentHp() / GetMaxHp());

        //Character Death Process
        if (NewCurrentHp == 0.f)    
        {
            UBaseFunctionLibrary::AddPlaygameTagToActor(Data.Target.GetAvatarActor(), BaseGamePlayTags::Shared_Status_Dead);
        }
    }
}
