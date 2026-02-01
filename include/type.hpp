#pragma once

#include <stdint.h>

struct ai1_model {

};

struct ai1_vec2 {
	float x, y;
};

struct ai1_vec3 {
	float x, y, z;
};

struct geocyl {

};

typedef int16_t ai_room;

struct ai_bot {

};

#define array_count( array ) ( sizeof(array) / sizeof(array[0]) )
