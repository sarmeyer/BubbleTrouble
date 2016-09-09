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

// FinalScore
struct  FinalScore_t120578780  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 FinalScore::score
	int32_t ___score_2;
	// UnityEngine.GUIText FinalScore::finalScore
	GUIText_t3371372606 * ___finalScore_3;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(FinalScore_t120578780, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_finalScore_3() { return static_cast<int32_t>(offsetof(FinalScore_t120578780, ___finalScore_3)); }
	inline GUIText_t3371372606 * get_finalScore_3() const { return ___finalScore_3; }
	inline GUIText_t3371372606 ** get_address_of_finalScore_3() { return &___finalScore_3; }
	inline void set_finalScore_3(GUIText_t3371372606 * value)
	{
		___finalScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___finalScore_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
