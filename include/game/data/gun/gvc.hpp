#pragma once

#include "../model.hpp"

#include "type.hpp"

// model part vis

struct mpv_t {
	uint8_t part;
	uint8_t vis;
};

#define gvo_if_true_show 0
#define gvo_if_true_hide 1
#define gvo_set_vis      3

// before

#define end                                      { 0 },
#define hide( part )                             { 1, 0, gvo_if_true_hide, part, 0 } ,
#define check_upgrade( upgrade, operator, part ) { 4, upgrade, operator, part, 0 },
#define check_left( operator, part )             { 5, 0, operator, part, 0 },
#define check_right( operator, part )            { 6, 0, operator, part, 0 },

// gun vis cmd

struct gvc_t {
	uint8_t  type;
	uint16_t param;
	uint8_t  op;
	uint16_t part;
	uint16_t unk08;
};

// eagle

mpv_t mpv_eagle[] = {
	{ part_gun_muzzleflash1, false },
	{ part_eagle_mag_0,      false },
	{ part_eagle_mag_1,      false },
	{ part_eagle_scope,      false },
	{ part_eagle_s,   false },
	{ part_eagle_002E,       false },
	{ part_eagle_002F,       false },
	{ 255 },
};

mpv_t mpv_eagle_h[] = {
	{ part_gun_muzzleflash1, false },
	{ part_eagle_mag_0,      false },
	{ part_eagle_mag_1,      false },
	{ part_eagle_s,   false },
	{ part_eagle_002F,       false },
	{ 255 },
};

mpv_t mpv_eagle_s[] = {
	{ part_gun_muzzleflash1, false },
	{ part_eagle_mag_0,      false },
	{ part_eagle_mag_1,      false },
	{ part_eagle_scope,      false },
	{ part_eagle_002E,       false },
	{ 255 },
};

gvc_t gvc_eagle[] = {
	hide( part_eagle_mag_0 )
	hide( part_eagle_mag_1 )
	hide( part_eagle_scope )
	hide( part_eagle_s )
	hide( part_eagle_002E )
	hide( part_eagle_002F )
	hide( part_hand_left )
	end
};

gvc_t gvc_eagle_h[] = {
	hide( part_eagle_mag_0 )
	hide( part_eagle_mag_1 )
	hide( part_eagle_s )
	hide( part_eagle_002E )
	hide( part_eagle_002F )
	hide( part_hand_left )
	end
};

gvc_t gvc_eagle_s[] = {
	hide( part_eagle_mag_0 )
	hide( part_eagle_mag_1 )
	hide( part_eagle_scope )
	hide( part_eagle_002E )
	hide( part_eagle_002F )
	hide( part_hand_left )
	end
};

// auto9

mpv_t mpv_auto9[] = {
	{ part_gun_muzzleflash1, false },
	{ part_pistol_mag_0, false },
	{ part_pistol_mag_1, false },
	{ 255 },
};

gvc_t gvc_auto9[] = {
	hide( part_hand_left )
	hide( part_pistol_mag_1 )
	hide( part_pistol_mag_0 )
	end
};

// magnum

mpv_t mpv_magnum[] = {
	{ part_gun_muzzleflash1, false },
	{ part_magnum_cart1,     false },
	{ part_magnum_cart2,     false },
	{ part_magnum_cart3,     false },
	{ part_magnum_cart4,     false },
	{ part_magnum_cart5,     false },
	{ part_magnum_cart6,     false },
	{ 255 },
};

gvc_t gvc_magnum[] = {
	hide( part_magnum_cart1 )
	hide( part_magnum_cart2 )
	hide( part_magnum_cart3 )
	hide( part_magnum_cart4 )
	hide( part_magnum_cart5 )
	hide( part_magnum_cart6 )
	hide( part_hand_left )
	end
};

// zpistol

mpv_t mpv_zpistol[] = {
	{ part_zpistol_orb, false },
	{ 255 },
};

gvc_t gvc_zpistol[] = {
	hide( part_zpistol_orb )
	hide( part_hand_left )
	end
};

// zblaster

mpv_t mpv_zblaster[] = {
	{ part_zblaster_mag_1, false },
	{ part_gun_muzzleflash1, false },
	{ 255 },
};

gvc_t gvc_zblaster[] = {
	hide( part_hand_left )
	hide( part_zblaster_mag_1 )
	end
};

// tmp

mpv_t mpv_tmp[] = {
	{ part_gun_muzzleflash1, false },
	{ part_tmp_mag_1, false },
	{ 255 },
};

gvc_t gvc_tmp[] = {
	hide( part_hand_left )
	hide( part_tmp_mag_1 )
	hide( part_gun_cartflapopen )
	end
};

// xsmg

mpv_t mpv_xsmg[] = {
	{ part_gun_muzzleflash1, false },
	{ part_xsmg_magazine, false },
	{ 255 },
};

gvc_t gvc_xsmg[] = {
	hide( part_hand_left )
	hide( part_xsmg_magazine )
	end
};

// xp90

