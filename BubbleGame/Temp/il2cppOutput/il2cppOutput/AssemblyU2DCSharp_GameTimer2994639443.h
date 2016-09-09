#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTimer
struct  GameTimer_t2994639443  : public MonoBehaviour_t667441552
{
public:
	// System.Single GameTimer::timeRemaining
	float ___timeRemaining_2;
	// UnityEngine.UI.Text GameTimer::TimerText
	Text_t9039225 * ___TimerText_3;
	// UnityEngine.GameObject[] GameTimer::timeoutObjects
	GameObjectU5BU5D_t2662109048* ___timeoutObjects_4;
	// UnityEngine.GameObject[] GameTimer::timeoutObjects2
	GameObjectU5BU5D_t2662109048* ___timeoutObjects2_5;
	// UnityEngine.GameObject[] GameTimer::hideOnTimeout
	GameObjectU5BU5D_t2662109048* ___hideOnTimeout_6;

public:
	inline static int32_t get_offset_of_timeRemaining_2() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___timeRemaining_2)); }
	inline float get_timeRemaining_2() const { return ___timeRemaining_2; }
	inline float* get_address_of_timeRemaining_2() { return &___timeRemaining_2; }
	inline void set_timeRemaining_2(float value)
	{
		___timeRemaining_2 = value;
	}

	inline static int32_t get_offset_of_TimerText_3() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___TimerText_3)); }
	inline Text_t9039225 * get_TimerText_3() const { return ___TimerText_3; }
	inline Text_t9039225 ** get_address_of_TimerText_3() { return &___TimerText_3; }
	inline void set_TimerText_3(Text_t9039225 * value)
	{
		___TimerText_3 = value;
		Il2CppCodeGenWriteBarrier(&___TimerText_3, value);
	}

	inline static int32_t get_offset_of_timeoutObjects_4() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___timeoutObjects_4)); }
	inline GameObjectU5BU5D_t2662109048* get_timeoutObjects_4() const { return ___timeoutObjects_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_timeoutObjects_4() { return &___timeoutObjects_4; }
	inline void set_timeoutObjects_4(GameObjectU5BU5D_t2662109048* value)
	{
		___timeoutObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___timeoutObjects_4, value);
	}

	inline static int32_t get_offset_of_timeoutObjects2_5() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___timeoutObjects2_5)); }
	inline GameObjectU5BU5D_t2662109048* get_timeoutObjects2_5() const { return ___timeoutObjects2_5; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_timeoutObjects2_5() { return &___timeoutObjects2_5; }
	inline void set_timeoutObjects2_5(GameObjectU5BU5D_t2662109048* value)
	{
		___timeoutObjects2_5 = value;
		Il2CppCodeGenWriteBarrier(&___timeoutObjects2_5, value);
	}

	inline static int32_t get_offset_of_hideOnTimeout_6() { return static_cast<int32_t>(offsetof(GameTimer_t2994639443, ___hideOnTimeout_6)); }
	inline GameObjectU5BU5D_t2662109048* get_hideOnTimeout_6() const { return ___hideOnTimeout_6; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_hideOnTimeout_6() { return &___hideOnTimeout_6; }
	inline void set_hideOnTimeout_6(GameObjectU5BU5D_t2662109048* value)
	{
		___hideOnTimeout_6 = value;
		Il2CppCodeGenWriteBarrier(&___hideOnTimeout_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
