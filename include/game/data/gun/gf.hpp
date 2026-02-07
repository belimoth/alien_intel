#pragma once

#include "gac.hpp"
#include "gni.hpp"
#include "gri.hpp"
#include "name.hpp"

#include "game/data/sfx.hpp"

#include "type.hpp"

// gun function flag

#define gff_00000001 0x00000001
#define gff_burst_3  0x00000002
#define gff_burst_50 0x00000020
#define gff_no_aa    0x00000040 // no auto-aim
#define gff_sticky   0x00000100
#define gff_dizzy    0x00000200
#define gff_disarm   0x00000400
#define gff_zrocket  0x00000800
#define gff_burst_2  0x00001000
#define gff_no_flash 0x00002000
#define gff_zpistol  0x00004000
#define gff_blunt    0x00008000
#define gff_no_stun  0x00010000
#define gff_burst_5  0x00020000
#define gff_discard  0x00040000 // g36 and laptop throw
#define gff_threat   0x00080000
#define gff_no_swap  0x00100000
#define gff_psycho   0x00200000
#define gff_melee    0x00400000 // punch, disarm and pistol whip
#define gff_throw    0x00800000 // throwables will land on crosshair
#define gff_rocket   0x08000000
#define gff_thumper  0x10000000
#define gff_contact  0x20000000
#define gff_homing   0x40000000
#define gff_feather  0x80000000

// gun function type

#define gft_none  0x0000
#define gft_shoot 0x0001
#define gft_shoot 0x0001
#define gft_burst 0x0101
#define gft_thump 0x0201
#define gft_0200  0x0200
#define gft_throw 0x0002
#define gft_melee 0x0003
#define gft_other 0x0004
#define gft_gizmo 0x0005

// hand attack type

#define hat_shoot           1
#define hat_shootprojectile 2
#define hat_throwprojectile 3
#define hat_melee           4
#define hat_detonate        5
#define hat_boost           6
#define hat_revertboost     7
#define hat_crouch          8
#define hat_xp90_cloak      9
#define hat_meleenouncloak  10
#define hat_uplink          12

#define device_nvg         0x01
#define device_xray        0x02
#define device_espy        0x04
#define device_irg         0x08
#define device_radar       0x10
#define device_cyanide     0x20
#define device_cloak       0x40
#define DEVICE_CLOAKRCP120 0x80

// gun function base (prototype)

struct gfp {
	int      type;
	uint16_t name;
	int8_t   ammo; // -1 = no ammo, 0 or 1 = index into weapon->ammos[]
	gni_t   *gni;
	gac_t   *gac;  // fire animation
	uint32_t flag;
};

// gun function shoot base

struct gf_shoot_base {
	gfp base;

	gri_t *gri;
	int8_t time_recover;
	float  damage;
	float  spread;

	// setting these 4 bytes to higher values causes slower recoil animations after shooting

	int8_t unk24;
	int8_t unk25;
	int8_t unk26;
	int8_t unk27;

	//

	float    recoildist;
	float    recoilangle;
	float    slidemax;
	float    impactforce;
	uint8_t  duration60;
	uint16_t shootsound;
	uint8_t  penetration;
};

// gun function shoot

struct gfs {
	gf_shoot_base base;
};

// gun function burst

struct gfb {
	gf_shoot_base base;

	float  rpm_initial;
	float  rpm_max;
	float *vibrationstart;
	float *vibrationmax;
	int8_t turretaccel;
	int8_t turretdecel;
};

struct gf_thump {
	gf_shoot_base base;

	int     model_arrow_i;
	float   scale;
	int     speed;
	float   unk50;
	int     traveldist;
	int     timer60;
	float   reflectangle;
	int16_t soundnum;
};

// gun function throw

struct gf_throw {
	gfp base;

	int     model_arrow_i;

	int16_t time_activate; // time until proxies become active, or timed mine/grenade explode
	int     time_recover;  // time before player can throw another
	float   damage;
};

// gun function melee

struct gfm {
	gfp base;

	float damage;
	float range;
};

// gun function other

struct gfo {
	gfp base;

	int specialfunc;
	int time_recover;
};

// gun function device

struct gfd {
	gfp base;
	uint32_t device;
};

