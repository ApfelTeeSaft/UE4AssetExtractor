﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Constructor_BASE

#include "Basic.hpp"

#include "B_Constructor_BASE_classes.hpp"
#include "B_Constructor_BASE_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::ExecuteUbergraph_B_Constructor_BASE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "ExecuteUbergraph_B_Constructor_BASE");

	Params::B_Constructor_BASE_C_ExecuteUbergraph_B_Constructor_BASE Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::ResourcesCreated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "ResourcesCreated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::GetDamageAmp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "GetDamageAmp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// const class AFortPawn*                  InteractingPawn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "BlueprintOnInteract");

	Params::B_Constructor_BASE_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*                 BuildingActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*             EffectMeshComp                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "StopBuildingActorVisuals");

	Params::B_Constructor_BASE_C_StopBuildingActorVisuals Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.EffectMeshComp = EffectMeshComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*                 BuildingActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*             EffectMeshComp                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "StartBuildingActorVisuals");

	Params::B_Constructor_BASE_C_StartBuildingActorVisuals Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.EffectMeshComp = EffectMeshComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LegsUp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::AnimateLegs(bool LegsUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "AnimateLegs");

	Params::B_Constructor_BASE_C_AnimateLegs Parms{};

	Parms.LegsUp = LegsUp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature");

	Params::B_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::Recycling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "Recycling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          InstigatorAbilitySystemComponent                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "OnPlaced");

	Params::B_Constructor_BASE_C_OnPlaced Parms{};

	Parms.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          Ability_System_Component                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32*                                  NodesToAffect_0                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int32* NodesToAffect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "SetupBaseDefaultValues");

	Params::B_Constructor_BASE_C_SetupBaseDefaultValues Parms{};

	Parms.Ability_System_Component = Ability_System_Component;

	UObject::ProcessEvent(Func, &Parms);

	if (NodesToAffect_0 != nullptr)
		*NodesToAffect_0 = Parms.NodesToAffect_0;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          Instigator_Ability_System                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBASEGameplayEffect>*     BASEBuildingEffects                                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect>*     BASEFriendlyEffects                                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect>*     BASEHostileEffects                                     (Parm, OutParm, ZeroConstructor)

void AB_Constructor_BASE_C::Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "Setup Base Effect Array");

	Params::B_Constructor_BASE_C_Setup_Base_Effect_Array Parms{};

	Parms.Instigator_Ability_System = Instigator_Ability_System;

	UObject::ProcessEvent(Func, &Parms);

	if (BASEBuildingEffects != nullptr)
		*BASEBuildingEffects = std::move(Parms.BASEBuildingEffects);

	if (BASEFriendlyEffects != nullptr)
		*BASEFriendlyEffects = std::move(Parms.BASEFriendlyEffects);

	if (BASEHostileEffects != nullptr)
		*BASEHostileEffects = std::move(Parms.BASEHostileEffects);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystemComponent_0                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBASEGameplayEffect>*     BuildingEffects                                        (Parm, OutParm, ZeroConstructor)

void AB_Constructor_BASE_C::SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* BuildingEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "SetupBuildingEffects");

	Params::B_Constructor_BASE_C_SetupBuildingEffects Parms{};

	Parms.AbilitySystemComponent_0 = AbilitySystemComponent_0;

	UObject::ProcessEvent(Func, &Parms);

	if (BuildingEffects != nullptr)
		*BuildingEffects = std::move(Parms.BuildingEffects);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystemComponent_0                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBASEGameplayEffect>*     FriendlyEffects                                        (Parm, OutParm, ZeroConstructor)

void AB_Constructor_BASE_C::SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* FriendlyEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "SetupFriendlyEffects");

	Params::B_Constructor_BASE_C_SetupFriendlyEffects Parms{};

	Parms.AbilitySystemComponent_0 = AbilitySystemComponent_0;

	UObject::ProcessEvent(Func, &Parms);

	if (FriendlyEffects != nullptr)
		*FriendlyEffects = std::move(Parms.FriendlyEffects);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystemComponent_0                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBASEGameplayEffect>*     HostileEffects                                         (Parm, OutParm, ZeroConstructor)

void AB_Constructor_BASE_C::SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* HostileEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "SetupHostileEffects");

	Params::B_Constructor_BASE_C_SetupHostileEffects Parms{};

	Parms.AbilitySystemComponent_0 = AbilitySystemComponent_0;

	UObject::ProcessEvent(Func, &Parms);

	if (HostileEffects != nullptr)
		*HostileEffects = std::move(Parms.HostileEffects);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::RecycleResources()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "RecycleResources");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::OnRep_BaseIsPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "OnRep_BaseIsPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_NumbPlayersNearBase
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::OnRep_NumbPlayersNearBase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "OnRep_NumbPlayersNearBase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AddGEToBaseArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBASEGameplayEffect>&     BaseArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                           GameplayEffect                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   LevelOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::AddGEToBaseArray(TArray<struct FBASEGameplayEffect>& BaseArray, class UClass* GameplayEffect, int32 LevelOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "AddGEToBaseArray");

	Params::B_Constructor_BASE_C_AddGEToBaseArray Parms{};

	Parms.BaseArray = std::move(BaseArray);
	Parms.GameplayEffect = GameplayEffect;
	Parms.LevelOverride = LevelOverride;

	UObject::ProcessEvent(Func, &Parms);

	BaseArray = std::move(Parms.BaseArray);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItemDefinition*         ItemDefinition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AmountToSpawn                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortResourceType                       ResourceType_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, EFortResourceType ResourceType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "SpawnResourceForRecycling");

	Params::B_Constructor_BASE_C_SpawnResourceForRecycling Parms{};

	Parms.ItemDefinition = ItemDefinition;
	Parms.AmountToSpawn = AmountToSpawn;
	Parms.ResourceType_0 = ResourceType_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FStructRecyclingResource&  RecyclingResource                                      (Parm)
// int32                                   AmountToSpawn                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*         Stored_Resource                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStructRecyclingResource*        SetValue                                               (Parm, OutParm)

void AB_Constructor_BASE_C::AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, int32 AmountToSpawn, class UFortWorldItemDefinition* Stored_Resource, struct FStructRecyclingResource* SetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "AddResourceToStack");

	Params::B_Constructor_BASE_C_AddResourceToStack Parms{};

	Parms.RecyclingResource = std::move(RecyclingResource);
	Parms.AmountToSpawn = AmountToSpawn;
	Parms.Stored_Resource = Stored_Resource;

	UObject::ProcessEvent(Func, &Parms);

	if (SetValue != nullptr)
		*SetValue = std::move(Parms.SetValue);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::OnRep_CollectResources()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "OnRep_CollectResources");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::SetDamageMultiplier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "SetDamageMultiplier");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::SetBaseVisualGlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "SetBaseVisualGlow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEffectSpecHandle& GE_Spec                                                (Parm)

void AB_Constructor_BASE_C::BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "BaseSelfApplyGameplaySpec");

	Params::B_Constructor_BASE_C_BaseSelfApplyGameplaySpec Parms{};

	Parms.GE_Spec = std::move(GE_Spec);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const class AFortPawn*                  InteractingPawn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_Constructor_BASE_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "BlueprintCanInteract");

	Params::B_Constructor_BASE_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class AFortPawn*                  InteractingPawn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AB_Constructor_BASE_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Constructor_BASE_C", "BlueprintGetInteractionString");

	Params::B_Constructor_BASE_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma pack(pop)
