﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HuskPawn_Bombshell_Poison

#include "Basic.hpp"

#include "HuskPawn_Bombshell_Poison_classes.hpp"
#include "HuskPawn_Bombshell_Poison_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.ExecuteUbergraph_HuskPawn_Bombshell_Poison
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_Bombshell_Poison_C::ExecuteUbergraph_HuskPawn_Bombshell_Poison(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HuskPawn_Bombshell_Poison_C", "ExecuteUbergraph_HuskPawn_Bombshell_Poison");

	Params::HuskPawn_Bombshell_Poison_C_ExecuteUbergraph_HuskPawn_Bombshell_Poison Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                HitInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FGameplayEffectContextHandle&EffectContext                                          (Parm)

void AHuskPawn_Bombshell_Poison_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HuskPawn_Bombshell_Poison_C", "OnDeathPlayEffects");

	Params::HuskPawn_Bombshell_Poison_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AHuskPawn_Bombshell_Poison_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HuskPawn_Bombshell_Poison_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Bombshell_Poison_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HuskPawn_Bombshell_Poison_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