#define gffx_punch   0         | gff_no_flash | gff_dizzy | gff_blunt | gff_no_stun | gff_melee
#define gffx_knife   0         | gff_no_flash | gff_throw
#define gffx_no_swap 0         | gff_no_flash | gff_no_swap
#define gffx_xbow_0  0         | gff_no_flash | gff_throw
#define gffx_xbow_1  0         | gff_no_flash | gff_throw | gff_dizzy
#define gffx_throw   gff_no_aa | gff_no_flash | gff_throw
#define gffx_nbomb   gff_no_aa | gff_no_flash | gff_dizzy | gff_disarm
#define gffx_frag    gff_no_aa | gff_no_flash
#define gffx_g36     gff_no_aa | gff_no_flash | gff_discard
#define gffx_mp7     0         | gff_no_flash | gff_burst_3 | gff_threat
#define gffx_thumper gff_no_aa | gff_thumper  | gff_contact
#define gffx_rocket  gff_no_aa | gff_rocket
#define gffx_psycho  gff_dizzy | gff_psycho

#define gffx_laptop  gffx_throw   | gff_sticky | gff_discard
#define gffx_disarm  gffx_punch   | gff_disarm
#define gffx_sticky  gffx_thumper | gff_sticky
#define gffx_homing  gffx_rocket  | gff_homing
#define gffx_zrocket gffx_rocket  | gff_zrocket | gff_contact

#define eagle_shoot     16,   1,    1,  3,  5,  2,  0, 10, 15, 59.999996185303,  0,  0
#define auto9_shoot     16,   1.1,  6,  4,  8,  3,  0,  5, 10, 59.999996185303, 10,  0
#define auto9_burst     16,   1.1, 10,  9, 14,  0,  0,  8, 12, 59.999996185303, 10,  0
#define magnum_shoot    20,   2,    0,  8, 16,  0, -1, 12,  5,  0,               6,  0
#define gmagnum_shoot   30, 200,    0,  8, 24,  0, -1, 12,  5,  0,               6,  0
#define zpistol_shoot   16,   1.1,  3,  3,  5,  2,  0, 10,  5, 59.999996185303,  0,  0
#define zpistol_burst   16,   1.2,  5, 13, 15, 25,  0, 15,  5, 59.999996185303,  0,  0
#define zblaster_shoot   0,   1.2,  6,  3,  9, 32, 28,  0,  0, 59.999996185303,  4,  0
#define zblaster_burst  0,   1.2,  6,  3,  9, 32, 28,  0,  0, 59.999996185303,  4,  0
#define shotgun_shoot    0,   0.6, 30, 20, 28,  0,  0,  0,  0,  0,               4,  0
#define shotgun_burst    0,   0.6, 16, 20, 28,  0,  0,  0,  0,  0,               4,  0
#define zsniper_shoot    0, 100,    0, 70, 40,  0,  0,  0,  0,  0,               0,  4
#define zsniper_seek     0, 100,    0, 70, 40,  0,  0,  0,  0,  0,               0,  4
#define tranq_shoot     16,   0.25, 3,  3,  5,  5,  0,  1,  0, 59.999996185303,  0,  0
#define psycho_shoot    16,   0.5,  3,  3,  5,  5,  0,  1,  0, 59.999996185303,  0,  0
#define sniper_shoot    16,   1.2,  0,  6, 10,  0,  0,  8,  0,  0,               0,  4
#define laser_pulse      0,   1,    0,  6, 18, 24, -1,  0,  0,  0,               0,  3
#define ppk_shoot       16,   1,    1,  4,  8,  3,  0,  3,  0, 29.999998092651,  0,  0
#define tt33_shoot      16,   1,    6,  4,  8,  3,  0,  5,  0, 59.999996185303,  0,  0
#define tester          16,   1,    6,  4,  8,  3,  0,  0,  0, 59.999996185303,  0,  0