mpv_t mpv_xp90[] = {
	{ part_gun_muzzleflash1, false },
	{ part_xp90_mag_1, false },
	{ 255 },
};

gvc_t gvc_xp90[] = {
	hide( part_xp90_mag_1 )
	end
};

// zsmg

mpv_t mpv_zsmg[] = {
	{ part_zsmg_orb, false },
	{ 255 },
};

gvc_t gvc_zsmg[] = {
	hide( part_zsmg_orb )
	end
};

// g36

gvc_t gvc_g36[] = {
	hide( part_g36_mag_0 )
	end
};

mpv_t mpv_g36[] = {
	{ part_g36_mag_0,      false },
	{ part_gun_muzzleflash1, false },
	{ 255 },
};

// xg36

gvc_t gvc_xg36[] = {
	hide( part_xg36_mag_0 )
	hide( part_xg36_mag_1 )
	end
};

mpv_t mpv_xg36[] = {
	{ part_xg36_mag_0,     false },
	{ part_xg36_mag_1,     false },
	{ part_gun_muzzleflash1, false },
	{ 255 },
};

// famas

gvc_t gvc_famas[] = {
	hide( part_famas_mag_1 )
	end
};

mpv_t mpv_famas[] = {
	{ part_famas_mag_1,       false },
	{ part_gun_muzzleflash1, false },
	{ 255 },
};

// mp7

gvc_t gvc_mp7[] = {
	hide( part_mp7_mag_1 )
	end
};

mpv_t mpv_mp7[] = {
	{ part_mp7_mag_1, false },
	{ part_gun_muzzleflash1, false },
	{ 255 },
};

// laptop

gvc_t gvc_laptop[] = {
	hide( part_laptop_mag_1 )
	hide( part_laptop_mag_0 )
	end
};

mpv_t mpv_laptop[] = {
	{ part_gun_muzzleflash1, false },
	{ part_laptop_mag_0, false },
	{ part_laptop_mag_1, false },
	{ 255 },
};

// shotgun

gvc_t gvc_shotgun[] = {
	hide( part_shotgun_cart )
	end
};

mpv_t mpv_shotgun[] = {
	{ part_shotgun_cart, false },
	{ part_gun_muzzleflash1, false },
	{ 255 },
};

// zlmg

mpv_t mpv_zlmg[] = {
	{ part_gun_muzzleflash1, false },
	{ part_gun_muzzleflash2, false },
	{ part_gun_muzzleflash3, false },
	{ part_zlmg_mag_1, false },
	{ 255 },
};

gvc_t gvc_zlmg[] = {
	hide( part_zlmg_mag_1 )
	end
};

// rocket

mpv_t mpv_rocket[] = {
	{ part_rocket_rocket, false },
	{ 255 },
};

gvc_t gvc_rocket[] = {
	hide( part_rocket_rocket )
	end
};

// thumper

mpv_t mpv_thumper[] = {
	{ part_thumper_mag_0, false },
	{ 255 },
};

gvc_t gvc_thumper[] = {
	hide( part_thumper_mag_0 )
	end
};

// rmine

gvc_t gvc_rmine[] = {
	check_left ( gvo_set_vis, part_hand_left       )
	check_left ( gvo_set_vis, part_rmine_detonator )
	check_right( gvo_set_vis, part_hand_right      )
	check_right( gvo_set_vis, part_rmine_mine      )
	end
};

mpv_t mpv_rmine[] = {
	{ part_rmine_detonator, false },
	{ 255 },
};

// grenade

gvc_t gvc_grenade[] = {
	hide( part_hand_left )
	end
};

// zsniper

gvc_t gvc_zsniper[] = {
	hide( 0x0028 )
	end
};

mpv_t mpv_zsniper[] = {
	{ part_zsniper_orb, false },
	{ 255 },
};

// xbow

mpv_t mpv_xbow[] = {
	{ part_xbow_0028,   false },
	{ part_xbow_bolt,   false },
	{ part_xbow_handle, false },
	{ 255 },
};

gvc_t gvc_xbow[] = {
	hide( part_hand_left )
	hide( 0x0029 )
	end
};

// tranq

gvc_t gvc_tranq[] = {
	hide( 0x0028 )
	hide( part_hand_left )
	end
};

mpv_t mpv_tranq[] = {
	{ part_tranq_mag_0, false },
	{ part_tranq_mag_1, false },
	{ part_tranq_mag_2, false },
	{ 255 },
};

// sinper

gvc_t gvc_sniper[] = {
	hide( 0x0029 )
	end
};

mpv_t mpv_sniper[] = {
	{ part_sniper_mag_1, false },
	{ 255 },
};

// classic

mpv_t mpv_classic[] = {
	{ part_gun_muzzleflash1, false },
	{ 255 },
};

gvc_t gvc_classic[] = {
	hide( part_hand_left )
	end
};

// knife

gvc_t gvc_knife[] = {
	hide( part_hand_left )
	end
};

// after

#undef end
#undef hide
#undef check_upgrade
#undef check_left
#undef check_right
