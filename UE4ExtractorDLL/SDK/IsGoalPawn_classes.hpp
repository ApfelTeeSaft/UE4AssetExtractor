﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IsGoalPawn

#include "Basic.hpp"

#include "AIModule_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass IsGoalPawn.IsGoalPawn_C
// 0x0000 (0x006C - 0x006C)
class UIsGoalPawn_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IsGoalPawn_C">();
	}
	static class UIsGoalPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIsGoalPawn_C>();
	}
};
static_assert(alignof(UIsGoalPawn_C) == 0x000004, "Wrong alignment on UIsGoalPawn_C");
static_assert(sizeof(UIsGoalPawn_C) == 0x00006C, "Wrong size on UIsGoalPawn_C");

}

#pragma pack(pop)
