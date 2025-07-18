﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseFlow

#include "Basic.hpp"

#include "PurchaseFlow_classes.hpp"
#include "PurchaseFlow_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function PurchaseFlow.PurchaseFlowJSBridge.Receipt
// (Final, Native, Public)
// Parameters:
// const struct FPurchaseFlowReceiptParam& Receipt_0                                              (Parm, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::Receipt(const struct FPurchaseFlowReceiptParam& Receipt_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "Receipt");

	Params::PurchaseFlowJSBridge_Receipt Parms{};

	Parms.Receipt_0 = std::move(Receipt_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)
// Parameters:
// const class FString&                    CloseInfo                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RequestClose(const class FString& CloseInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "RequestClose");

	Params::PurchaseFlowJSBridge_RequestClose Parms{};

	Parms.CloseInfo = std::move(CloseInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

#pragma pack(pop)
