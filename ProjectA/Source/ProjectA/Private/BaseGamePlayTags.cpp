// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGamePlayTags.h"

namespace BaseGamePlayTags
{
	//Input Tags
    UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move")
    UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look")
    UE_DEFINE_GAMEPLAY_TAG(InputTag_Equip, "InputTag.Equip")
    UE_DEFINE_GAMEPLAY_TAG(InputTag_UnEquip, "InputTag.UnEquip")
    UE_DEFINE_GAMEPLAY_TAG(InputTag_LightAttack_Axe, "InputTag.LightAttack.Axe")
    UE_DEFINE_GAMEPLAY_TAG(InputTag_HeavyAttack_Axe, "InputTag.HeavyAttack.Axe")
    UE_DEFINE_GAMEPLAY_TAG(InputTag_Roll, "InputTag.Roll")
    
    UE_DEFINE_GAMEPLAY_TAG(InputTag_Hold, "InputTag.Hold")
    UE_DEFINE_GAMEPLAY_TAG(InputTag_Hold_Block, "InputTag.Hold.Block")

	UE_DEFINE_GAMEPLAY_TAG(InputTag_Toggle, "InputTag.Toggle")
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Toggle_Targeting, "InputTag.Toggle.Targeting")
	UE_DEFINE_GAMEPLAY_TAG(InputTag_SwitchTarget, "InputTag.SwitchTarget")
	
        
    //Player Tags
    UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe, "Player.Weapon.Axe")
    UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe, "Player.Ability.Equip.Axe")
    UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Axe, "Player.Ability.Unequip.Axe")
    UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe, "Player.Ability.Attack.Light.Axe")
    UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe, "Player.Ability.Attack.Heavy.Axe")
    UE_DEFINE_GAMEPLAY_TAG(Player_Ability_HitPause, "Player.Ability.HitPause")
    UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Roll, "Player.Ability.Roll")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Block, "Player.Ability.Block")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Targeting, "Player.Ability.Targeting")


    UE_DEFINE_GAMEPLAY_TAG(Player_Event_Weapon_Equip, "Player.Event.Weapon.Equip")
    UE_DEFINE_GAMEPLAY_TAG(Player_Event_Weapon_UnEquip, "Player.Event.Weapon.UnEquip")
    UE_DEFINE_GAMEPLAY_TAG(Player_Event_HitPause, "Player.Event.HitPause")
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_SuccessBlock, "Player.Event.SuccessBlock")
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_SwitchTarget_Left, "Player.Event.SwitchTarget.Left")
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_SwitchTarget_Right, "Player.Event.SwitchTarget.Right")
       
    UE_DEFINE_GAMEPLAY_TAG(Player_Status_JumpToFinisher, "Player.Status.JumpToFinisher")
    UE_DEFINE_GAMEPLAY_TAG(Player_Status_Rolling, "Player.Status.Rolling")
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Blocking, "Player.Status.Blocking")
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Targeting, "Player.Status.Targeting")
	

    UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Light, "Player.SetByCaller.AttackType.Light")
    UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Heavy, "Player.SetByCaller.AttackType.Heavy")
        

    //Enemy Tags
    UE_DEFINE_GAMEPLAY_TAG(Enemy_Weapon, "Enemy.Weapon")
    UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Melee, "Enemy.Ability.Melee")
    UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Ranged, "Enemy.Ability.Ranged")
    UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_HitReact, "Enemy.Ability.HitReact")
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_SummonEnemies, "Enemy.Ability.SummonEnemies")
	
    UE_DEFINE_GAMEPLAY_TAG(Enemy_Status_Strafing, "Enemy.Status.Strafing")
    UE_DEFINE_GAMEPLAY_TAG(Enemy_Status_UnderAttack, "Enemy.Status.UnderAttack")
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Status_UnBlockableAttack, "Enemy.Status.UnBlockableAttack")
	
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Event_SummonEnemies, "Enemy.Event.SummonEnemies")
	
    //Shared Tags    
    UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_HitReact, "Shared.Ability.HitReact")
    UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_Death, "Shared.Ability.Death")
    UE_DEFINE_GAMEPLAY_TAG(Shared_Event_MeleeHit, "Shared.Event.MeleeHit")    
    UE_DEFINE_GAMEPLAY_TAG(Shared_Event_HitReact, "Shared.Event.HitReact")
	UE_DEFINE_GAMEPLAY_TAG(Shared_Event_SpawnProjectile, "Shared.Event.SpawnProjectile");
	
    UE_DEFINE_GAMEPLAY_TAG(Shared_SetByCaller_BaseDamage, "Shared.SetByCaller.BaseDamage")
    UE_DEFINE_GAMEPLAY_TAG(Shared_Status_Dead, "Shared.Status.Dead")
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Front, "Shared.Status.HitReact.Front")
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Right, "Shared.Status.HitReact.Right")
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Left, "Shared.Status.HitReact.Left")
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Back, "Shared.Status.HitReact.Back")
	

        
}