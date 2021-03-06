#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Types/SimpleTypes.hpp>
#endif

RED4EXT_INLINE RED4ext::TweakDBID::operator uint64_t() const noexcept
{
    return value;
}

RED4EXT_INLINE bool RED4ext::TweakDBID::operator==(const TweakDBID& aDBID) const noexcept
{
    return aDBID.nameHash == nameHash && aDBID.nameLength == nameLength;
}

RED4EXT_INLINE bool RED4ext::TweakDBID::IsValid() const noexcept
{
    return nameHash != 0 && nameLength != 0;
}

RED4EXT_INLINE uint32_t RED4ext::TweakDBID::ToTDBOffset() const noexcept
{
    // swaps 3 bytes
    // 01 02 03 FF -> 0xFF030201 -> 0x010203
    return (_byteswap_ulong(*reinterpret_cast<const uint32_t*>(&tdbOffset[0])) >> 8) & 0x00FFFFFF;
}
