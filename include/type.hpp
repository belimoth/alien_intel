#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <math.h>

#define and &&
#define or  ||
#define not !

struct float2 {
	float x, y;
};

struct float3 {
	float x, y, z;
};

struct geocyl {

};

struct ai1_bot {

};

// array

#define array_count( array ) ( sizeof(array) / sizeof(array[0]) )

// flag

#define fone( self, flag )       ( (self) & (flag) )
#define fnot( self, flag )       ( (self) & (flag) == 0      )
#define fhas( self, flag )       ( (self) & (flag) == (flag) )
#define fhax( self, flag, mask ) ( (self) & (flag) == (mask) )
