#pragma once

#include "game/chapter/ai1/data/gfxa.hpp"
#include "game/chapter/ai1/data/model.hpp"
#include "game/chapter/ai1/data/sfx.hpp"

#include "type.hpp"

// gun animation cmd

struct ai1_gac {
	uint8_t  type;
	uint8_t  unk01;
	uint16_t unk02;
	intptr_t unk04;
};

// before

// end
// show - show model part
// hide - hide model part
// hold - wait until z is released
// wait
// sfxp - play sound
// copy - include
// rand
// loop - loop until full
// drop - drop magnum bullets
// play - play animation
// sfxs - sound speed

#define end                                        { 0 },
#define show( keyframe, part)                      { 1, 0, keyframe, part },
#define hide( keyframe, part)                      { 2, 0, keyframe, part },
#define hold( keyframe)                            { 3, 0, keyframe },
#define wait( keyframe, time)                      { 4, 0, keyframe, time },
#define sfxp( keyframe, sound)                     { 5, 0, keyframe, sound },
#define copy( unk1, address)                       { 6, unk1, 0, (uintptr_t)address },
#define rand( probability, address)                { 7, 0, probability, (uintptr_t)address },
#define loop( triggerkey, dontloop, gototrigger) { 8, 0, triggerkey, (dontloop << 16) | gototrigger },
#define drop( unk1)                                { 9, 0, unk1 },
#define play( animation, direction, speed)         { 10, 0, animation, (direction << 16) | speed },
#define sfxs( keyframe, speed)                     { 11, 0, keyframe, speed },

ai1_gac gac_laser_equip[] = {
	play( gfxa_gun_laser_equip, 0, 10000 )
	end
};

ai1_gac gac_laser_unequip[] = {
	play( gfxa_gun_laser_unequip, 0, 10000 )
	end
};

// punch

ai1_gac gac_punch_type3[] = {
	play( gfxa_gun_unarmed_leftpunch, 0, 10000 )
	wait( 7, 2 )
	end
};

ai1_gac gac_punch_type1[] = {
	play( gfxa_gun_unarmed_rightpunch, 0, 10000 )
	wait( 8, 2 )
	end
};

ai1_gac gac_punch_type2[] = {
	play( gfxa_gun_unarmed_rightpush, 0, 10000 )
	wait( 7, 2 )
	end
};

ai1_gac gac_punch_type4[] = {
	play( gfxa_gun_unarmed_doublepunch, 0, 10000 )
	wait(  8, 2 )
	wait( 18, 3 )
	end
};

ai1_gac gac_punch[] = {
	rand( 20, gac_punch_type1 )
	rand( 40, gac_punch_type2 )
	rand( 60, gac_punch_type3 )
	copy(  0, gac_punch_type4 )
	end
};

// eagle

ai1_gac gac_eagle_reload[] = {
	play( gfxa_gun_eagle_reload, 0, 10000 )
	show( 1, part_hand_left )
	show( 1, part_eagle_mag_1 )
	show( 1, part_eagle_mag_0 )
	sfxp( 10, sfx_01D8 )
	hide( 19, part_eagle_mag_0 )
	wait( 24, 1 )
	sfxp( 24, sfx_80f6 )
	hide( 24, part_eagle_mag_1 )
	sfxp( 53, sfx_01DB )
	wait( 53, 3 )
	end
};

ai1_gac gac_eagle_h_reload[] = {
	play( gfxa_gun_eagle_reload_scope, 0, 10000 )
	show( 1, part_hand_left )
	show( 1, part_eagle_mag_1 )
	show( 1, part_eagle_mag_0 )
	sfxp( 10, sfx_01D8 )
	hide( 19, part_eagle_mag_0 )
	wait( 24, 1 )
	sfxp( 24, sfx_80f6 )
	hide( 24, part_eagle_mag_1 )
	sfxp( 53, sfx_01DB )
	wait( 53, 3 )
	end
};

