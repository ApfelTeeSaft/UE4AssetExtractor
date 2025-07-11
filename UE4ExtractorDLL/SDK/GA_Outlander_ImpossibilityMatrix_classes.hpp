﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Outlander_ImpossibilityMatrix

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "E_ExplorerFragmentTypes_structs.hpp"
#include "GAT_OutlanderTriggeredAbility_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass GA_Outlander_ImpossibilityMatrix.GA_Outlander_ImpossibilityMatrix_C
// 0x00A4 (0x07E4 - 0x0740)
class UGA_Outlander_ImpossibilityMatrix_C final : public UGAT_OutlanderTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Outlander_ImpossibilityMatrix_C; // 0x0740(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           EventActivation;                                   // 0x0744(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_HasBuff;                                        // 0x074C(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_ImpossibilityMatrix;                            // 0x0764(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                  TC_OffensiveBuff;                                  // 0x0768(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_DefensiveBuff;                                  // 0x0780(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_SpecialtyBuff;                                  // 0x0798(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsOffense;                                         // 0x07B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDefense;                                         // 0x07B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSpecialty;                                       // 0x07B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HoldingFragment;                                   // 0x07B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 GE_EffectCounter;                                  // 0x07B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_ExplorerFragmentTypes                       FragType;                                          // 0x07B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B9[0x3];                                      // 0x07B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_ImpossibilityMatrix;                            // 0x07BC(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_BackupType;                                     // 0x07D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 GE_BackupOffense;                                  // 0x07D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 GE_BackupDefense;                                  // 0x07DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 GE_BackupSpecialty;                                // 0x07E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Outlander_ImpossibilityMatrix(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Outlander_ImpossibilityMatrix_C">();
	}
	static class UGA_Outlander_ImpossibilityMatrix_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Outlander_ImpossibilityMatrix_C>();
	}
};
static_assert(alignof(UGA_Outlander_ImpossibilityMatrix_C) == 0x000004, "Wrong alignment on UGA_Outlander_ImpossibilityMatrix_C");
static_assert(sizeof(UGA_Outlander_ImpossibilityMatrix_C) == 0x0007E4, "Wrong size on UGA_Outlander_ImpossibilityMatrix_C");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, UberGraphFrame_GA_Outlander_ImpossibilityMatrix_C) == 0x000740, "Member 'UGA_Outlander_ImpossibilityMatrix_C::UberGraphFrame_GA_Outlander_ImpossibilityMatrix_C' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, EventActivation) == 0x000744, "Member 'UGA_Outlander_ImpossibilityMatrix_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, TC_HasBuff) == 0x00074C, "Member 'UGA_Outlander_ImpossibilityMatrix_C::TC_HasBuff' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, GE_ImpossibilityMatrix) == 0x000764, "Member 'UGA_Outlander_ImpossibilityMatrix_C::GE_ImpossibilityMatrix' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, TC_OffensiveBuff) == 0x000768, "Member 'UGA_Outlander_ImpossibilityMatrix_C::TC_OffensiveBuff' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, TC_DefensiveBuff) == 0x000780, "Member 'UGA_Outlander_ImpossibilityMatrix_C::TC_DefensiveBuff' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, TC_SpecialtyBuff) == 0x000798, "Member 'UGA_Outlander_ImpossibilityMatrix_C::TC_SpecialtyBuff' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, IsOffense) == 0x0007B0, "Member 'UGA_Outlander_ImpossibilityMatrix_C::IsOffense' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, IsDefense) == 0x0007B1, "Member 'UGA_Outlander_ImpossibilityMatrix_C::IsDefense' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, IsSpecialty) == 0x0007B2, "Member 'UGA_Outlander_ImpossibilityMatrix_C::IsSpecialty' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, HoldingFragment) == 0x0007B3, "Member 'UGA_Outlander_ImpossibilityMatrix_C::HoldingFragment' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, GE_EffectCounter) == 0x0007B4, "Member 'UGA_Outlander_ImpossibilityMatrix_C::GE_EffectCounter' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, FragType) == 0x0007B8, "Member 'UGA_Outlander_ImpossibilityMatrix_C::FragType' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, TC_ImpossibilityMatrix) == 0x0007BC, "Member 'UGA_Outlander_ImpossibilityMatrix_C::TC_ImpossibilityMatrix' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, GE_BackupType) == 0x0007D4, "Member 'UGA_Outlander_ImpossibilityMatrix_C::GE_BackupType' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, GE_BackupOffense) == 0x0007D8, "Member 'UGA_Outlander_ImpossibilityMatrix_C::GE_BackupOffense' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, GE_BackupDefense) == 0x0007DC, "Member 'UGA_Outlander_ImpossibilityMatrix_C::GE_BackupDefense' has a wrong offset!");
static_assert(offsetof(UGA_Outlander_ImpossibilityMatrix_C, GE_BackupSpecialty) == 0x0007E0, "Member 'UGA_Outlander_ImpossibilityMatrix_C::GE_BackupSpecialty' has a wrong offset!");

}

#pragma pack(pop)
