#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t1861242489  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] UIManager::pauseObjects
	GameObjectU5BU5D_t2662109048* ___pauseObjects_2;
	// UnityEngine.GameObject[] UIManager::pauseObjects2
	GameObjectU5BU5D_t2662109048* ___pauseObjects2_3;
	// UnityEngine.GameObject[] UIManager::playObjects
	GameObjectU5BU5D_t2662109048* ___playObjects_4;

public:
	inline static int32_t get_offset_of_pauseObjects_2() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___pauseObjects_2)); }
	inline GameObjectU5BU5D_t2662109048* get_pauseObjects_2() const { return ___pauseObjects_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_pauseObjects_2() { return &___pauseObjects_2; }
	inline void set_pauseObjects_2(GameObjectU5BU5D_t2662109048* value)
	{
		___pauseObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___pauseObjects_2, value);
	}

	inline static int32_t get_offset_of_pauseObjects2_3() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___pauseObjects2_3)); }
	inline GameObjectU5BU5D_t2662109048* get_pauseObjects2_3() const { return ___pauseObjects2_3; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_pauseObjects2_3() { return &___pauseObjects2_3; }
	inline void set_pauseObjects2_3(GameObjectU5BU5D_t2662109048* value)
	{
		___pauseObjects2_3 = value;
		Il2CppCodeGenWriteBarrier(&___pauseObjects2_3, value);
	}

	inline static int32_t get_offset_of_playObjects_4() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___playObjects_4)); }
	inline GameObjectU5BU5D_t2662109048* get_playObjects_4() const { return ___playObjects_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_playObjects_4() { return &___playObjects_4; }
	inline void set_playObjects_4(GameObjectU5BU5D_t2662109048* value)
	{
		___playObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___playObjects_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