ai1_gac gac_eagle_reload_dual[] = {
	play( gfxa_gun_eagle_reload_dual, 0, 10000 )
	hide( 1, part_eagle_mag_1 )
	show( 1, part_eagle_mag_0 )
	sfxp( 6, sfx_01D8 )
	wait( 50, 1 )
	sfxp( 50, sfx_80f6 )
	sfxp( 71, sfx_01DB )
	end
};

ai1_gac gac_eagle_reload[] = {
	copy( 1, gac_eagle_reload_dual )
	copy( 0, gac_eagle_reload )
	end
};

ai1_gac gac_eaglescope_reload[] = {
	copy( 1, gac_eagle_reload_dual )
	copy( 0, gac_eaglescope_reload )
	end
};

ai1_gac gac_eagle_whip[] = {
	play( gfxa_gun_eagle_whip, 0, 10000 )
	wait( 23, 2 )
	end
};

ai1_gac gac_eagle_equip[] = {
	play( gfxa_gun_eagle_equip, 0, 10000 )
	end
};

ai1_gac gac_eagle_unequip[] = {
	play( gfxa_gun_eagle_unequip, 0, 10000 )
	end
};

ai1_gac gac_eagle_shoot[] = {
	play( gfxa_gun_eagle_shoot, 0, 10000 )
	wait( 9, 5 )
	end
};

// auto9

ai1_gac gac_auto9_reload[] = {
	play( gfxa_gun_auto9_reload, 0, 10000 )
	show( 1, part_hand_left )
	show( 1, part_pistol_mag_0 )
	sfxs( 3, 1300 )
	sfxp( 3, sfx_01D8 )
	show( 10, part_pistol_mag_1 )
	hide( 14, part_pistol_mag_0 )
	hide( 22, part_pistol_mag_1 )
	show( 22, part_pistol_mag_0 )
	sfxs( 27, 1300 )
	sfxp( 27, sfx_80f6 )
	wait( 30, 1 )
	wait( 56, 3 )
	sfxs( 58, 1300 )
	sfxp( 58, sfx_01DB )
	end
};

ai1_gac gac_auto9_reload_dual[] = {
	play( gfxa_gun_auto9_reload_dual, 0, 10000 )
	show( 1, part_pistol_mag_0 )
	sfxs( 5, 1300 )
	sfxp( 5, sfx_01D8 )
	hide( 25, part_pistol_mag_0 )
	sfxs( 47, 1300 )
	sfxp( 47, sfx_80f6 )
	wait( 49, 1 )
	sfxs( 69, 1300 )
	sfxp( 69, sfx_01DB )
	end
};

ai1_gac gac_auto9_reload[] = {
	copy( 1, gac_auto9_reload_dual )
	copy( 0, gac_auto9_reload )
	end
};

ai1_gac gac_auto9_shoot[] = {
	play( gfxa_gun_auto9_shoot, 0, 10000 )
	wait( 12, 5 )
	end
};

// magnum

ai1_gac gac_magnum_shoot[] = {
	play( gfxa_gun_magnum_shoot, 0, 10000 )
	wait( 12, 5 )
	wait( 12, 2 )
	end
};

ai1_gac gac_magnum_reload_solo[] = {
	play( gfxa_gun_magnum_reload, 0, 10000 )
	sfxp( 50, sfx_05CF )
	sfxs( 80, 1830 )
	sfxp( 80, sfx_01D8 )
	drop( 80 )
	drop( 81 )
	drop( 82 )
	drop( 83 )
	drop( 84 )
	drop( 85 )
	show( 92, part_hand_left )
	show( 92, part_magnum_cart1 )
	show( 92, part_magnum_cart2 )
	show( 92, part_magnum_cart3 )
	show( 92, part_magnum_cart4 )
	show( 92, part_magnum_cart5 )
	show( 92, part_magnum_cart6 )
	sfxs( 114, 1210 )
	sfxp( 114, sfx_01D8 )
	hide( 121, part_magnum_cart1 )
	hide( 121, part_magnum_cart2 )
	hide( 121, part_magnum_cart3 )
	hide( 121, part_magnum_cart4 )
	hide( 121, part_magnum_cart5 )
	hide( 121, part_magnum_cart6 )
	wait( 123, 1 )
	sfxp( 147, sfx_05CD )
	end
};

