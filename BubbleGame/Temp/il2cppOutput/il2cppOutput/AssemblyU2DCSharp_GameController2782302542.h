#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t3371372606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GUIText GameController::scoreText
	GUIText_t3371372606 * ___scoreText_2;
	// System.Int32 GameController::score
	int32_t ___score_3;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreText_2)); }
	inline GUIText_t3371372606 * get_scoreText_2() const { return ___scoreText_2; }
	inline GUIText_t3371372606 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(GUIText_t3371372606 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