#define tmp_rapid        0,   1,    9,  6, 18,  0,  6,  4,  3,  0,               0,  3
#define tmp_follow       0,   1,    9,  6, 18,  0,  6,  4,  3,  0,               0,  3
#define xsmg_rapid       0,   0.8,  6,  6, 18,  2,  8,  5,  2,  0,               4,  4
#define xsmg_burst       0,   1.4, 25,  6, 18,  2,  8,  5,  2,  0,               4,  4
#define xp90_rapid       0,   1.2,  6,  6, 18,  0,  6,  4,  3,  0,               0,  4
#define zsmg_rapid       0,   1.2,  9,  6, 18,  0,  6,  4,  3,  0,               0,  3
#define zsmg_burst       0,   2.4,  9,  6, 18,  0,  6,  4,  3,  0,               0,  3
#define g36_rapid        0,   1.1,  6,  6, 18,  2,  8,  5,  2,  0,               4,  4
#define xg36_rapid       0,   1.2,  6,  6, 18,  2,  8,  5,  2,  0,               4,  4
#define famas_burst      0,   1.4,  8,  6, 18,  2,  8,  5,  2,  0,               4,  5
#define famas_zoom       0,   1.4,  8,  6, 18,  2,  8,  5,  2,  0,               4,  5
#define mp7_burst        0,   1.5,  6,  6, 18,  2,  8,  5,  2,  0,               4,  4
#define mp7_threat       0,   1.5,  6,  6, 18,  2,  8,  5,  2,  0,               4,  4
#define laptop_burst     0,   1.15, 6,  6, 18,  2,  8,  5,  2,  0,               4,  4
#define zlmg_shoot       0,   1.2, 56,  3,  9, 32, 28,  0,  0,  0,               4,  2
#define laser_stream     0,   0.1,  0,  6, 18,  0,  6,  4,  3,  0,               0,  3
#define vz61_shoot       0,   0.6, 15,  0,  0,  0,  6,  0,  0,  0,               0, 11
#define akms_shoot       0,   1,   10,  4, 12,  0,  6,  5,  2,  0,               3,  4
#define uzi_shoot        0,   1,    9,  6, 18,  0,  6,  4,  3,  0,               0,  4
#define mp5k_shoot       0,   1,    7,  6, 18,  0,  6,  4,  3,  0,               0,  4
#define m16_shoot        0,   1.4,  6,  6, 18,  2,  8,  5,  2,  0,               4,  5
#define p90_shoot        0,   1.8,  6,  4,  8,  0,  3,  5,  2,  0,               4,  2
#define chopper          0,   1,    6,  6, 18,  2,  8,  5,  2,  0,               4,  4
#define watch            0,   1,    6,  6, 18,  2,  8,  5,  2,  0,               4,  4

float vib_zlmg_start[] = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 };
float vib_zlmg_max[]   = { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 };
#define vib_zlmg vib_zlmg_start, vib_zlmg_max, 88, 88

#define rpm_zsmg    300,  300
#define rpm_m16     550,  550
#define rpm_uzi     600,  600
#define rpm_g36     700,  700
#define rpm_famas   750,  750
#define rpm_smg     900,  900
#define rpm_mp7     950,  950
#define rpm_laptop 1000, 1000
#define rpm_xp90   1100, 1100
#define rpm_xsmg   2000, 2000
#define rpm_laser  3600, 3600
#define rpm_akms    450,  450
#define rpm_zlmg     60, 1800, vib_zlmg

#define throw_60  240, 60, 60
#define throw_0   240, 60,  0
#define bounce     90, 60, 60

gfp gf_mine_threat     = { gft_none, gun_name_119,  -1, &gni_0, 0,                  gff_threat };
gfp gf_briefcase_use   = { gft_none, gun_name_000,   0, &gni_0, 0,                  0          };
gfp gf_hscanner        = { gft_none, gun_name_139,  -1, &gni_0, 0,                  0          };
gfp gf_guise           = { gft_none, gun_name_143,  -1, &gni_0, 0,                  0          };

gfd gf_nvg             = { gft_gizmo, gun_name_135,  0, &gni_0, 0,                  gff_no_flash, device_nvg     };
gfd gf_cloak           = { gft_gizmo, gun_name_116,  0, &gni_0, 0,                  gff_no_flash, device_cloak   };
gfd gf_cyanide         = { gft_gizmo, gun_name_000,  0, &gni_0, 0,                  gff_no_flash, device_cyanide };
gfd gf_irg             = { gft_gizmo, gun_name_138,  0, &gni_0, 0,                  gff_no_flash, device_irg     };
gfd gf_espy_deploy     = { gft_gizmo, gun_name_136,  0, &gni_0, 0,                  gff_no_flash, device_espy    };
gfd gf_rtracker        = { gft_gizmo, gun_name_142,  0, &gni_0, 0,                  gff_no_flash, device_radar   };
gfd gf_xray            = { gft_gizmo, gun_name_137,  0, &gni_0, 0,                  gff_no_flash, device_xray    };
gfd gf_pscanner        = { gft_gizmo, gun_name_142,  0, &gni_0, 0,                  gff_no_flash, device_radar   };