ai1_gac gac_magnum_reload_dual[] = {
	play( gfxa_gun_magnum_reload_dual, 0, 10000 )
	sfxp( 50, sfx_05CF )
	sfxs( 80, 1830 )
	sfxp( 80, sfx_01D8 )
	drop( 80 )
	drop( 81 )
	drop( 82 )
	drop( 83 )
	drop( 84 )
	drop( 85 )
	sfxs( 114, 1210 )
	sfxp( 114, sfx_01D8 )
	wait( 123, 1 )
	sfxp( 147, sfx_05CD )
	end
};

ai1_gac gac_magnum_reload[] = {
	copy( 1, gac_magnum_reload_dual )
	copy( 0, gac_magnum_reload_solo )
	end
};

ai1_gac gac_magnum_whip[] = {
	play( gfxa_gun_magnum_whip, 0, 10000 )
	wait( 23, 2 )
	end
};

// zpistol

ai1_gac gac_zpistol_reload_solo[] = {
	play( gfxa_gun_zpistol_reload, 0, 10000 )
	show( 1, part_hand_left )
	show( 1, part_zpistol_orb )
	sfxs( 44, 1510 )
	sfxp( 44, sfx_zsniper_reload )
	hide( 50, part_zpistol_orb )
	end
};

ai1_gac gac_zpistol_reload_dual[] = {
	play( gfxa_gun_zpistol_reload_dual, 0, 10000 )
	show( 1, part_hand_left )
	show( 1, part_zpistol_orb )
	sfxs( 44, 1510 )
	sfxp( 44, sfx_zsniper_reload )
	hide( 50, part_zpistol_orb )
	end
};

ai1_gac gac_zpistol_equip[] = {
	copy( 1, gac_zpistol_reload_dual )
	copy( 0, gac_zpistol_reload_solo )
	end
};

ai1_gac gac_zpistol_shoot[] = {
	play( gfxa_gun_zpistol_shoot, 0, 10000 )
	wait( 9, 5 )
	end
};

// zblaster

ai1_gac gac_zblaster_shoot[] = {
	play( gfxa_gun_zblaster_shoot, 0, 10000 )
	wait( 9, 5 )
	end
};

ai1_gac gac_zblaster_reload_solo[] = {
	play( gfxa_gun_zblaster_reload, 0, 10000 )
	show( 0, part_hand_left )
	sfxs( 4, 1200 )
	sfxp( 4, sfx_0053 )
	show( 4, part_zblaster_mag_1 )
	hide( 18, part_zblaster_mag_0 )
	sfxs( 20, 2500 )
	sfxp( 20, sfx_door_8012 )
	wait( 25, 1 )
	show( 25, part_zblaster_mag_0 )
	hide( 25, part_zblaster_mag_1 )
	sfxs( 27, 2000 )
	sfxp( 27, sfx_05C5 )
	sfxs( 61, 1000 )
	sfxp( 61, sfx_01DB )
	wait( 61, 3 )
	end
};

ai1_gac gac_zblaster_reload_dual[] = {
	play( gfxa_gun_zblaster_reload_dual, 0, 10000 )
	sfxs( 14, 1200 )
	sfxp( 14, sfx_0053 )
	sfxs( 40, 2500 )
	sfxp( 40, sfx_door_8012 )
	sfxs( 47, 2000 )
	sfxp( 47, sfx_05C5 )
	wait( 47, 1 )
	sfxs( 68, 1000 )
	sfxp( 68, sfx_01DB )
	end
};

ai1_gac gac_zblaster_reload[] = {
	copy( 1, gac_zblaster_reload_dual )
	copy( 0, gac_zblaster_reload_solo )
	end
};

ai1_gac gac_unused_8007c0bc[] = {
	play( gfxa_03f6, 0, 10000 )
	end
};

// tmp

