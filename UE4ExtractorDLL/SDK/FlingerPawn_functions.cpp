﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlingerPawn

#include "Basic.hpp"

#include "FlingerPawn_classes.hpp"
#include "FlingerPawn_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function FlingerPawn.FlingerPawn_C.ExecuteUbergraph_FlingerPawn
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::ExecuteUbergraph_FlingerPawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "ExecuteUbergraph_FlingerPawn");

	Params::FlingerPawn_C_ExecuteUbergraph_FlingerPawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Flinger.Ranged.Grab.NPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayCueParameters&    Parameters                                             (Parm)

void AFlingerPawn_C::GameplayCue_NPC_Flinger_Ranged_Grab_NPC(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "GameplayCue.NPC.Flinger.Ranged.Grab.NPC");

	Params::FlingerPawn_C_GameplayCue_NPC_Flinger_Ranged_Grab_NPC Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Throw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayCueParameters&    Parameters                                             (Parm)

void AFlingerPawn_C::GameplayCue_NPC_Ranged_Throw(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "GameplayCue.NPC.Ranged.Throw");

	Params::FlingerPawn_C_GameplayCue_NPC_Ranged_Throw Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Grab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayCueParameters&    Parameters                                             (Parm)

void AFlingerPawn_C::GameplayCue_NPC_Ranged_Grab(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "GameplayCue.NPC.Ranged.Grab");

	Params::FlingerPawn_C_GameplayCue_NPC_Ranged_Grab Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                HitInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayEffectContextHandle&EffectContext                                          (Parm)

void AFlingerPawn_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "OnDeathPlayEffects");

	Params::FlingerPawn_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayCueParameters&    Parameters                                             (Parm)

void AFlingerPawn_C::GameplayCue_Impact_Physical_Creature(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "GameplayCue.Impact.Physical.Creature");

	Params::FlingerPawn_C_GameplayCue_Impact_Physical_Creature Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                HitInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayEffectContextHandle&EffectContext                                          (Parm)

void AFlingerPawn_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "OnDeathServer");

	Params::FlingerPawn_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AFlingerPawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::AdditiveHitReactDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "AdditiveHitReactDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                HitInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayEffectContextHandle&EffectContext                                          (Parm)