gfm gf_none_punch      = { gft_melee, gun_name_100, -1, &gni_0, gac_punch,          gffx_punch,     0.5,  60 };
gfm gf_none_disarm     = { gft_melee, gun_name_101, -1, &gni_0, gac_punch,          gffx_disarm,    0.3,  60 };
gfm gf_eagle_whip      = { gft_melee, gun_name_094, -1, &gni_0, gac_eagle_whip,     gffx_punch,     0.9,  60 };
gfm gf_magnum_whip     = { gft_melee, gun_name_094, -1, &gni_0, gac_magnum_whip,    gffx_punch,     0.9,  60 };
gfm gf_zlmg_grind      = { gft_melee, gun_name_106, -1, &gni_3, 0,                  gff_no_flash,   0.05, 80 };
gfm gf_tranq_inject    = { gft_melee, gun_name_108,  0, &gni_1, gac_tranq_inject,   gff_no_flash, 100,    60 };
gfm gf_knife_slash     = { gft_melee, gun_name_109,  0, &gni_0, gac_knife_slash,    gff_no_flash,   2,    70 };

// // alternative
//
// #define gac_0 0
//
// #define field( gun, base, shoot, name, ammo, gni, gac, gff, gri, pen ) gfs gf_##name##_##shoot = { gft_shoot, gun_name_##name, ammo, &gni_##gni, gac_##gac, gff, &gri_##gri, base##_##shoot, sfx_##gun##_##shoot, pen }
//
// field( eagle,    eagle,    shoot,  085,  0, 3, eagle_shoot,    0,            default, 1 );
// field( eagle_s,  eagle,    shoot,  085,  0, 1, eagle_shoot,    gff_no_flash, default, 1 );
// field( auto9,    auto9,    shoot,  085,  0, 3, auto9_shoot,    0,            default, 1 );
// field( auto9,    auto9,    burst,  128,  0, 3, auto9_shoot,    gff_burst_3,  default, 1 );
// field( magnum,   magnum,   shoot,  085,  0, 4, magnum_shoot,   0,            default, 5 );
// field( gmagnum,  gmagnum,  shoot,  085,  0, 4, magnum_shoot,   0,            default, 5 );
// field( zpistol,  zpistol,  shoot,  085,  0, 3, zpistol_shoot,  0,            default, 1 );
// field( zpistol,  zpistol,  burst,  095,  0, 3, zpistol_shoot,  gff_zpistol,  default, 1 );
// field( zblaster, zblaster, shoot,  085,  0, 4, zblaster_shoot, 0,            default, 1 );
// field( zblaster, zblaster, burst,  129,  0, 4, zblaster_shoot, 0,            default, 1 );
// field( shotgun,  shotgun,  shoot,  089,  0, 6, shotgun_shoot,  0,            default, 1 );
// field( shotgun,  shotgun,  burst,  105,  0, 6, shotgun_burst,  gff_burst_2,  default, 1 );
// field( zsniper,  zsniper,  shoot,  090,  0, 5, zsniper_shoot,  0,            default, 5 );
// field( zsniper,  zsniper,  seek,   111,  0, 5, zsniper_shoot,  0,            default, 5 );
// field( tranq,    tranq,    shoot,  107,  0, 1, tranq_shoot,    gff_dizzy,    default, 1 );
// field( psycho,   psycho,   shoot,  131,  0, 1, tranq_shoot,    gffx_psycho,  default, 1 );
// field( sniper,   sniper,   shoot,  085,  0, 2, 0,              gff_no_flash, default, 1 );
// field( laser,    laser,    pulse,  132, -1, 3, 0,              0,            default, 1 );
// field( ppk,      ppk,      shoot,  085,  0, 3, ppk_shoot,      0,            default, 1 );
// field( tt33,     tt33,     shoot,  085,  0, 3, tt33_shoot,     0,            default, 1 );
// field( tester,   tester,   shoot,  000,  0, 3, tester_shoot,   0,            tester,  1 );

