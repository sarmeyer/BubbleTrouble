#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BubbleBehavior
struct  BubbleBehavior_t444746526  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject BubbleBehavior::explosion
	GameObject_t3674682005 * ___explosion_2;
	// System.Boolean BubbleBehavior::mouseEntered
	bool ___mouseEntered_3;
	// GameController BubbleBehavior::gameController
	GameController_t2782302542 * ___gameController_4;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(BubbleBehavior_t444746526, ___explosion_2)); }
	inline GameObject_t3674682005 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t3674682005 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t3674682005 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_mouseEntered_3() { return static_cast<int32_t>(offsetof(BubbleBehavior_t444746526, ___mouseEntered_3)); }
	inline bool get_mouseEntered_3() const { return ___mouseEntered_3; }
	inline bool* get_address_of_mouseEntered_3() { return &___mouseEntered_3; }
	inline void set_mouseEntered_3(bool value)
	{
		___mouseEntered_3 = value;
	}

	inline static int32_t get_offset_of_gameController_4() { return static_cast<int32_t>(offsetof(BubbleBehavior_t444746526, ___gameController_4)); }
	inline GameController_t2782302542 * get_gameController_4() const { return ___gameController_4; }
	inline GameController_t2782302542 ** get_address_of_gameController_4() { return &___gameController_4; }
	inline void set_gameController_4(GameController_t2782302542 * value)
	{
		___gameController_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
