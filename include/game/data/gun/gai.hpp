#pragma once

#include "gac.hpp"
#include "gat.hpp"

#include "type.hpp"

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

struct gai_t {
	uint32_t type;
	uint32_t casingeject;
	int16_t  clipsize;
	gac_t *reload_animation;
	uint8_t  flags;
};

gai_t gai_default   = { gat_rifle,    gac_rifle,     30, 0,                      0 };
gai_t gai_eagle     = { gat_pistol,   gac_standard,   8, gac_eagle_reload,       0 };
gai_t gai_eagle_h   = { gat_pistol,   gac_standard,   8, gac_eagle_h_reload,     0 };
gai_t gai_auto9     = { gat_pistol,   gac_standard,   9, gac_auto9_reload,       0 };
gai_t gai_magnum    = { gat_magnum,   gac_standard,   6, gac_magnum_reload,      0 };
gai_t gai_zpistol   = { gat_pistol,   gac_none,       8, gac_zpistol_equip,      0 };
gai_t gai_zblaster  = { gat_pistol,   gac_none,      20, gac_zblaster_reload,    0 };
gai_t gai_tmp       = { gat_smg,      gac_standard,  32, gac_tmp_reload,         0 };
gai_t gai_xsmg      = { gat_smg,      gac_none,      50, gac_xsmg_equip,         0 };
gai_t gai_xp90      = { gat_smg,      gac_standard, 120, gac_xp90_reload,        0 };
gai_t gai_zsmg      = { gat_smg,      gac_none,      32, gac_zsmg_reload,        0 };
gai_t gai_g36       = { gat_rifle,    gac_rifle,     30, gac_g36_reload,         0 };
gai_t gai_xg36      = { gat_rifle,    gac_rifle,     30, gac_xg36_reload,        0 };
gai_t gai_xg36_b    = { gat_thump,    gac_none,       6, gac_xg36_grenadereload, 0 };
gai_t gai_famas     = { gat_rifle,    gac_rifle,     30, gac_famas_reload,       0 };
gai_t gai_mp7       = { gat_rifle,    gac_rifle,     25, gac_mp7_reload,         0 };
gai_t gai_laptop    = { gat_smg,      gac_none,      50, gac_laptop_reload,      0 };
gai_t gai_shotgun   = { gat_shotgun,  gac_shotgun,    9, gac_shotgun_reload,     gaf_incrementalreload };
gai_t gai_zlmg      = { gat_zlmg,     gac_zlmg,     200, gac_zlmg_reload,        0 };
gai_t gai_rocket    = { gat_rocket,   gac_none,       1, gac_rocket_reload,      0 };
gai_t gai_zrocket   = { gat_rocket,   gac_none,       1, gac_zrocket_reload,     0 };
gai_t gai_thumper   = { gat_thump,    gac_none,       8, gac_thumper_reload,     gaf_qtyaffectspartvis };
gai_t gai_fmine     = { gat_fmine,    gac_none,       1, gac_mine_equip,         gaf_equippedisreserve };
gai_t gai_rmine     = { gat_rmine,    gac_none,       1, gac_rmine_equip,        gaf_equippedisreserve };
gai_t gai_pmine     = { gat_pmine,    gac_none,       1, gac_mine_equip,         gaf_equippedisreserve };
gai_t gai_ecm       = { gat_ecm,      gac_none,       1, gac_ecm_equip,          gaf_equippedisreserve };
gai_t gai_grenade   = { gat_grenade,  gac_none,       1, gac_grenade_equip,      gaf_equippedisreserve | gaf_qtyaffectspartvis };
gai_t gai_nbomb     = { gat_nbomb,    gac_none,       1, gac_grenade_equip,      gaf_equippedisreserve | gaf_qtyaffectspartvis };
gai_t gai_zsniper   = { gat_zsniper,  gac_none,       8, gac_zsniper_reload,     0 };
gai_t gai_xbow      = { gat_xbow,     gac_none,       5, gac_xbow_reload,        gaf_incrementalreload };
gai_t gai_tranq     = { gat_tranq,    gac_none,       8, gac_tranq_reload,       0 };
gai_t gai_psycho    = { gat_psycho,   gac_none,       8, gac_tranq_reload,       0 };
gai_t gai_sniper    = { gat_rifle,    gac_rifle,      8, gac_sniper_reload,      0 };
gai_t gai_ppk       = { gat_pistol,   gac_standard,   7, 0,                      0 };
gai_t gai_tt33      = { gat_pistol,   gac_standard,   8, 0,                      0 };
gai_t gai_vz61      = { gat_smg,      gac_standard,  20, 0,                      0 };
gai_t gai_akms      = { gat_rifle,    gac_rifle,     30, 0,                      0 };
gai_t gai_uzi       = { gat_smg,      gac_standard,  32, 0,                      0 };
gai_t gai_mp5k      = { gat_smg,      gac_standard,  30, 0,                      0 };
gai_t gai_m16       = { gat_rifle,    gac_rifle,     30, 0,                      0 };
gai_t gai_p90       = { gat_smg,      gac_standard,  80, 0,                      0 };
gai_t gai_chopper   = { gat_smg,      gac_rifle,     27, 0,                      0 };
gai_t gai_watch     = { gat_smg,      gac_rifle,     27, 0,                      0 };
gai_t gai_knife     = { gat_knife,    gac_none,       1, gac_knife_reload,       gaf_equippedisreserve | gaf_qtyaffectspartvis };
gai_t gai_bug       = { gat_bug,      gac_none,       1, 0,                      gaf_equippedisreserve };
gai_t gai_cloak     = { gat_cloak,    gac_none,      10, 0,                      gaf_noreserve };
gai_t gai_boost     = { gat_boost,    gac_none,       4, 0,                      gaf_noreserve };
gai_t gai_rocket_34 = { gat_rocket,   gac_none,       1, gac_rocket_reload,      0 };
gai_t gai_tester    = { gat_pistol,   gac_standard,   8, 0,                      0 };