void AFlingerPawn_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "OnDamagePlayEffects");

	Params::FlingerPawn_C_OnDamagePlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.OnForceSpawnEffectCompletion
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AFlingerPawn_C::OnForceSpawnEffectCompletion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "OnForceSpawnEffectCompletion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.OnSpawnedFromRift
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AFlingerPawn_C::OnSpawnedFromRift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "OnSpawnedFromRift");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Collide_                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::PortalCollision(bool Collide_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "PortalCollision");

	Params::FlingerPawn_C_PortalCollision Parms{};

	Parms.Collide_ = Collide_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::PortalFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "PortalFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.PortalGet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*                   BuildingActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABuildingActor*>&          BuildingActorList                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                           BT                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList, class AActor* BT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "PortalGet");

	Params::FlingerPawn_C_PortalGet Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = std::move(BuildingActorList);
	Parms.BT = BT;

	UObject::ProcessEvent(Func, &Parms);

	BuildingActorList = std::move(Parms.BuildingActorList);
}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::TakerSoulSuckInterrupted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "TakerSoulSuckInterrupted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::PortalClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "PortalClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.PortalAdd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*                   BuildingActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABuildingActor*>&          BuildingActorList                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AFlingerPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "PortalAdd");

	Params::FlingerPawn_C_PortalAdd Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = std::move(BuildingActorList);

	UObject::ProcessEvent(Func, &Parms);

	BuildingActorList = std::move(Parms.BuildingActorList);
}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::TakerSoulSuckSoundEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "TakerSoulSuckSoundEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "TakerSoulSuckSoundBegin");

	Params::FlingerPawn_C_TakerSoulSuckSoundBegin Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SuccessfulHit                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "TakerAttackFSM");

	Params::FlingerPawn_C_TakerAttackFSM Parms{};

	Parms.SuccessfulHit = SuccessfulHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Portal_Available_                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "IsTakerWallPortalAvailable");

	Params::FlingerPawn_C_IsTakerWallPortalAvailable Parms{};

	Parms.Portal_Available_ = Portal_Available_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           BuildingPart                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBTTask_BlueprintBase*            Task                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   DesiredMoveLocation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Debug                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "TakerWallPortalBehavior");

	Params::FlingerPawn_C_TakerWallPortalBehavior Parms{};

	Parms.BuildingPart = BuildingPart;
	Parms.Task = Task;
	Parms.DesiredMoveLocation = std::move(DesiredMoveLocation);
	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::EndTakerSwoopAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "EndTakerSwoopAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::BeginTakerSwoopAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "BeginTakerSwoopAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Swoop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    SoulSuckMelee                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Portal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "ResetTakerSpecialAttackTimer");

	Params::FlingerPawn_C_ResetTakerSpecialAttackTimer Parms{};

	Parms.Swoop = Swoop;
	Parms.SoulSuckMelee = SoulSuckMelee;
	Parms.Portal = Portal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SpecialAttack                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Swoop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Soul_Suck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Portal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "VerifyTakerAttack");

	Params::FlingerPawn_C_VerifyTakerAttack Parms{};

	Parms.SpecialAttack = SpecialAttack;
	Parms.Swoop = Swoop;
	Parms.Soul_Suck = Soul_Suck;
	Parms.Portal = Portal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::HuskEvadeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "HuskEvadeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::MantleEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "MantleEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   StartPos                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   MidPos                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   EndPos                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    LowWall                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    MidWall                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    FullWall                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    WindowWall                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "MantleStart");

	Params::FlingerPawn_C_MantleStart Parms{};

	Parms.StartPos = std::move(StartPos);
	Parms.MidPos = std::move(MidPos);
	Parms.EndPos = std::move(EndPos);
	Parms.LowWall = LowWall;
	Parms.MidWall = MidWall;
	Parms.FullWall = FullWall;
	Parms.WindowWall = WindowWall;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            PawnThatDied                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "FlingerEnemyDied");

	Params::FlingerPawn_C_FlingerEnemyDied Parms{};

	Parms.PawnThatDied = PawnThatDied;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   PushMomentum_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   PushDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                            OwningFlinger                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum_0, float PushDuration, class APawn* OwningFlinger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "AlertEnemySpawnedByFlinger");

	Params::FlingerPawn_C_AlertEnemySpawnedByFlinger Parms{};

	Parms.PushMomentum_0 = std::move(PushMomentum_0);
	Parms.PushDuration = PushDuration;
	Parms.OwningFlinger = OwningFlinger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*              FailedProjectile                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "FlingerEnemyFailedToSpawn");

	Params::FlingerPawn_C_FlingerEnemyFailedToSpawn Parms{};

	Parms.FailedProjectile = FailedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*              Projectile                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "FlingerThrewAProjectileContainingAnEnemy");

	Params::FlingerPawn_C_FlingerThrewAProjectileContainingAnEnemy Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::FlingerCan_tSpawnAnEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "FlingerCan'tSpawnAnEnemy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::FlingerCanSpawnAnEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "FlingerCanSpawnAnEnemy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ActorWhoAsked                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "CanFlingerSpawnAnEnemy");

	Params::FlingerPawn_C_CanFlingerSpawnAnEnemy Parms{};

	Parms.ActorWhoAsked = ActorWhoAsked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                      EnemySpawned                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*              ProjectileThatSpawnedThisEnemy                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlingerPawn_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "FlingerSpawnedAnEnemy");

	Params::FlingerPawn_C_FlingerSpawnedAnEnemy Parms{};

	Parms.EnemySpawned = EnemySpawned;
	Parms.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__Spawn Death FX__EventFunc
// (BlueprintEvent)

void AFlingerPawn_C::Disolve___Particle_Trigger__Spawn_Death_FX__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "Disolve & Particle Trigger__Spawn Death FX__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__UpdateFunc
// (BlueprintEvent)

void AFlingerPawn_C::Disolve___Particle_Trigger__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "Disolve & Particle Trigger__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__FinishedFunc
// (BlueprintEvent)

void AFlingerPawn_C::Disolve___Particle_Trigger__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "Disolve & Particle Trigger__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__Spawn__EventFunc
// (BlueprintEvent)

void AFlingerPawn_C::Timeline_0__Spawn__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "Timeline_0__Spawn__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AFlingerPawn_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AFlingerPawn_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFlingerPawn_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlingerPawn.FlingerPawn_C.OnReceiveSpawnGroup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFlingerPawn_C::OnReceiveSpawnGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "OnReceiveSpawnGroup");

	Params::FlingerPawn_C_OnReceiveSpawnGroup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FlingerPawn.FlingerPawn_C.IsReadyToReceiveNewSpawnGroup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFlingerPawn_C::IsReadyToReceiveNewSpawnGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlingerPawn_C", "IsReadyToReceiveNewSpawnGroup");

	Params::FlingerPawn_C_IsReadyToReceiveNewSpawnGroup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma pack(pop)