ai1_gac gac_tmp_reload[] = {
	play( gfxa_gun_tmp_reload, 0, 10000 )
	hide( 23, part_tmp_mag_0 )
	show( 33, part_hand_left )
	show( 33, part_tmp_mag_1 )
	sfxs( 9, 950 )
	sfxp( 9, sfx_01D8 )
	sfxs( 44, 950 )
	sfxp( 44, sfx_80f6 )
	hide( 45, part_tmp_mag_1 )
	show( 45, part_tmp_mag_0 )
	wait( 45, 1 )
	sfxp( 86, sfx_0431 )
	end
};

ai1_gac gac_tmp_reload_dual[] = {
	play( gfxa_gun_tmp_reload_dual, 0, 10000 )
	hide( 23, part_tmp_mag_0 )
	show( 33, part_hand_left )
	show( 33, part_tmp_mag_1 )
	sfxs( 20, 950 )
	sfxp( 20, sfx_01D8 )
	sfxs( 61, 950 )
	sfxp( 61, sfx_80f6 )
	hide( 61, part_tmp_mag_1 )
	show( 61, part_tmp_mag_0 )
	wait( 61, 1 )
	sfxp( 76, sfx_0431 )
	end
};

ai1_gac gac_tmp_reload[] = {
	copy( 1, gac_tmp_reload_dual )
	copy( 0, gac_tmp_reload )
	end
};

ai1_gac gac_tmp_shoot[] = {
	play( gfxa_gun_tmp_shoot, 0, 10000 )
	wait( 14, 5 )
	hold( 14 )
	end
};

// xsmg

ai1_gac gac_xsmg_reload[] = {
	play( gfxa_gun_xsmg_reload, 0, 10000 )
	show( 1, part_hand_left )
	show( 1, part_xsmg_magazine )
	sfxp( 60, sfx_05D3 )
	end
};

ai1_gac gac_xsmg_reload_dual[] = {
	play( gfxa_gun_xsmg_reload_dual, 0, 10000 )
	sfxp( 60, sfx_05D3 )
	end
};

ai1_gac gac_xsmg_equip[] = {
	copy( 1, gac_xsmg_reload_dual )
	copy( 0, gac_xsmg_reload )
	end
};

ai1_gac gac_xsmg_shoot[] = {
	play( gfxa_gun_xsmg_shoot, 0, 10000 )
	wait( 5, 5 )
	hold( 5 )
	end
};

// xp90


ai1_gac gac_xp90_reload[] = {
	play( gfxa_gun_xp90_reload, 0, 10000 )
	sfxs( 18, 1100 )
	sfxp( 18, sfx_0053 )
	show( 25, part_xp90_mag_0 )
	show( 50, part_xp90_mag_1 )
	sfxp( 74, sfx_05C5 )
	hide( 75, part_xp90_mag_1 )
	show( 75, part_xp90_mag_0 )
	sfxp( 112, sfx_0431 )
	end
};

ai1_gac gac_xp90_shoot[] = {
	play( gfxa_gun_xp90_shoot, 0, 10000 )
	wait( 10, 5 )
	hold( 10 )
	end
};

// zsmg

ai1_gac gac_zsmg_reload[] = {
	play( gfxa_gun_zsmg_reload, 0, 10000 )
	show( 30, part_zsmg_orb )
	sfxs( 58, 933 )
	sfxp( 58, sfx_zsniper_reload )
	hide( 79, part_zsmg_orb )
	end
};

ai1_gac gac_zsmg_shoot[] = {
	play( gfxa_gun_zsmg_shoot, 0, 10000 )
	wait( 8, 5 )
	hold( 8 )
	end
};

// g36

ai1_gac gac_g36_shoot[] = {
	play( gfxa_gun_g36_shoot, 0, 10000 )
	end
};

ai1_gac gac_g36_reload[] = {
	play( gfxa_gun_g36_reload, 0, 10000 )
	sfxp( 8, sfx_0053 )
	hide( 17, part_g36_mag_1 )
	show( 17, part_g36_mag_0 )
	wait( 41, 1 )
	sfxp( 41, sfx_05C5 )
	show( 41, part_g36_mag_1 )
	hide( 41, part_g36_mag_0 )
	end
};

// xg36