gfs gf_eagle_shoot     = { gft_shoot, gun_name_085,  0, &gni_3, gac_eagle_shoot,    0,            &gri_default, eagle_shoot,     sfx_eagle_shoot,    1 };
gfs gf_eagle_s_shoot   = { gft_shoot, gun_name_085,  0, &gni_1, gac_eagle_shoot,    gff_no_flash, &gri_default, eagle_shoot,     sfx_eagle_s_shoot,  1 };
gfs gf_auto9_shoot     = { gft_shoot, gun_name_085,  0, &gni_3, gac_auto9_shoot,    0,            &gri_default, auto9_shoot,     sfx_auto9_shoot,    1 };
gfs gf_auto9_burst     = { gft_shoot, gun_name_128,  0, &gni_3, gac_auto9_shoot,    gff_burst_3,  &gri_default, auto9_burst,     sfx_auto9_shoot,    1 };
gfs gf_magnum_shoot    = { gft_shoot, gun_name_085,  0, &gni_4, gac_magnum_shoot,   0,            &gri_default, magnum_shoot,    sfx_magnum_shoot,   5 };
gfs gf_gmagnum_shoot   = { gft_shoot, gun_name_085,  0, &gni_4, gac_magnum_shoot,   0,            &gri_default, gmagnum_shoot,   sfx_magnum_shoot,   5 };
gfs gf_zpistol_shoot   = { gft_shoot, gun_name_085,  0, &gni_3, gac_zpistol_shoot,  0,            &gri_default, zpistol_shoot,   sfx_zpistol_shoot,  1 };
gfs gf_zpistol_burst   = { gft_shoot, gun_name_095,  0, &gni_3, gac_zpistol_shoot,  gff_zpistol,  &gri_default, zpistol_burst,   sfx_zpistol_burst,  1 };
gfs gf_zblaster_shoot  = { gft_shoot, gun_name_085,  0, &gni_4, gac_zblaster_shoot, 0,            &gri_default, zblaster_shoot,  sfx_zblaster_shoot, 1 };
gfs gf_zblaster_burst  = { gft_shoot, gun_name_129,  0, &gni_4, gac_zblaster_shoot, 0,            &gri_default, zblaster_burst, sfx_zblaster_shoot, 1 };
gfs gf_shotgun_shoot   = { gft_shoot, gun_name_089,  0, &gni_6, gac_shotgun_shoot,  0,            &gri_default, shotgun_shoot,   sfx_shotgun_shoot,  1 };
gfs gf_shotgun_burst   = { gft_shoot, gun_name_105,  0, &gni_6, gac_shotgun_burst,  gff_burst_2,  &gri_default, shotgun_burst,   sfx_shotgun_shoot,  1 };
gfs gf_zsniper_shoot   = { gft_shoot, gun_name_090,  0, &gni_5, gac_zsniper_shoot,  0,            &gri_default, zsniper_shoot,   sfx_zsniper_shoot,  5 };
gfs gf_zsniper_seek    = { gft_shoot, gun_name_111,  0, &gni_5, gac_zsniper_shoot,  0,            &gri_default, zsniper_seek,    sfx_zsniper_shoot,  5 };
gfs gf_tranq_shoot     = { gft_shoot, gun_name_107,  0, &gni_1, gac_tranq_shoot,    gff_dizzy,    &gri_default, tranq_shoot,     sfx_dspy_shoot,     1 };
gfs gf_psycho_shoot    = { gft_shoot, gun_name_131,  0, &gni_1, gac_tranq_shoot,    gffx_psycho,  &gri_default, psycho_shoot,    sfx_dspy_shoot,     1 };
gfs gf_sniper_shoot    = { gft_shoot, gun_name_085,  0, &gni_2, 0,                  gff_no_flash, &gri_default, sniper_shoot,    sfx_sniper_shoot,   1 };
gfs gf_laser_pulse     = { gft_shoot, gun_name_132, -1, &gni_3, 0,                  0,            &gri_default, laser_pulse,     sfx_laser_pulse,    1 };
gfs gf_ppk_shoot       = { gft_shoot, gun_name_085,  0, &gni_3, gac_ppk_shoot,      0,            &gri_default, ppk_shoot,       sfx_ppk_shoot,      1 };
gfs gf_tt33_shoot      = { gft_shoot, gun_name_085,  0, &gni_3, gac_tt33_shoot,     0,            &gri_default, tt33_shoot,      sfx_tt33_shoot,     1 };
gfs gf_tester          = { gft_shoot, gun_name_000,  0, &gni_3, gac_tester_shoot,   0,            &gri_tester,  tester,          sfx_eagle_shoot,    1 };

