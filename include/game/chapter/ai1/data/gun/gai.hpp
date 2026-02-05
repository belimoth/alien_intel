#pragma once

#include "gac.hpp"

#include "type.hpp"

// gun ammo type

#define gat_pistol   0x01
#define gat_smg      0x02
#define gat_xbow 0x03
#define gat_rifle    0x04
#define gat_shotgun  0x05
#define gat_zsniper  0x06
#define gat_grenade  0x07
#define gat_rocket   0x08
#define gat_knife    0x09
#define gat_magnum   0x0a
#define gat_thump    0x0b
#define gat_rmine    0x0c
#define gat_pmine    0x0d
#define gat_fmine    0x0e
#define gat_zlmg     0x0f
#define gat_zrocket  0x10
#define gat_dart     0x11
#define gat_nbomb    0x12
#define gat_tranq    0x13
#define gat_cloak    0x14
#define gat_boost    0x15
#define gat_psycho   0x16
#define gat_17       0x17
#define gat_bug      0x18
#define gat_cam      0x19
#define gat_semtex   0x1a
#define gat_1b       0x1b
#define gat_1c       0x1c
#define gat_1d       0x1d
#define gat_token    0x1e
#define gat_1f       0x1f
#define gat_ecm      0x20

// gun ammo flag

// todo rename

#define gaf_noreserve         0x1 // Ammo cannot be held outside of weapon (cloak and combat boost)
#define gaf_equippedisreserve 0x2 // For throwables: equipped ammo and reserve is kind of the same thing
#define gaf_incrementalreload 0x4 // Shotgun and crossbow
#define gaf_qtyaffectspartvis 0x8 // Quantity of ammo in the clip affects model part visibility on the weapon (Devastator)

// gun ammo case

#define gac_none     -1
#define gac_standard  0
#define gac_zlmg      1
#define gac_rifle     2
#define gac_shotgun   3

// gun ammo info

struct ai1_gai {
	uint32_t type;
	uint32_t casingeject;
	int16_t  clipsize;
	ai1_gac *reload_animation;
	uint8_t  flags;
};