ai1_gac gac_xg36_reload[] = {
	play( gfxa_gun_xg36_reload_0, 0, 10000 )
	sfxp( 8, sfx_0053 )
	hide( 16, part_xg36_mag_2 )
	show( 16, part_xg36_mag_0 )
	sfxp( 41, sfx_05C5 )
	wait( 43, 1 )
	show( 43, part_xg36_mag_2 )
	hide( 43, part_xg36_mag_0 )
	end
};

ai1_gac gac_xg36_grenadereload[] = {
	play( gfxa_gun_xg36_reload_1, 0, 10000 )
	sfxs( 6, 700 )
	sfxp( 6, sfx_0053 )
	show( 30, part_xg36_mag_1 )
	hide( 30, part_xg36_mag_3 )
	hide( 64, part_xg36_mag_1 )
	show( 64, part_xg36_mag_3 )
	wait( 64, 1 )
	sfxs( 66, 850 )
	sfxp( 66, sfx_05C5 )
	end
};

ai1_gac gac_xg36_shoot[] = {
	play( gfxa_gun_xg36_shoot_0, 0, 10000 )
	end
};

ai1_gac gac_xg36_thump[] = {
	play( gfxa_gun_xg36_shoot_1, 0, 10000 )
	end
};

ai1_gac gac_xg36_0to1[] = {
	play( gfxa_gun_xg36_change, 0, 10000 )
	end
};

ai1_gac gac_xg36_1to0[] = {
	play( gfxa_gun_xg36_change, 65535, 55536 )
	end
};

// famas

ai1_gac gac_famas_reload[] = {
	play( gfxa_gun_famas_reload, 0, 10000 )
	sfxs( 16, 900 )
	sfxp( 16, sfx_0053 )
	hide( 21, part_famas_mag_0 )
	show( 50, part_famas_mag_1 )
	sfxs( 67, 1400 )
	sfxp( 67, sfx_8025 )
	hide( 72, part_famas_mag_1 )
	show( 72, part_famas_mag_0 )
	wait( 72, 1 )
	sfxs( 95, 900 )
	sfxp( 95, sfx_05C5 )
	end
};

// mp7

ai1_gac gac_mp7_reload[] = {
	play( gfxa_gun_mp7_reload, 0, 10000 )
	sfxs( 15, 1200 )
	sfxp( 15, sfx_0053 )
	hide( 22, part_mp7_mag_0 )
	show( 48, part_mp7_mag_1 )
	wait( 68, 1 )
	hide( 69, part_mp7_mag_1 )
	show( 69, part_mp7_mag_0 )
	sfxs( 69, 1400 )
	sfxp( 69, sfx_8025 )
	sfxp( 91, sfx_05C5 )
	end
};

ai1_gac gac_mp7_equip[] = {
	play( gfxa_gun_mp7_equip, 0, 10000 )
	end
};

ai1_gac gac_mp7_unequip[] = {
	play( gfxa_gun_mp7_unequip, 0, 10000 )
	end
};

// laptop

ai1_gac gac_laptop_reload[] = {
	play( gfxa_gun_laptop_reload, 0, 10000 )
	sfxs( 4, 1630 )
	sfxp( 4, sfx_reload_04FB )
	sfxs( 15, 1436 )
	sfxp( 15, sfx_04FA )
	sfxp( 25, sfx_04F7 )
	show( 40, part_laptop_mag_0 )
	sfxp( 42, sfx_0053 )
	show( 48, part_laptop_mag_1 )
	hide( 55, part_laptop_mag_0 )
	hide( 63, part_laptop_mag_1 )
	show( 63, part_laptop_mag_0 )
	sfxp( 63, sfx_04F8 )
	hide( 85, part_laptop_mag_0 )
	wait( 85, 1 )
	sfxp( 85, sfx_05C5 )
	sfxp( 91, sfx_04F9 )
	end
};

ai1_gac gac_laptop_shoot[] = {
	play( gfxa_gun_laptop_shoot, 0, 10000 )
	wait( 10, 5 )
	hold( 10 )
	end
};

