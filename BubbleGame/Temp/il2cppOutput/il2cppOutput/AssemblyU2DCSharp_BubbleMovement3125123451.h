#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BubbleMovement
struct  BubbleMovement_t3125123451  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 BubbleMovement::target
	Vector3_t4282066566  ___target_2;
	// System.Single BubbleMovement::speed
	float ___speed_3;
	// UnityEngine.Rigidbody2D BubbleMovement::rb2d
	Rigidbody2D_t1743771669 * ___rb2d_4;
	// UnityEngine.Vector3 BubbleMovement::screenPos
	Vector3_t4282066566  ___screenPos_5;
	// System.Int32 BubbleMovement::direction
	int32_t ___direction_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(BubbleMovement_t3125123451, ___target_2)); }
	inline Vector3_t4282066566  get_target_2() const { return ___target_2; }
	inline Vector3_t4282066566 * get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Vector3_t4282066566  value)
	{
		___target_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BubbleMovement_t3125123451, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_rb2d_4() { return static_cast<int32_t>(offsetof(BubbleMovement_t3125123451, ___rb2d_4)); }
	inline Rigidbody2D_t1743771669 * get_rb2d_4() const { return ___rb2d_4; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb2d_4() { return &___rb2d_4; }
	inline void set_rb2d_4(Rigidbody2D_t1743771669 * value)
	{
		___rb2d_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_4, value);
	}

	inline static int32_t get_offset_of_screenPos_5() { return static_cast<int32_t>(offsetof(BubbleMovement_t3125123451, ___screenPos_5)); }
	inline Vector3_t4282066566  get_screenPos_5() const { return ___screenPos_5; }
	inline Vector3_t4282066566 * get_address_of_screenPos_5() { return &___screenPos_5; }
	inline void set_screenPos_5(Vector3_t4282066566  value)
	{
		___screenPos_5 = value;
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(BubbleMovement_t3125123451, ___direction_6)); }
	inline int32_t get_direction_6() const { return ___direction_6; }
	inline int32_t* get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(int32_t value)
	{
		___direction_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
