// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/BaseAIController.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "BaseDebugHelper.h"

ABaseAIController::ABaseAIController(const FObjectInitializer& ObjectInitializer):
    Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>("PathFollowingComponent"))
{
    //SetDefaultSubobjectClass�� CrowdFollowingComponent ���
    if (UCrowdFollowingComponent* CrowdFollowingComponent = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))
    {
        //Debug::Print(TEXT("CrowdFollowingComponent valid"), FColor::Green);
    }

    AISenseConfig_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("AISenseConfig_Sight"));
    
    //�� ����
    AISenseConfig_Sight->DetectionByAffiliation.bDetectEnemies = true;
    //�Ʊ� ����
    AISenseConfig_Sight->DetectionByAffiliation.bDetectFriendlies = false;
    //�߸� ����
    AISenseConfig_Sight->DetectionByAffiliation.bDetectNeutrals = false;
    //�þ� �ݰ漳��
    AISenseConfig_Sight->SightRadius = 5000.0f;
    //����� �Ҵ� �þ� ���� ����
    AISenseConfig_Sight->LoseSightRadius = 0.f;
    //�ֺ� �þư�
    AISenseConfig_Sight->PeripheralVisionAngleDegrees = 360.0f;
    
    AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("AIPerceptionComponent");
    //���� ����
    AIPerceptionComponent->ConfigureSense(*AISenseConfig_Sight);
    AIPerceptionComponent->SetDominantSense(UAISenseConfig_Sight::StaticClass());
    AIPerceptionComponent->OnTargetPerceptionUpdated.AddUniqueDynamic(this, &ABaseAIController::OnEnemyPeceptionUpdated);

    //�����̵� �ο�
    SetGenericTeamId(FGenericTeamId(1));
}

ETeamAttitude::Type ABaseAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
    const APawn* PawnCheck = Cast<const APawn>(&Other);
    const IGenericTeamAgentInterface* OtherTeamAgent = Cast<IGenericTeamAgentInterface>(PawnCheck->GetController());

    //EQS Test Pawn�� ���ܽ�Ű�� HeroCharacter�� üũ�ϱ� ���� ���� (HeroCharacter)
    if (OtherTeamAgent && OtherTeamAgent->GetGenericTeamId() < GetGenericTeamId())
    {
        //TeamID�� �ٸ��� ��
        return ETeamAttitude::Hostile;
    }

    
    return ETeamAttitude::Friendly;
}

void ABaseAIController::OnEnemyPeceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    //update
   /* if (Stimulus.WasSuccessfullySensed() && Actor)
    {
        if (UBlackboardComponent* BlackboardComponent = GetBlackboardComponent())
        {
            BlackboardComponent->SetValueAsObject(FName(TEXT("TargetActor")), Actor);
        }
    }*/

    if (UBlackboardComponent* BlackboardComponent = GetBlackboardComponent())
    {
        if (!BlackboardComponent->GetValueAsObject(FName("TargetActor")))
        {
            if (Stimulus.WasSuccessfullySensed() && Actor)
            {
                BlackboardComponent->SetValueAsObject(FName(TEXT("TargetActor")), Actor);
            }
        }
    }
}

void ABaseAIController::BeginPlay()
{
    Super::BeginPlay();

    if (UCrowdFollowingComponent* CrowdFollowingComponent = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))
    {
        CrowdFollowingComponent->SetCrowdSimulationState(bDetourCrowdAvoidence ? ECrowdSimulationState::Enabled : ECrowdSimulationState::Disabled);
        
        switch (DetourCrowdAvoidenceQuality)
        {
            case 1: CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Low);    break;
            case 2: CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Medium); break;
            case 3: CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Good);   break;
            case 4: CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::High);   break;
            default: break;
        }

        CrowdFollowingComponent->SetAvoidanceGroup(1);
        CrowdFollowingComponent->SetGroupsToAvoid(1);
        CrowdFollowingComponent->SetCrowdCollisionQueryRange(CollsionQueryRange);
    }
    
}