ai1_gac gac_laptop_equip[] = {
	play( gfxa_gun_laptop_equip, 0, 10000 )
	sfxs( 15, 720 )
	sfxp( 15, sfx_04F7 )
	sfxp( 35, sfx_04F7 )
	sfxp( 58, sfx_04F8 )
	end
};

ai1_gac gac_laptop_unequip[] = {
	play( gfxa_gun_laptop_unequip, 0, 10000 )
	sfxp( 1, sfx_04F7 )
	sfxs( 25, 720 )
	sfxp( 25, sfx_04F7 )
	sfxp( 50, sfx_04F8 )
	end
};

// shotgun

ai1_gac gac_shotgun_reload[] = {
	play( gfxa_gun_shotgun_reload, 0, 10000 )
	show( 1, part_shotgun_cart )
	sfxp( 67, sfx_01D8 )
	wait( 74, 1 )
	hide( 75, part_shotgun_cart )
	loop( 0x0054, 0x0000, 0x0032 )
	sfxp( 103, sfx_reload_04FB )
	end
};

ai1_gac gac_shotgun_shoot[] = {
	play( gfxa_gun_shotgun_shoot_single, 0, 10000 )
	wait( 9, 2 )
	sfxp( 34, sfx_reload_04FB )
	end
};

ai1_gac gac_shotgun_burst[] = {
	play( gfxa_gun_shotgun_shoot_double, 0, 10000 )
	wait( 9, 2 )
	sfxp( 54, sfx_reload_04FB )
	end
};

// zlmg

ai1_gac gac_zlmg_shoot[] = {
	play( gfxa_gun_zlmg_shoot, 0, 10000 )
	wait( 12, 5 )
	end
};

ai1_gac gac_zlmg_reload[] = {
	play( gfxa_gun_zlmg_reload, 0, 10000 )
	sfxp( 49, sfx_05C7 )
	hide( 70, part_zlmg_mag_0 )
	show( 90, part_zlmg_mag_1 )
	sfxp( 124, sfx_05C6 )
	show( 134, part_zlmg_mag_0 )
	hide( 134, part_zlmg_mag_1 )
	wait( 134, 1 )
	end
};

ai1_gac gac_zlmg_equip[] = {
	play( gfxa_gun_zlmg_equip, 0, 10000 )
	end
};

ai1_gac gac_zlmg_unequip[] = {
	play( gfxa_gun_zlmg_unequip, 0, 10000 )
	end
};

// rocket

ai1_gac gac_rocket_reload[] = {
	play( gfxa_gun_rocket_reload, 0, 10000 )
	sfxs( 16, 900 )
	sfxp( 16, sfx_04F9 )
	sfxp( 40, sfx_0053 )
	show( 24, part_rocket_rocket )
	wait( 76, 1 )
	hide( 76, part_rocket_rocket )
	sfxp( 77, sfx_05D1 )
	sfxs( 106, 1000 )
	sfxp( 106, sfx_04F9 )
	sfxp( 123, sfx_0053 )
	sfxp( 135, sfx_04FA )
	end
};

ai1_gac gac_rocket_shoot[] = {
	play( gfxa_gun_rocket_shoot, 0, 10000 )
	end
};

// zrocket

ai1_gac gac_zrocket_shoot[] = {
	play( gfxa_gun_zrocket_shoot, 0, 10000 )
	end
};

ai1_gac gac_zrocket_reload[] = {
	play( gfxa_gun_zrocket_reload, 0, 10000 )
	sfxs( 52, 800 )
	sfxp( 52, sfx_0053 )
	sfxp( 79, sfx_espyhit )
	sfxs( 126, 900 )
	sfxp( 126, sfx_reload_04FB )
	end
};

// thumper

ai1_gac gac_thumper_shoot[] = {
	play( gfxa_gun_thumper_shoot, 0, 10000 )
	end
};

