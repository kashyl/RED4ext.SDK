#pragma once

/*
 * This file is generated. DO NOT modify it!
 *
 * Add new patterns in "patterns.py" file located in "project_root/scripts" and run "find_patterns.py".
 * The new file should be located in "idb_path/Addresses.hpp".
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 1.11.
namespace RED4ext::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_Execute = 0x140224A20 - ImageBase; // 48 89 5C 24 08 57 48 81 EC 90 01 00 00 F6 41 78 01 48 8B DA, expected: 1, index: 0
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_AllocInstance = 0x1402125C0 - ImageBase; // 48 89 6C 24 18 56 48 83 EC 30 41 0F B6 E8, expected: 1, index: 0
constexpr uintptr_t CClass_GetProperty = 0x140212FF0 - ImageBase; // 48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00, expected: 1, index: 0
constexpr uintptr_t CClass_GetFunction = 0x140212D80 - ImageBase; // 4C 8B C9 48 85 C9 74 5E 49 8B 41 48, expected: 1, index: 0
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x14402A748 - ImageBase; // 48 89 05 ? ? ? ? 49 8D 9D 88 00 00 00 49 8B 07 4C 8B C3, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_Get = 0x1401BC090 - ImageBase; // 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x140267480 - ImageBase; // 40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_ctor = 0x14026F8D0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00, expected: 3, index: 1
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_ctor = 0x1401B6FF0 - ImageBase; // 40 53 48 83 EC 20 33 C0 C6 01 00, expected: 4, index: 2
constexpr uintptr_t CString_copy = 0x1401B7260 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 3B CA, expected: 8, index: 0
constexpr uintptr_t CString_dtor = 0x1401B7100 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8, expected: 1, index: 0
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x14021D1E0 - ImageBase; // 48 89 5C 24 18 48 89 6C 24 20 57 48 83 EC 60 33 ED, expected: 1, index: 0
constexpr uintptr_t Handle_DecWeakRef = 0x1401C1020 - ImageBase; // 40 53 48 83 EC 30 48 8B D9 48 8B 49 08 48 85 C9 74 43 B8 FF FF FF FF, expected: 1, index: 0
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_GetValueHolder = 0x1401FDDD0 - ImageBase; // 40 53 48 83 EC 20 48 83 79 38 00, expected: 4, index: 1
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x140C01330 - ImageBase; // 48 83 EC 48 48 8B 05 ? ? ? ? 48 85 C0 0F 85 8A 00 00 00, expected: 1, index: 0
#pragma endregion
} // namespace RED4ext::Addresses
