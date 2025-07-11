﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LlamaAnim_BP

#include "Basic.hpp"

#include "LlamaAnim_BP_classes.hpp"
#include "LlamaAnim_BP_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function LlamaAnim_BP.LlamaAnim_BP_C.ExecuteUbergraph_LlamaAnim_BP
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULlamaAnim_BP_C::ExecuteUbergraph_LlamaAnim_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LlamaAnim_BP_C", "ExecuteUbergraph_LlamaAnim_BP");

	Params::LlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LlamaAnim_BP.LlamaAnim_BP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void ULlamaAnim_BP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LlamaAnim_BP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LlamaAnim_BP.LlamaAnim_BP_C.AnimNotify_LlamasHeadIsReadyToBurst
// (BlueprintCallable, BlueprintEvent)

void ULlamaAnim_BP_C::AnimNotify_LlamasHeadIsReadyToBurst()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LlamaAnim_BP_C", "AnimNotify_LlamasHeadIsReadyToBurst");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LlamaAnim_BP.LlamaAnim_BP_C.TheHeadProjectileHasSpawned
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ULlamaAnim_BP_C::TheHeadProjectileHasSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LlamaAnim_BP_C", "TheHeadProjectileHasSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LlamaAnim_BP.LlamaAnim_BP_C.Play First Explosion Animation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ULlamaAnim_BP_C::Play_First_Explosion_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LlamaAnim_BP_C", "Play First Explosion Animation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LlamaAnim_BP.LlamaAnim_BP_C.AnimNotify_LlamaDeathAnimationCompleted
// (BlueprintCallable, BlueprintEvent)

void ULlamaAnim_BP_C::AnimNotify_LlamaDeathAnimationCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LlamaAnim_BP_C", "AnimNotify_LlamaDeathAnimationCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