ai1_gac gac_thumper_reload[] = {
	play( gfxa_gun_thumper_reload, 0, 10000 )
	sfxs( 15, 600 )
	sfxp( 15, sfx_0053 )
	hide( 22, part_thumper_mag_1 )
	show( 36, part_thumper_mag_0 )
	sfxs( 47, 700 )
	sfxp( 47, sfx_05C5 )
	hide( 47, part_thumper_mag_0 )
	show( 47, part_thumper_mag_1 )
	wait( 47, 1 )
	sfxp( 66, sfx_05CC )
	end
};

// mine

ai1_gac gac_mine_equip[] = {
	play( gfxa_gun_mine_equip, 0, 10000 )
	end
};

ai1_gac gac_mine_unequip[] = {
	play( gfxa_gun_mine_unequip, 0, 10000 )
	end
};

ai1_gac gac_mine_throw[] = {
	play( gfxa_gun_mine_throw, 0, 10000 )
	hold( 10 )
	wait( 13, 2 )
	end
};

// rmine

ai1_gac gac_rmine_equip[] = {
	play( gfxa_gun_rmine_equip, 0, 10000 )
	end
};

ai1_gac gac_rmine_unequip[] = {
	play( gfxa_gun_rmine_unequip, 0, 10000 )
	end
};

ai1_gac gac_rmine_throw[] = {
	play( gfxa_gun_rmine_throw, 0, 10000 )
	hold( 10 )
	wait( 11, 2 )
	end
};

// ecm

ai1_gac gac_ecm_equip[] = {
	play( gfxa_gun_ecm_equip, 0, 10000 )
	end
};

ai1_gac gac_ecm_unequip[] = {
	play( gfxa_gun_ecm_unequip, 0, 10000 )
	end
};

ai1_gac gac_ecm_throw[] = {
	play( gfxa_gun_ecm_unequip, 0, 10000 )
	wait( 23, 2 )
	end
};

// grenade

ai1_gac gac_grenade_throw[] = {
	play( gfxa_gun_grenade_throw, 0, 10000 )
	drop( 6 )
	sfxp( 6, sfx_05C1 )
	hold( 43 )
	wait( 49, 2 )
	end
};

ai1_gac gac_grenade_equip[] = {
	play( gfxa_gun_grenade_equip, 0, 10000 )
	end
};

// zsniper

ai1_gac gac_zsniper_reload[] = {
	play( gfxa_gun_zsniper_reload, 0, 10000 )
	show( 1, part_zsniper_orb )
	sfxp( 72, sfx_zsniper_reload )
	wait( 76, 1 )
	hide( 82, part_zsniper_orb )
	end
};

ai1_gac gac_zsniper_shoot[] = {
	play( gfxa_gun_zsniper_shoot, 0, 10000 )
	end
};

// xbow

ai1_gac gac_xbow_reload[] = {
	play( gfxa_gun_xbow_reload, 0, 10000 )
	hide( 1, part_xbow_0028 )
	show( 1, part_xbow_bolt )
	show( 1, part_hand_left )
	hide( 19, part_xbow_0028 )
	show( 19, part_xbow_bolt )
	sfxp( 45, sfx_04FC )
	wait( 50, 1 )
	hide( 50, part_xbow_bolt )
	show( 50, part_xbow_0028 )
	loop( 0x0044, 0x0000, 0x0013 )
	end
};

ai1_gac gac_xbow_shoot[] = {
	play( gfxa_gun_xbow_shoot, 0, 10000 )
	hide( 20, part_xbow_0028 )
	sfxp( 37, sfx_04F8 )
	end
};

ai1_gac gac_xbow_unequip[] = {
	play( gfxa_gun_xbow_unequip, 0, 10000 )
	hide( 1, part_xbow_0028 )
	sfxp( 37, sfx_04F8 )
	end
};

ai1_gac gac_xbow_equip[] = {
	play( gfxa_gun_xbow_equip, 0, 10000 )
	sfxp( 32, sfx_04FC )
	sfxp( 75, sfx_04F8 )
	end
};

// tranq

ai1_gac gac_tranq_inject[] = {
	play( gfxa_gun_tranq_inject, 0, 10000 )
	wait( 18, 2 )
	end
};

