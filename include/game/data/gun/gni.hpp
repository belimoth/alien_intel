#pragma once

struct gni_t {
	float minradius;
	float maxradius;
	float incradius;
	float decbasespeed;
	float decremspeed;
};

 gni_t gni_0 = { 0,  0,   0,   1, 6 }; // silent
 gni_t gni_1 = { 0,  3,   1.4, 1, 6 }; // silenced
 gni_t gni_2 = { 0,  9,   2,   1, 6 }; // sniper
 gni_t gni_3 = { 0, 14,   2,   1, 6 }; // default
 gni_t gni_4 = { 0, 18,   2,   1, 6 }; // loud
 gni_t gni_5 = { 0, 22,   3,   1, 6 }; // louder
 gni_t gni_6 = { 0, 25,  15,   5, 6 }; // loudest
 gni_t gni_7 = { 0, 35,   1,   1, 6 }; // reaper
