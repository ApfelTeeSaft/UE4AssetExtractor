﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: McpProfileSys

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "McpProfileSys_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Class McpProfileSys.McpProfile
// 0x0108 (0x0124 - 0x001C)
class UMcpProfile : public UObject
{
public:
	uint8                                         Pad_1C[0x78];                                      // 0x001C(0x0078)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DebugName;                                         // 0x0094(0x000C)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_A0[0x4];                                       // 0x00A0(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMcpProfileGroup*                       ProfileGroup;                                      // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 ProfileId;                                         // 0x00A8(0x000C)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                         ProfileRevision;                                   // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         FullProfileQueryQueued;                            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bShouldCreateInstances;                            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C1[0x63];                                      // 0x00C1(0x0063)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DeleteAllProfiles(struct FClientUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfile">();
	}
	static class UMcpProfile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfile>();
	}
};
static_assert(alignof(UMcpProfile) == 0x000004, "Wrong alignment on UMcpProfile");
static_assert(sizeof(UMcpProfile) == 0x000124, "Wrong size on UMcpProfile");
static_assert(offsetof(UMcpProfile, DebugName) == 0x000094, "Member 'UMcpProfile::DebugName' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileGroup) == 0x0000A4, "Member 'UMcpProfile::ProfileGroup' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileId) == 0x0000A8, "Member 'UMcpProfile::ProfileId' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileRevision) == 0x0000B4, "Member 'UMcpProfile::ProfileRevision' has a wrong offset!");
static_assert(offsetof(UMcpProfile, FullProfileQueryQueued) == 0x0000BC, "Member 'UMcpProfile::FullProfileQueryQueued' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bShouldCreateInstances) == 0x0000C0, "Member 'UMcpProfile::bShouldCreateInstances' has a wrong offset!");

// Class McpProfileSys.McpItemAware
// 0x0000 (0x001C - 0x001C)
class IMcpItemAware final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpItemAware">();
	}
	static class IMcpItemAware* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMcpItemAware>();
	}
};
static_assert(alignof(IMcpItemAware) == 0x000004, "Wrong alignment on IMcpItemAware");
static_assert(sizeof(IMcpItemAware) == 0x00001C, "Wrong size on IMcpItemAware");

// Class McpProfileSys.McpProfileGroup
// 0x0058 (0x0074 - 0x001C)
class UMcpProfileGroup final : public UObject
{
public:
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FProfileEntry>                  ProfileList;                                       // 0x0020(0x000C)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                          bIsInitialized;                                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerName;                                        // 0x0030(0x000C)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsServer;                                         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3D[0x13];                                      // 0x003D(0x0013)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LastMcpVersion;                                    // 0x0050(0x000C)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                              LocalTimeOffset;                                   // 0x005C(0x0008)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfilePendingHttpRequest>     PendingRequests;                                   // 0x0064(0x000C)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                          bIsProcessingRequestGenerator;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfileGroup">();
	}
	static class UMcpProfileGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfileGroup>();
	}
};
static_assert(alignof(UMcpProfileGroup) == 0x000004, "Wrong alignment on UMcpProfileGroup");
static_assert(sizeof(UMcpProfileGroup) == 0x000074, "Wrong size on UMcpProfileGroup");
static_assert(offsetof(UMcpProfileGroup, ProfileList) == 0x000020, "Member 'UMcpProfileGroup::ProfileList' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bIsInitialized) == 0x00002C, "Member 'UMcpProfileGroup::bIsInitialized' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, PlayerName) == 0x000030, "Member 'UMcpProfileGroup::PlayerName' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bIsServer) == 0x00003C, "Member 'UMcpProfileGroup::bIsServer' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LastMcpVersion) == 0x000050, "Member 'UMcpProfileGroup::LastMcpVersion' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LocalTimeOffset) == 0x00005C, "Member 'UMcpProfileGroup::LocalTimeOffset' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, PendingRequests) == 0x000064, "Member 'UMcpProfileGroup::PendingRequests' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bIsProcessingRequestGenerator) == 0x000070, "Member 'UMcpProfileGroup::bIsProcessingRequestGenerator' has a wrong offset!");

// Class McpProfileSys.McpProfileManager
// 0x0018 (0x0034 - 0x001C)
class UMcpProfileManager final : public UObject
{
public:
	TArray<struct FProfileGroupEntry>             ServerProfileGroups;                               // 0x001C(0x000C)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfileGroupEntry>             ClientProfileGroups;                               // 0x0028(0x000C)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfileManager">();
	}
	static class UMcpProfileManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfileManager>();
	}
};
static_assert(alignof(UMcpProfileManager) == 0x000004, "Wrong alignment on UMcpProfileManager");
static_assert(sizeof(UMcpProfileManager) == 0x000034, "Wrong size on UMcpProfileManager");
static_assert(offsetof(UMcpProfileManager, ServerProfileGroups) == 0x00001C, "Member 'UMcpProfileManager::ServerProfileGroups' has a wrong offset!");
static_assert(offsetof(UMcpProfileManager, ClientProfileGroups) == 0x000028, "Member 'UMcpProfileManager::ClientProfileGroups' has a wrong offset!");

}

#pragma pack(pop)