ai1_gac gac_tranq_shoot[] = {
	play( gfxa_gun_tranq_shoot, 0, 10000 )
	wait( 7, 5 )
	end
};

ai1_gac gac_tranq_reload[] = {
	play( gfxa_gun_tranq_reload, 0, 10000 )
	show( 1, part_hand_left )
	show( 1, part_tranq_mag_0 )
	show( 1, part_tranq_mag_2 )
	hide( 1, part_tranq_mag_1 )
	drop( 1 )
	sfxs( 3, 3500 )
	sfxp( 3, sfx_door_8016 )
	wait( 39, 1 )
	hide( 39, part_tranq_mag_2 )
	show( 39, part_tranq_mag_1 )
	sfxs( 39, 3500 )
	sfxp( 39, sfx_hit_mud_8083 )
	sfxs( 63, 2070 )
	sfxp( 63, sfx_04F5 )
	sfxs( 72, 3000 )
	sfxp( 72, sfx_press_switch )
	end
};

// sniper

ai1_gac gac_sniper_equip[] = {
	play( gfxa_gun_sniper_equip, 0, 10000 )
	end
};

ai1_gac gac_sniper_reload[] = {
	play( gfxa_gun_sniper_reload, 0, 10000 )
	sfxs( 22, 850 )
	sfxp( 22, sfx_01D8 )
	show( 42, part_sniper_mag_1 )
	hide( 42, part_sniper_mag_0 )
	sfxs( 72, 850 )
	sfxp( 72, sfx_80f6 )
	hide( 72, part_sniper_mag_1 )
	show( 72, part_sniper_mag_0 )
	wait( 72, 1 )
	end
};

// ppk

ai1_gac gac_ppk_shoot[] = {
	play( gfxa_gun_ppk_shoot, 0, 10000 )
	wait( 10, 5 )
	end
};

// tt33

ai1_gac gac_tt33_shoot[] = {
	play( gfxa_gun_tt33_shoot, 0, 10000 )
	wait( 10, 5 )
	end
};

// knife

ai1_gac gac_knife_equip[] = {
	play( gfxa_gun_knife_equip, 0, 10000 )
	wait( 24, 2 )
	end
};

ai1_gac gac_knife_slash2[] = {
	play( gfxa_gun_knife_slash, 0, 10000 )
	wait( 24, 2 )
	end
};

ai1_gac gac_knife_slash[] = {
	rand( 50, gac_knife_slash2 )
	copy( 0, gac_knife_equip )
	end
};

ai1_gac gac_knife_0to1[] = {
	play( gfxa_gun_knife_change, 0, 10000 )
	sfxp( 30, sfx_80a7 )
	sfxp( 40, sfx_80a6 )
	end
};

ai1_gac gac_knife_1to0[] = {
	play( gfxa_gun_knife_change, 65535, 55536 )
	sfxp( 10, sfx_80a8 )
	sfxp( 20, sfx_80a6 )
	end
};

ai1_gac gac_knife_throw[] = {
	play( gfxa_gun_knife_throw, 0, 10000 )
	hold( 12 )
	wait( 16, 2 )
	end
};

ai1_gac gac_unused_8007f05c[] = {
	play( gfxa_041c, 0, 10000 )
	wait( 22, 1 )
	end
};

ai1_gac gac_knife_reload[] = {
	copy( 2, gac_knife_1to0 )
	copy( 0, gac_knife_0to1 )
	end
};

// uplink

ai1_gac gac_uplink_equip[] = {
	play( gfxa_gun_uplink_equip, 0, 10000 )
	end
};

ai1_gac gac_uplink_unequip[] = {
	play( gfxa_gun_uplink_unequip, 0, 10000 )
	end
};

ai1_gac gac_unused_8007f794[] = {
	play( gfxa_043b, 0, 10000 )
	end
};

// tester

ai1_gac gac_tester_shoot[] = {
	play( gfxa_gun_tester_shoot, 0, 10000 )
	end
};

// after

#undef end
#undef show
#undef hide
#undef hold
#undef wait
#undef sfxp
#undef copy
#undef rand
#undef repe
#undef drop
#undef play
#undef sfxs
