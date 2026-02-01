#pragma once

struct ai1_gni {
	float minradius;
	float maxradius;
	float incradius;
	float decbasespeed;
	float decremspeed;
};

 ai1_gni gni_0 = { 0,  0,   0,   1, 6 }; // silent
 ai1_gni gni_1 = { 0,  3,   1.4, 1, 6 }; // silenced
 ai1_gni gni_2 = { 0,  9,   2,   1, 6 }; // sniper
 ai1_gni gni_3 = { 0, 14,   2,   1, 6 }; // default
 ai1_gni gni_4 = { 0, 18,   2,   1, 6 }; // loud
 ai1_gni gni_5 = { 0, 22,   3,   1, 6 }; // louder
 ai1_gni gni_6 = { 0, 25,  15,   5, 6 }; // loudest
 ai1_gni gni_7 = { 0, 35,   1,   1, 6 }; // reaper