gfb gf_tmp_rapid       = { gft_burst, gun_name_086,  0, &gni_4,  gac_tmp_shoot,     0,            &gri_default, tmp_rapid,       sfx_menu_error,   1, rpm_smg    };
gfb gf_tmp_follow      = { gft_burst, gun_name_102,  0, &gni_4,  gac_tmp_shoot,     0,            &gri_default, tmp_follow,      sfx_menu_error,   1, rpm_smg    };
gfb gf_xsmg_rapid      = { gft_burst, gun_name_086,  0, &gni_5,  gac_xsmg_shoot,    0,            &gri_default, xsmg_rapid,      sfx_xsmg_shoot,   1, rpm_smg    };
gfb gf_xsmg_burst      = { gft_burst, gun_name_097,  0, &gni_5,  gac_xsmg_shoot,    gff_burst_50, &gri_default, xsmg_burst,      sfx_xsmg_burst,   1, rpm_xsmg   };
gfb gf_xp90_rapid      = { gft_burst, gun_name_086,  0, &gni_3,  gac_xp90_shoot,    0,            &gri_default, xp90_rapid,      sfx_xp90_shoot,   1, rpm_xp90   };
gfb gf_zsmg_rapid      = { gft_burst, gun_name_086,  0, &gni_3,  gac_zsmg_shoot,    0,            &gri_default, zsmg_rapid,      sfx_zsmg_shoot,   1, rpm_smg    };
gfb gf_zsmg_burst      = { gft_burst, gun_name_115,  0, &gni_3,  gac_zsmg_shoot,    0,            &gri_default, zsmg_burst,      sfx_zsmg_burst,   5, rpm_zsmg   };
gfb gf_g36_rapid       = { gft_burst, gun_name_086,  0, &gni_5,  gac_g36_shoot,     0,            &gri_default, g36_rapid,       sfx_g36_shoot,    1, rpm_g36    };
gfb gf_xg36_rapid      = { gft_burst, gun_name_086,  0, &gni_5,  gac_xg36_shoot,    0,            &gri_default, xg36_rapid,      sfx_g36_shoot,    1, rpm_g36    };
gfb gf_famas_burst     = { gft_burst, gun_name_087,  0, &gni_5,  0,                 gff_burst_3,  &gri_default, famas_burst,     sfx_famas_shoot,  1, rpm_famas  };
gfb gf_famas_zoom      = { gft_burst, gun_name_103,  0, &gni_5,  0,                 gff_burst_3,  &gri_default, famas_zoom,      sfx_famas_shoot,  1, rpm_famas  };
gfb gf_mp7_burst       = { gft_burst, gun_name_087,  0, &gni_5,  0,                 gff_burst_3,  &gri_default, mp7_burst,       sfx_mp7_shoot,    1, rpm_mp7    };
gfb gf_mp7_threat      = { gft_burst, gun_name_119,  0, &gni_5,  0,                 gffx_mp7,     &gri_default, mp7_threat,      sfx_mp7_shoot,    1, rpm_mp7    };
gfb gf_laptop_burst    = { gft_burst, gun_name_087,  0, &gni_4,  gac_laptop_shoot,  gff_burst_3,  &gri_default, laptop_burst,    sfx_laptop_shoot, 1, rpm_laptop };
gfb gf_zlmg_shoot      = { gft_burst, gun_name_088,  0, &gni_7,  gac_zlmg_shoot,    gff_burst_3,  &gri_zlmg,    zlmg_shoot,      sfx_zlmg_shoot,   1, rpm_zlmg   };
gfb gf_laser_stream    = { gft_burst, gun_name_133, -1, &gni_0,  0,                 0,            &gri_laser,   laser_stream,    0,                1, rpm_laser  };
gfb gf_vz61_shoot      = { gft_burst, gun_name_086,  0, &gni_3,  0,                 0,            &gri_default, vz61_shoot,      sfx_vz61_shoot,   1, rpm_akms   };
gfb gf_akms_shoot      = { gft_burst, gun_name_087,  0, &gni_3,  0,                 gff_burst_3,  &gri_default, akms_shoot,      sfx_akms_shoot,   1, rpm_akms   };
gfb gf_uzi_shoot       = { gft_burst, gun_name_086,  0, &gni_3,  0,                 0,            &gri_default, uzi_shoot,       sfx_xp90_shoot,   1, rpm_uzi    };
gfb gf_mp5k_shoot      = { gft_burst, gun_name_086,  0, &gni_3,  0,                 0,            &gri_default, mp5k_shoot,      sfx_mp5k_shoot,   1, rpm_akms   };
gfb gf_m16_shoot       = { gft_burst, gun_name_087,  0, &gni_3,  0,                 gff_burst_3,  &gri_default, m16_shoot,       sfx_m16_shoot,    1, rpm_m16    };
gfb gf_p90_shoot       = { gft_burst, gun_name_086,  0, &gni_3,  0,                 0,            &gri_default, p90_shoot,       sfx_p90_shoot,    1, rpm_uzi    };
gfb gf_chopper         = { gft_burst, gun_name_086,  0, &gni_3,  0,                 0,            &gri_default, chopper,         sfx_famas_shoot,  2, rpm_smg    };
gfb gf_watch           = { gft_burst, gun_name_086,  0, &gni_3,  0,                 0,            &gri_default, watch,           sfx_zlmg_shoot,   1, rpm_smg    };