ai1_gai gai_default   = { gat_rifle,    gac_rifle,     30, 0,                      0                                             };
ai1_gai gai_eagle     = { gat_pistol,   gac_standard,   8, gac_eagle_reload,       0                                             };
ai1_gai gai_eagle_h   = { gat_pistol,   gac_standard,   8, gac_eagle_h_reload,     0                                             };
ai1_gai gai_auto9     = { gat_pistol,   gac_standard,   9, gac_auto9_reload,       0                                             };
ai1_gai gai_magnum    = { gat_magnum,   gac_standard,   6, gac_magnum_reload,      0                                             };
ai1_gai gai_zpistol   = { gat_pistol,   gac_none,       8, gac_zpistol_equip,      0                                             };
ai1_gai gai_zblaster  = { gat_pistol,   gac_none,      20, gac_zblaster_reload,    0                                             };
ai1_gai gai_tmp       = { gat_smg,      gac_standard,  32, gac_tmp_reload,         0                                             };
ai1_gai gai_xsmg      = { gat_smg,      gac_none,      50, gac_xsmg_equip,         0                                             };
ai1_gai gai_xp90      = { gat_smg,      gac_standard, 120, gac_xp90_reload,        0                                             };
ai1_gai gai_zsmg      = { gat_smg,      gac_none,      32, gac_zsmg_reload,        0                                             };
ai1_gai gai_g36       = { gat_rifle,    gac_rifle,     30, gac_g36_reload,         0                                             };
ai1_gai gai_xg36      = { gat_rifle,    gac_rifle,     30, gac_xg36_reload,        0                                             };
ai1_gai gai_xg36_b    = { gat_thump,    gac_none,       6, gac_xg36_grenadereload, 0                                             };
ai1_gai gai_famas     = { gat_rifle,    gac_rifle,     30, gac_famas_reload,       0                                             };
ai1_gai gai_mp7       = { gat_rifle,    gac_rifle,     25, gac_mp7_reload,         0                                             };
ai1_gai gai_laptop    = { gat_smg,      gac_none,      50, gac_laptop_reload,      0                                             };
ai1_gai gai_shotgun   = { gat_shotgun,  gac_shotgun,    9, gac_shotgun_reload,     gaf_incrementalreload                         };
ai1_gai gai_zlmg      = { gat_zlmg,     gac_zlmg,     200, gac_zlmg_reload,        0                                             };
ai1_gai gai_rocket    = { gat_rocket,   gac_none,       1, gac_rocket_reload,      0                                             };
ai1_gai gai_zrocket   = { gat_rocket,   gac_none,       1, gac_zrocket_reload,     0                                             };
ai1_gai gai_thumper   = { gat_thump,    gac_none,       8, gac_thumper_reload,     gaf_qtyaffectspartvis                         };
ai1_gai gai_fmine     = { gat_fmine,    gac_none,       1, gac_mine_equip,         gaf_equippedisreserve                         };
ai1_gai gai_rmine     = { gat_rmine,    gac_none,       1, gac_rmine_equip,        gaf_equippedisreserve                         };
ai1_gai gai_pmine     = { gat_pmine,    gac_none,       1, gac_mine_equip,         gaf_equippedisreserve                         };
ai1_gai gai_ecm       = { gat_ecm,      gac_none,       1, gac_ecm_equip,          gaf_equippedisreserve                         };
ai1_gai gai_grenade   = { gat_grenade,  gac_none,       1, gac_grenade_equip,      gaf_equippedisreserve | gaf_qtyaffectspartvis };
ai1_gai gai_nbomb     = { gat_nbomb,    gac_none,       1, gac_grenade_equip,      gaf_equippedisreserve | gaf_qtyaffectspartvis };
ai1_gai gai_zsniper   = { gat_zsniper,  gac_none,       8, gac_zsniper_reload,     0                                             };
ai1_gai gai_xbow      = { gat_xbow, gac_none,       5, gac_xbow_reload,        gaf_incrementalreload                         };
ai1_gai gai_tranq     = { gat_tranq,    gac_none,       8, gac_tranq_reload,       0                                             };
ai1_gai gai_psycho    = { gat_psycho,   gac_none,       8, gac_tranq_reload,       0                                             };
ai1_gai gai_sniper    = { gat_rifle,    gac_rifle,      8, gac_sniper_reload,      0                                             };
ai1_gai gai_ppk       = { gat_pistol,   gac_standard,   7, 0,                      0                                             };
ai1_gai gai_tt33      = { gat_pistol,   gac_standard,   8, 0,                      0                                             };
ai1_gai gai_vz61      = { gat_smg,      gac_standard,  20, 0,                      0                                             };
ai1_gai gai_akms      = { gat_rifle,    gac_rifle,     30, 0,                      0                                             };
ai1_gai gai_uzi       = { gat_smg,      gac_standard,  32, 0,                      0                                             };
ai1_gai gai_mp5k      = { gat_smg,      gac_standard,  30, 0,                      0                                             };
ai1_gai gai_m16       = { gat_rifle,    gac_rifle,     30, 0,                      0                                             };
ai1_gai gai_p90       = { gat_smg,      gac_standard,  80, 0,                      0                                             };
ai1_gai gai_chopper   = { gat_smg,      gac_rifle,     27, 0,                      0                                             };
ai1_gai gai_watch     = { gat_smg,      gac_rifle,     27, 0,                      0                                             };
ai1_gai gai_knife     = { gat_knife,    gac_none,       1, gac_knife_reload,       gaf_equippedisreserve | gaf_qtyaffectspartvis };
ai1_gai gai_bug       = { gat_bug,      gac_none,       1, 0,                      gaf_equippedisreserve                         };
ai1_gai gai_cloak     = { gat_cloak,    gac_none,      10, 0,                      gaf_noreserve                                 };
ai1_gai gai_boost     = { gat_boost,    gac_none,       4, 0,                      gaf_noreserve                                 };
ai1_gai gai_rocket_34 = { gat_rocket,   gac_none,       1, gac_rocket_reload,      0                                             };
ai1_gai gai_tester    = { gat_pistol,   gac_standard,   8, 0,                      0                                             };
