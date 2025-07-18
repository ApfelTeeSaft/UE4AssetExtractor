﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardsListWidget

#include "Basic.hpp"

#include "RewardsListWidget_classes.hpp"
#include "RewardsListWidget_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function RewardsListWidget.RewardsListWidget_C.PopulateRewards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortQuestReward>&        Rewards                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void URewardsListWidget_C::PopulateRewards(TArray<struct FFortQuestReward>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardsListWidget_C", "PopulateRewards");

	Params::RewardsListWidget_C_PopulateRewards Parms{};

	Parms.Rewards = std::move(Rewards);

	UObject::ProcessEvent(Func, &Parms);

	Rewards = std::move(Parms.Rewards);
}

}

#pragma pack(pop)