gfo gf_rmine_detonate  = { gft_other, gun_name_123, -1, &gni_0,  0,                 gffx_no_swap, hat_detonate,    30 };
gfo gf_sniper_crouch   = { gft_other, gun_name_130, -1, &gni_0,  0,                 gffx_no_swap, hat_crouch,      30 };
gfo gf_boost_revert    = { gft_other, gun_name_114,  0, &gni_0,  0,                 gff_no_flash, hat_revertboost, 30 };
gfo gf_uplink          = { gft_other, gun_name_141, -1, &gni_0,  0,                 gffx_no_swap, hat_uplink,      30 };
gfo gf_boost_boost     = { gft_other, gun_name_113,  0, &gni_0,  0,                 gff_no_flash, hat_boost,       30 };
gfo gf_xp90_cloak      = { gft_other, gun_name_116,  0, &gni_0,  0,                 gffx_no_swap, hat_xp90_cloak,  30 };

gf_throw gf_g36_bomb        = { gft_throw, gun_name_118, -1, &gni_0,  0,                 gffx_g36,    model_g36,     throw_60 };
gf_throw gf_laptop_deploy   = { gft_throw, gun_name_117, -1, &gni_0,  0,                 gffx_laptop, model_laptop,  throw_60 };
gf_throw gf_fmine_throw     = { gft_throw, gun_name_120,  0, &gni_0,  gac_mine_throw,    gffx_throw,  model_fmine,   throw_0  };
gf_throw gf_rmine_throw     = { gft_throw, gun_name_122,  0, &gni_0,  gac_rmine_throw,   gffx_throw,  model_rmine,   throw_0  };
gf_throw gf_pmine_throw     = { gft_throw, gun_name_121,  0, &gni_0,  gac_mine_throw,    gffx_throw,  model_pmine,   throw_0  };
gf_throw gf_ecm_throw       = { gft_throw, gun_name_140,  0, &gni_0,  gac_ecm_throw,     gffx_throw,  model_ecm,     throw_60 };
gf_throw gf_grenade_throw   = { gft_throw, gun_name_124,  0, &gni_0,  gac_grenade_throw, gffx_frag,   model_grenade, throw_60 };
gf_throw gf_grenade_bounce  = { gft_throw, gun_name_125,  0, &gni_0,  gac_grenade_throw, gffx_frag,   model_grenade, bounce   };
gf_throw gf_nbomb_throw     = { gft_throw, gun_name_134,  0, &gni_0,  gac_grenade_throw, gffx_nbomb,  model_nbomb,   throw_60 };
gf_throw gf_nbomb_proxy     = { gft_throw, gun_name_127,  0, &gni_0,  gac_grenade_throw, gffx_nbomb,  model_nbomb,   throw_60 };
gf_throw gf_knife_throw     = { gft_throw, gun_name_110,  0, &gni_0,  gac_knife_throw,   gffx_knife,  model_knife,   throw_60 };
gf_throw gf_bug_throw       = { gft_throw, gun_name_000,  0, &gni_0,  0,                 gffx_throw,  model_bug,     throw_60 };
gf_throw gf_amp_throw       = { gft_throw, gun_name_000,  0, &gni_0,  0,                 gffx_throw,  model_amp,     throw_60 };

