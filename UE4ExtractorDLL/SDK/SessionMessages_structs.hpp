﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SessionMessages

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// ScriptStruct SessionMessages.SessionServicePong
// 0x0074 (0x0074 - 0x0000)
struct FSessionServicePong final
{
public:
	bool                                          Authorized;                                        // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BuildDate;                                         // 0x0004(0x000C)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DeviceName;                                        // 0x0010(0x000C)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  InstanceId;                                        // 0x001C(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 InstanceName;                                      // 0x002C(0x000C)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsConsoleBuild;                                    // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlatformName;                                      // 0x003C(0x000C)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  SessionId;                                         // 0x0048(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 SessionName;                                       // 0x0058(0x000C)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SessionOwner;                                      // 0x0064(0x000C)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Standalone;                                        // 0x0070(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSessionServicePong) == 0x000004, "Wrong alignment on FSessionServicePong");
static_assert(sizeof(FSessionServicePong) == 0x000074, "Wrong size on FSessionServicePong");
static_assert(offsetof(FSessionServicePong, Authorized) == 0x000000, "Member 'FSessionServicePong::Authorized' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, BuildDate) == 0x000004, "Member 'FSessionServicePong::BuildDate' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, DeviceName) == 0x000010, "Member 'FSessionServicePong::DeviceName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, InstanceId) == 0x00001C, "Member 'FSessionServicePong::InstanceId' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, InstanceName) == 0x00002C, "Member 'FSessionServicePong::InstanceName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, IsConsoleBuild) == 0x000038, "Member 'FSessionServicePong::IsConsoleBuild' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, PlatformName) == 0x00003C, "Member 'FSessionServicePong::PlatformName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionId) == 0x000048, "Member 'FSessionServicePong::SessionId' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionName) == 0x000058, "Member 'FSessionServicePong::SessionName' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, SessionOwner) == 0x000064, "Member 'FSessionServicePong::SessionOwner' has a wrong offset!");
static_assert(offsetof(FSessionServicePong, Standalone) == 0x000070, "Member 'FSessionServicePong::Standalone' has a wrong offset!");

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001 (0x0001 - 0x0000)
struct FSessionServiceLogUnsubscribe final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSessionServiceLogUnsubscribe) == 0x000001, "Wrong alignment on FSessionServiceLogUnsubscribe");
static_assert(sizeof(FSessionServiceLogUnsubscribe) == 0x000001, "Wrong size on FSessionServiceLogUnsubscribe");

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001 (0x0001 - 0x0000)
struct FSessionServiceLogSubscribe final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSessionServiceLogSubscribe) == 0x000001, "Wrong alignment on FSessionServiceLogSubscribe");
static_assert(sizeof(FSessionServiceLogSubscribe) == 0x000001, "Wrong size on FSessionServiceLogSubscribe");

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0030 (0x0030 - 0x0000)
struct FSessionServiceLog final
{
public:
	class FName                                   Category;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Data;                                              // 0x0008(0x000C)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  InstanceId;                                        // 0x0014(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                        TimeSeconds;                                       // 0x0024(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Verbosity;                                         // 0x002C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSessionServiceLog) == 0x000004, "Wrong alignment on FSessionServiceLog");
static_assert(sizeof(FSessionServiceLog) == 0x000030, "Wrong size on FSessionServiceLog");
static_assert(offsetof(FSessionServiceLog, Category) == 0x000000, "Member 'FSessionServiceLog::Category' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, Data) == 0x000008, "Member 'FSessionServiceLog::Data' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, InstanceId) == 0x000014, "Member 'FSessionServiceLog::InstanceId' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, TimeSeconds) == 0x000024, "Member 'FSessionServiceLog::TimeSeconds' has a wrong offset!");
static_assert(offsetof(FSessionServiceLog, Verbosity) == 0x00002C, "Member 'FSessionServiceLog::Verbosity' has a wrong offset!");

// ScriptStruct SessionMessages.SessionServicePing
// 0x000C (0x000C - 0x0000)
struct FSessionServicePing final
{
public:
	class FString                                 UserName;                                          // 0x0000(0x000C)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSessionServicePing) == 0x000004, "Wrong alignment on FSessionServicePing");
static_assert(sizeof(FSessionServicePing) == 0x00000C, "Wrong size on FSessionServicePing");
static_assert(offsetof(FSessionServicePing, UserName) == 0x000000, "Member 'FSessionServicePing::UserName' has a wrong offset!");

}

#pragma pack(pop)
