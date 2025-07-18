﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Constructor_BullRush

#include "Basic.hpp"

#include "GA_Constructor_BullRush_classes.hpp"
#include "GA_Constructor_BullRush_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ExecuteUbergraph_GA_Constructor_BullRush
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Constructor_BullRush_C::ExecuteUbergraph_GA_Constructor_BullRush(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "ExecuteUbergraph_GA_Constructor_BullRush");

	Params::GA_Constructor_BullRush_C_ExecuteUbergraph_GA_Constructor_BullRush Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.CheckEndDash
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::CheckEndDash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "CheckEndDash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndDash
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::EndDash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "EndDash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnBullRushStopCollisionOverlap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Constructor_BullRush_C::OnBullRushStopCollisionOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "OnBullRushStopCollisionOverlap");

	Params::GA_Constructor_BullRush_C_OnBullRushStopCollisionOverlap Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnBullRushOverlap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Constructor_BullRush_C::OnBullRushOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "OnBullRushOverlap");

	Params::GA_Constructor_BullRush_C_OnBullRushOverlap Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGA_Constructor_BullRush_C::K2_OnEndAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "K2_OnEndAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Constructor_BullRush_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGA_Constructor_BullRush_C::Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1");

	Params::GA_Constructor_BullRush_C_Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGA_Constructor_BullRush_C::Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1");

	Params::GA_Constructor_BullRush_C_Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGA_Constructor_BullRush_C::Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1");

	Params::GA_Constructor_BullRush_C_Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnFinish_BDF7E7A84D7FB1380E68BBB8061B5115
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::OnFinish_BDF7E7A84D7FB1380E68BBB8061B5115()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "OnFinish_BDF7E7A84D7FB1380E68BBB8061B5115");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_7F48364C4417ADD50A45C0B1A7272F05
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGA_Constructor_BullRush_C::Triggered_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "Triggered_7F48364C4417ADD50A45C0B1A7272F05");

	Params::GA_Constructor_BullRush_C_Triggered_7F48364C4417ADD50A45C0B1A7272F05 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_7F48364C4417ADD50A45C0B1A7272F05
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGA_Constructor_BullRush_C::Cancelled_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "Cancelled_7F48364C4417ADD50A45C0B1A7272F05");

	Params::GA_Constructor_BullRush_C_Cancelled_7F48364C4417ADD50A45C0B1A7272F05 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_7F48364C4417ADD50A45C0B1A7272F05
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (Parm)

void UGA_Constructor_BullRush_C::Completed_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "Completed_7F48364C4417ADD50A45C0B1A7272F05");

	Params::GA_Constructor_BullRush_C_Completed_7F48364C4417ADD50A45C0B1A7272F05 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.InitBullRushVars
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::InitBullRushVars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "InitBullRushVars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyPushAside
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        PawnToPush                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Constructor_BullRush_C::ApplyPushAside(class AFortPawn* PawnToPush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "ApplyPushAside");

	Params::GA_Constructor_BullRush_C_ApplyPushAside Parms{};

	Parms.PawnToPush = PawnToPush;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyEndingDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::ApplyEndingDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "ApplyEndingDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Activate
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::FX_MotionLines_Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "FX_MotionLines_Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::FX_MotionLines_Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "FX_MotionLines_Deactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleSteeringReduction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnableSteeringReduction                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Constructor_BullRush_C::ToggleSteeringReduction(bool bEnableSteeringReduction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "ToggleSteeringReduction");

	Params::GA_Constructor_BullRush_C_ToggleSteeringReduction Parms{};

	Parms.bEnableSteeringReduction = bEnableSteeringReduction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BeginPushingPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        PawnToPush                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Constructor_BullRush_C::BeginPushingPawn(class AFortPawn* PawnToPush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "BeginPushingPawn");

	Params::GA_Constructor_BullRush_C_BeginPushingPawn Parms{};

	Parms.PawnToPush = PawnToPush;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAll
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::EndPushingAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "EndPushingAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ShieldHitsGround
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::FX_ShieldHitsGround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "FX_ShieldHitsGround");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ImpactEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::FX_ImpactEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "FX_ImpactEnemy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleCapsuleCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Constructor_BullRush_C::ToggleCapsuleCollision(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_BullRush_C", "ToggleCapsuleCollision");

	Params::GA_Constructor_BullRush_C_ToggleCapsuleCollision Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
