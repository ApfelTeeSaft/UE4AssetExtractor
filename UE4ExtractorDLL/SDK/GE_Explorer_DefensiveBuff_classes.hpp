﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Explorer_DefensiveBuff

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GE_Explorer_DefensiveBuff.GE_Explorer_DefensiveBuff_C
// 0x0000 (0x0368 - 0x0368)
class UGE_Explorer_DefensiveBuff_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Explorer_DefensiveBuff_C">();
	}
	static class UGE_Explorer_DefensiveBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Explorer_DefensiveBuff_C>();
	}
};
static_assert(alignof(UGE_Explorer_DefensiveBuff_C) == 0x000004, "Wrong alignment on UGE_Explorer_DefensiveBuff_C");
static_assert(sizeof(UGE_Explorer_DefensiveBuff_C) == 0x000368, "Wrong size on UGE_Explorer_DefensiveBuff_C");

}

#pragma pack(pop)