gf_thump gf_xg36_thump      = { gft_thump, gun_name_098,  1, &gni_6,  gac_xg36_thump,    gffx_thumper, 0, 0,   1.2, 6, 5, 15, -1, 0, 3, 2, 0, 4, 4, sfx_8073,   1, model_arrow_g36,     1,    0, 0.08, 30, 1200, 0.1,  sfx_rocket  };
gf_thump gf_rocket_shoot    = { gft_thump, gun_name_091,  0, &gni_6,  gac_rocket_shoot,  gffx_rocket,  0, 0,   1,   6, 3, 12, 15, 0, 3, 2, 0, 4, 4, sfx_rocket, 1, model_arrow_rocket,  2.1, 60, 0,     0,   -1, 0.05, sfx_rocket  };
gf_thump gf_rocket_homing   = { gft_thump, gun_name_092,  0, &gni_6,  gac_rocket_shoot,  gffx_homing,  0, 0,   1,   6, 3, 12, 15, 0, 3, 2, 0, 4, 4, sfx_rocket, 1, model_arrow_rocket,  2.1,  0, 0,     5,   -1, 0.05, sfx_rocket  };
gf_thump gf_zrocket_shoot   = { gft_thump, gun_name_091,  0, &gni_6,  gac_zrocket_shoot, gffx_rocket,  0, 0,   1,   6, 3, 12, 15, 0, 3, 2, 0, 4, 4, sfx_8067,   1, model_arrow_zrocket, 4.1, 10, 0,     0,   -1, 0.05, sfx_rocket  };
gf_thump gf_zrocket_burst   = { gft_thump, gun_name_093,  0, &gni_6,  0,                 gffx_zrocket, 0, 0,   1,   6, 3, 12, 15, 0, 3, 2, 0, 4, 4, sfx_8067,   1, model_arrow_zrocket, 4.1, 10, 0,     0,   -1, 0.05, sfx_zrocket };
gf_thump gf_thumper_shoot   = { gft_thump, gun_name_098,  0, &gni_6,  gac_thumper_shoot, gffx_thumper, 0, 0,   1,   6, 5, 58, -1, 0, 5, 8, 0, 4, 4, sfx_8073,   1, model_arrow_thumper, 1,    0, 0.08, 40, 1200, 0.3,  sfx_rocket  };
gf_thump gf_thumper_burst   = { gft_thump, gun_name_099,  0, &gni_6,  gac_thumper_shoot, gffx_sticky,  0, 0,   1,   6, 5, 58, -1, 0, 5, 8, 0, 4, 4, sfx_8073,   1, model_arrow_thumper, 1,    0, 0.08, 40,  360, 0.3,  sfx_rocket  };
gf_thump gf_xbow_burst      = { gft_thump, gun_name_112,  0, &gni_1,  gac_xbow_shoot,    gffx_xbow_0,  0, 0, 100,   6, 3, 12, 15, 0, 3, 2, 0, 4, 4, sfx_8056,   1, model_arrow_xbolt,   2.1,  0, 0,    60,   -1, 0.05, -1          };
gf_thump gf_xbow_shoot      = { gft_thump, gun_name_107,  0, &gni_1,  gac_xbow_shoot,    gffx_xbow_1,  0, 0,   1,   6, 3, 12, 15, 0, 3, 2, 0, 4, 4, sfx_8056,   1, model_arrow_xbolt,   2.1,  0, 0,    60,   -1, 0.05, -1          };
gf_thump gf_rocket_34       = { gft_thump, gun_name_000,  0, &gni_6,  gac_rocket_shoot,  gffx_rocket,  0, 0,   1,   6, 3, 12, 15, 0, 3, 2, 0, 4, 4, sfx_rocket, 1, model_arrow_rocket,  2.1, 20, 0,     0,   -1, 0.05, sfx_rocket  };

// note: new function, never called (yet)

void gf_init() {

}
