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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BubbleSpawnerController
struct  BubbleSpawnerController_t3171170264  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 BubbleSpawnerController::target
	Vector3_t4282066566  ___target_2;
	// System.Single BubbleSpawnerController::speed
	float ___speed_3;
	// System.Int32 BubbleSpawnerController::direction
	int32_t ___direction_4;
	// UnityEngine.Rigidbody2D BubbleSpawnerController::rb2d
	Rigidbody2D_t1743771669 * ___rb2d_5;
	// UnityEngine.Vector3 BubbleSpawnerController::screenPos
	Vector3_t4282066566  ___screenPos_6;
	// System.Single BubbleSpawnerController::spawnRate
	float ___spawnRate_7;
	// UnityEngine.GameObject BubbleSpawnerController::bubble
	GameObject_t3674682005 * ___bubble_8;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(BubbleSpawnerController_t3171170264, ___target_2)); }
	inline Vector3_t4282066566  get_target_2() const { return ___target_2; }
	inline Vector3_t4282066566 * get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Vector3_t4282066566  value)
	{
		___target_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BubbleSpawnerController_t3171170264, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(BubbleSpawnerController_t3171170264, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_rb2d_5() { return static_cast<int32_t>(offsetof(BubbleSpawnerController_t3171170264, ___rb2d_5)); }
	inline Rigidbody2D_t1743771669 * get_rb2d_5() const { return ___rb2d_5; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb2d_5() { return &___rb2d_5; }
	inline void set_rb2d_5(Rigidbody2D_t1743771669 * value)
	{
		___rb2d_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_5, value);
	}

	inline static int32_t get_offset_of_screenPos_6() { return static_cast<int32_t>(offsetof(BubbleSpawnerController_t3171170264, ___screenPos_6)); }
	inline Vector3_t4282066566  get_screenPos_6() const { return ___screenPos_6; }
	inline Vector3_t4282066566 * get_address_of_screenPos_6() { return &___screenPos_6; }
	inline void set_screenPos_6(Vector3_t4282066566  value)
	{
		___screenPos_6 = value;
	}

	inline static int32_t get_offset_of_spawnRate_7() { return static_cast<int32_t>(offsetof(BubbleSpawnerController_t3171170264, ___spawnRate_7)); }
	inline float get_spawnRate_7() const { return ___spawnRate_7; }
	inline float* get_address_of_spawnRate_7() { return &___spawnRate_7; }
	inline void set_spawnRate_7(float value)
	{
		___spawnRate_7 = value;
	}

	inline static int32_t get_offset_of_bubble_8() { return static_cast<int32_t>(offsetof(BubbleSpawnerController_t3171170264, ___bubble_8)); }
	inline GameObject_t3674682005 * get_bubble_8() const { return ___bubble_8; }
	inline GameObject_t3674682005 ** get_address_of_bubble_8() { return &___bubble_8; }
	inline void set_bubble_8(GameObject_t3674682005 * value)
	{
		___bubble_8 = value;
		Il2CppCodeGenWriteBarrier(&___bubble_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
