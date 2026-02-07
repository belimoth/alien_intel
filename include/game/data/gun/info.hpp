#pragma once

#include "gai.hpp"
#include "gac.hpp"
#include "gf.hpp"
#include "gvc.hpp"
#include "gxi.hpp"
#include "name.hpp"

#include "game/data/file.hpp"

#include "type.hpp"

#define wf_throwable   0x00000001 // entire weapon is throwable; grenades, mines, knives
#define wf_0004        0x00000004
#define wf_1h          0x00000008 // guards carry gun one-handed
#define wf_bot         0x00000010
#define wf_dual_flip   0x00000020 // sflip right model to make left model for dual wielding
#define wf_0040        0x00000040
#define wf_nvg         0x00000080
#define wf_choice      0x00000200 // track how long gun is used for weapon of choice
#define wf_0400        0x00000400
#define wf_flag        0x00000800
#define wf_dual        0x00001000
#define wf_2000        0x00002000
#define wf_4000        0x00004000
#define wf_8000        0x00008000 // "special environment mapping"
#define wf_hands       0x00020000
#define wf_no_preview  0x00040000 // don't preview the model in the menu
#define wf_alonzo      0x00080000 // turn the gun sideways at close range, after Alonzo Harris (Denzel Washington) in Training Day (2001)
#define wf_noncombat   0x00100000 // flag and laser; shots don't count towards accuracy rating
#define wf_zrocket     0x02000000
#define wf_400K        0x04000000
#define wf_crucial     0x08000000 // doesn't drop when disarmed or killed
#define wf_seek        0x40000000 // tags targets with red box in aim mode
#define wf_device      0x80000000 // fire to activate

struct item_t {
	/*0x00*/ uint16_t model_hi;
	/*0x02*/ uint16_t model_lo;
	/*0x04*/ gac_t *equip_animation;
	/*0x08*/ gac_t *unequip_animation;
	/*0x0c*/ gac_t *pritosec_animation;
	/*0x10*/ gac_t *sectopri_animation;
	/*0x14*/ void *functions[2];
	/*0x1c*/ gai_t *ammos[2];
	/*0x24*/ gxi_t *gxi;
	/*0x28*/ float muzzlez;
	/*0x2c*/ float posx;
	/*0x30*/ float posy;
	/*0x34*/ float posz;
	/*0x38*/ float sway;
	/*0x3c*/ ai1_gvc *gunviscmds;
	/*0x40*/ ai1_mpv *partvisibility;

	// removed
	// /*0x44*/ uint16_t shortname;
	// /*0x46*/ uint16_t name;
	// /*0x48*/ uint16_t manufacturer;
	// /*0x4a*/ uint16_t description;

	/*0x4c*/ uint32_t flags;
};

#define wfx_4000 wf_4000
#define wfx_6000 wf_2000 | wf_4000
#define wfx_8000 wf_8000
#define wfx_8400 wf_0400 | wf_8000
#define wfx_A000 wf_2000 | wf_8000
#define wfx_C000 wf_4000 | wf_8000
#define wfx_E000 wf_2000 | wfx_C000

#define wfx_base wf_bot | wf_0040 | wf_choice

#define wfx_common_0 wfx_base
#define wfx_handgun  wfx_base | wf_1h
#define wfx_common_1 wf_bot | wf_1h

#define wfx_pistol wfx_common_0 | wf_1h | wf_dual_flip | wf_dual
#define wfx_rifle  wfx_common_0 | wf_2000

#define wfx_bond_1h wf_0004 | wfx_pistol | wfx_C000 | wf_alonzo
#define wfx_bond_2h wf_0004 | wfx_handgun | wf_dual_flip | wf_dual | wfx_8400

#define wfx_throwable wf_throwable | wf_2000 | wf_hands

#define rig_none     1,   12.5, -17,   -27.5, 1
#define rig_laser    3,   12,   -12.7, -21.5, 1
#define rig_unarmed  1,    7.5, -41,   -16,   1
#define rig_eagle_0  2,    9,   -15.7, -23.8, 1
#define rig_eagle_1  1,    9,   -15.7, -23.8, 1
#define rig_auto9    2,   10.5, -17.2, -26.5, 1
#define rig_magnum   2,    9.5, -18.2, -25.5, 1
#define rig_zpistol  1,    9.5, -16.2, -23,   1
#define rig_zblaster 1,   11.5, -17.5, -20,   1
#define rig_tmp      3,   13,   -17.7, -27.5, 1
#define rig_xsmg     1,   21.5, -26.5, -35,   1
#define rig_xp90     3,   13,   -18.2, -27.5, 1
#define rig_zsmg     3,   17.5, -22.7, -25,   1
#define rig_g36      1,   15,   -29.5, -27,   1
#define rig_xg36     1,   15,   -29.5, -27,   1
#define rig_famas    1,   11.5, -25.7, -30.5, 1
#define rig_mp7      1,    6.5, -24,   -27,   1
#define rig_laptop   1.2, 16,   -17.7, -14.5, 1
#define rig_shotgun  1,   12,   -16.7, -21,   1
#define rig_zlmg     1,    4,   -21.2, -30.5, 1
#define rig_rocket   1,   24.5, -25.2, -30,   1
#define rig_zrocket  1,   22.5, -32,   -40.5, 1
#define rig_thumper  1,   19.5, -25.5, -29,   1
#define rig_fmine    1,    8,   -15,   -23,   1
#define rig_rmine    1,    4,   -15,   -23,   1
#define rig_pmine    1,    8,   -15,   -23,   1
#define rig_ecm      1,   14,   -25,   -31.5, 1
#define rig_grenade  1,   17,   -19.7, -21,   1
#define rig_nbomb    1,   17,   -19.7, -21,   1
#define rig_zsniper  6,   21.5, -25.2, -32.5, 1
#define rig_xbow     1,   11,   -15,   -21,   1
#define rig_tranq    1,   10,   -15.2, -24,   1
#define rig_psycho   1,   10,   -16.2, -28.5, 1
#define rig_sniper   6,   21,   -27.2, -31.5, 1
#define rig_ppk      1,   10,   -14.8, -19,   1
#define rig_tt33     1,   10,   -17,   -26.5, 1
#define rig_vz61     1,    8.5, -13,   -29.5, 1
#define rig_akms     2,   13,   -21,   -13.5, 1
#define rig_uzi      0.5, 11,   -24.5, -37,   1
#define rig_mp5k     1,   16.5, -22.9, -35,   1
#define rig_m16      6,   11,   -19.2, -21.5, 1
#define rig_p90      4,   11,   -22.3, -29,   1
#define rig_bug      1,    0,   -39.5, -55.5, 1
#define rig_chopper  1,   16.5, -19.5, -24,   1
#define rig_watch    1,   16.5, -19.5, -24,   1
#define rig_knife    1,   18.5, -26.5, -28,   1
#define rig_uplink   1,    8,   -16.2, -17.5, 1
#define rig_decoder  1,   35,   -26.7, -41,   1
#define rig_object   1,   15.5, -20.2, -33.5, 1

#define wfx_hammer    wfx_handgun | wf_dual
#define wfx_laser     wfx_handgun | wf_dual_flip | wf_2000 | wfx_8000 | wf_hands | wf_noncombat | wf_400K
#define wfx_unarmed   wfx_handgun | wf_2000 | wf_no_preview | wf_crucial
#define wfx_eagle_0   wf_0004 | wfx_pistol | wfx_8000 | wf_alonzo
#define wfx_eagle_1   wf_0004 | wfx_pistol | wfx_8000
#define wfx_auto9     wf_0004 | wfx_pistol | wfx_4000 | wf_alonzo
#define wfx_magnum    wf_0004 | wfx_pistol | wfx_C000
#define wfx_pdw       wfx_base | wf_dual_flip | wfx_E000 | wf_hands
#define wfx_smg       wfx_pistol | wfx_4000
#define wfx_tmp       wfx_pistol | wfx_C000 | wf_400K | wf_seek
#define wfx_assault   wfx_rifle | wfx_4000 | wf_400K
#define wfx_xg36      wfx_rifle | wfx_4000
#define wfx_laptop    wfx_rifle | wfx_8000 | wf_400K
#define wfx_shotgun   wfx_rifle | wfx_4000
#define wfx_rocket    wfx_base | wfx_6000 | wf_hands | wf_seek
#define wfx_zrocket   wfx_base | wf_dual_flip | wfx_6000 | wf_hands | wf_zrocket
#define wfx_thumper   wfx_base | wfx_6000 | wf_hands
#define wfx_flag      wf_1h | wf_flag | wf_no_preview  | wf_noncombat
#define wfx_tranq     wf_0004 | wf_1h | wfx_rifle | wfx_C000 | wf_hands
#define wfx_sniper    wfx_rifle | wfx_4000
#define wfx_mine      wfx_throwable | wfx_handgun
#define wfx_ecm       wfx_throwable | wfx_common_1 | wf_0040 | wf_crucial
#define wfx_watch     wfx_base | wf_dual
#define wfx_knife     wf_throwable | wfx_pistol | wfx_C000 | wf_400K
#define wfx_grenade   wfx_throwable | wf_0004 | wf_1h | wfx_rifle | wfx_8000
#define wfx_xbow      wf_1h | wfx_rifle
#define wfx_bug       wfx_common_1 | wf_crucial
#define wfx_nvg       wfx_common_1 | wf_nvg | wf_crucial
#define wfx_boost     wfx_common_1 | wf_400K
#define wfx_hscan     wfx_common_1 | wf_0040 | wf_crucial
#define wfx_cyanide   wf_bot | wf_crucial
#define wfx_guise     wfx_bug | wf_device
#define wfx_pscan     wfx_common_1 | wf_dual | wf_crucial
#define wfx_uplink    wf_1h | wf_0040 | wf_2000 | wf_hands | wf_crucial | wf_device
#define wfx_decoder   wf_1h | wf_crucial | wf_device
#define wfx_mission   wf_crucial | wf_device
#define wfx_briefcase wf_no_preview  | wf_crucial
#define wfx_rocket_34 wf_bot | wf_0040 | wfx_6000 | wf_hands | wf_seek
#define wfx_tester    wf_0004 | wfx_common_1 | wf_dual_flip | wf_0040 | wfx_A000

#define gacx_laser    gac_laser_equip,         gac_laser_unequip,      0,                    0
#define gacx_eagle    gac_eagle_equip,         gac_eagle_unequip,      0,                    0
#define gacx_eagle_h  gac_eagle_equip,         gac_eagle_unequip,      0,                    0
#define gacx_eagle_s  gac_eagle_equip,         gac_eagle_unequip,      0,                    0
#define gacx_auto9    gac_auto9_shoot,         0,                      0,                    0
#define gacx_magnum   gac_magnum_shoot,        0,                      0,                    0
#define gacx_gmagnum  gac_magnum_shoot,        0,                      0,                    0
#define gacx_zpistol  gac_zpistol_equip,       0,                      0,                    0
#define gacx_zblaster gac_zblaster_shoot,      0,                      0,                    0
#define gacx_tmp      gac_tmp_shoot,           0,                      0,                    0
#define gacx_xsmg     gac_xsmg_equip,          0,                      0,                    0
#define gacx_xp90     gac_xp90_shoot,          0,                      0,                    0
#define gacx_zsmg     gac_zsmg_reload,         0,                      0,                    0
#define gacx_g36      gac_g36_shoot,           0,                      0,                    0
#define gacx_xg36     gac_xg36_shoot,          0,                      gac_xg36_0to1,        gac_xg36_1to0
#define gacx_famas    gac_famas_reload,        0,                      0,                    0
#define gacx_mp7      gac_mp7_equip,           gac_mp7_unequip,        0,                    0
#define gacx_laptop   gac_laptop_equip,        gac_laptop_unequip,     0,                    0
#define gacx_shotgun  gac_shotgun_shoot,       0,                      0,                    0
#define gacx_zlmg     gac_zlmg_equip,          gac_zlmg_unequip,       0,                    0
#define gacx_rocket   gac_rocket_shoot,        0,                      0,                    0
#define gacx_zrocket  gac_zrocket_shoot,       0,                      0,                    0
#define gacx_thumper  gac_thumper_shoot,       0,                      0,                    0
#define gacx_fmine    gac_mine_equip,          gac_mine_unequip,       0,                    0
#define gacx_rmine    gac_rmine_equip,         gac_rmine_unequip,      0,                    0
#define gacx_pmine    gac_mine_equip,          gac_mine_unequip,       0,                    0
#define gacx_ecm      gac_ecm_equip,           gac_ecm_unequip,        0,                    0
#define gacx_grenade  gac_grenade_equip,       0,                      0,                    0
#define gacx_nbomb    gac_grenade_equip,       0,                      0,                    0
#define gacx_zsniper  gac_zsniper_shoot,       0,                      0,                    0
#define gacx_xbow     gac_xbow_equip,          gac_xbow_unequip,       0,                    0
#define gacx_tranq    gac_tranq_shoot,         0,                      0,                    0
#define gacx_psycho   gac_tranq_shoot,         0,                      0,                    0
#define gacx_sniper   gac_sniper_equip,        0,                      0,                    0
#define gacx_ppk      gac_ppk_shoot,           0,                      0,                    0
#define gacx_tt33     gac_tt33_shoot,          0,                      0,                    0
#define gacx_knife    gac_knife_equip,         0,                      gac_knife_0to1,       gac_knife_1to0
#define gacx_uplink   gac_uplink_equip,        gac_uplink_unequip,     0,                    0

#define gfx_laser      &gf_laser_pulse,    &gf_laser_stream
#define gfx_unarmed    &gf_none_punch,     &gf_none_disarm
#define gfx_eagle      &gf_eagle_shoot,    &gf_eagle_whip
#define gfx_eagle_h    &gf_eagle_shoot,    &gf_eagle_whip
#define gfx_eagle_s    &gf_eagle_s_shoot,  &gf_eagle_whip
#define gfx_auto9      &gf_auto9_shoot,    &gf_auto9_burst
#define gfx_magnum     &gf_magnum_shoot,   &gf_magnum_whip
#define gfx_gmagnum    &gf_gmagnum_shoot,  &gf_magnum_whip
#define gfx_zpistol    &gf_zpistol_shoot,  &gf_zpistol_burst
#define gfx_zblaster   &gf_zblaster_shoot, &gf_zblaster_burst
#define gfx_tmp        &gf_tmp_rapid,      &gf_tmp_follow
#define gfx_xsmg       &gf_xsmg_rapid,     &gf_xsmg_burst
#define gfx_xp90       &gf_xp90_rapid,     &gf_xp90_cloak
#define gfx_zsmg       &gf_zsmg_rapid,     &gf_zsmg_burst
#define gfx_g36        &gf_g36_rapid,      &gf_g36_bomb
#define gfx_xg36       &gf_xg36_rapid,     &gf_xg36_thump
#define gfx_famas      &gf_famas_burst,    &gf_famas_zoom
#define gfx_mp7        &gf_mp7_burst,      &gf_mp7_threat
#define gfx_laptop     &gf_laptop_burst,   &gf_laptop_deploy
#define gfx_shotgun    &gf_shotgun_shoot,  &gf_shotgun_burst
#define gfx_zlmg       &gf_zlmg_shoot,     &gf_zlmg_grind
#define gfx_rocket     &gf_rocket_shoot,   &gf_rocket_homing
#define gfx_zrocket    &gf_zrocket_shoot,  &gf_zrocket_burst
#define gfx_thumper    &gf_thumper_shoot,  &gf_thumper_burst
#define gfx_fmine      &gf_fmine_throw,    &gf_mine_threat
#define gfx_rmine      &gf_rmine_throw,    &gf_rmine_detonate
#define gfx_pmine      &gf_pmine_throw,    &gf_mine_threat
#define gfx_ecm        &gf_ecm_throw,      0
#define gfx_grenade    &gf_grenade_throw,  &gf_grenade_bounce
#define gfx_nbomb      &gf_nbomb_throw,    &gf_nbomb_proxy
#define gfx_zsniper    &gf_zsniper_shoot,  &gf_zsniper_seek
#define gfx_xbow       &gf_xbow_shoot,     &gf_xbow_burst
#define gfx_tranq      &gf_tranq_shoot,    &gf_tranq_inject
#define gfx_psycho     &gf_psycho_shoot,   0
#define gfx_sniper     &gf_sniper_shoot,   &gf_sniper_crouch
#define gfx_ppk        &gf_ppk_shoot,      0
#define gfx_tt33       &gf_tt33_shoot,     0
#define gfx_vz61       &gf_vz61_shoot,     0
#define gfx_akms       &gf_akms_shoot,     0
#define gfx_uzi        &gf_uzi_shoot,      0
#define gfx_mp5k       &gf_mp5k_shoot,     0
#define gfx_m16        &gf_m16_shoot,      0
#define gfx_p90        &gf_p90_shoot,      0
#define gfx_flag       &gf_briefcase_use,  &gf_briefcase_use
#define gfx_chopper    &gf_chopper,        0
#define gfx_watch      &gf_watch,          0
#define gfx_knife      &gf_knife_slash,    &gf_knife_throw
#define gfx_tap        &gf_bug_throw,      0
#define gfx_bug        &gf_bug_throw,      0
#define gfx_amp        &gf_amp_throw,      0
#define gfx_nvg        &gf_nvg,            0
#define gfx_hscan      &gf_hscanner,       0
#define gfx_cloak      &gf_cloak,          0
#define gfx_boost      &gf_boost_boost,    &gf_boost_revert
#define gfx_cyanide    &gf_cyanide,        0
#define gfx_irg        &gf_irg,            0
#define gfx_guise      &gf_guise,          0
#define gfx_espy       &gf_espy_deploy,    0
#define gfx_rtracker   &gf_rtracker,       0
#define gfx_xray       &gf_xray,           0
#define gfx_uplink     &gf_uplink,         0
#define gfx_round      &gf_thumper_shoot,  &gf_thumper_burst
#define gfx_bolt       &gf_xbow_shoot,     &gf_xbow_burst
#define gfx_pscan      &gf_pscanner,       0
#define gfx_rocket_34  &gf_rocket_34,      0
#define gfx_tester     &gf_tester,         0

#define gax_default    &gai_default,   0,           0
#define gax_unarmed    0,              0,           &gxi_unarmed
#define gax_eagle      &gai_eagle,     0,           0
#define gax_eagle_h    &gai_eagle_h,   0,           &gxi_eagle_h
#define gax_eagle_s    &gai_eagle,     0,           0
#define gax_auto9      &gai_auto9,     0,           &gxi_auto9
#define gax_magnum     &gai_magnum,    0,           0
#define gax_zpistol    &gai_zpistol,   0,           0
#define gax_zblaster   &gai_zblaster,  0,           0
#define gax_tmp        &gai_tmp,       0,           &gxi_tmp
#define gax_xsmg       &gai_xsmg,      0,           &gxi_smg
#define gax_xp90       &gai_xp90,      0,           &gxi_smg
#define gax_zsmg       &gai_zsmg,      0,           &gxi_smg
#define gax_g36        &gai_g36,       0,           &gxi_heavy
#define gax_xg36       &gai_xg36,      &gai_xg36_b, &gxi_heavy
#define gax_famas      &gai_famas,     0,           &gxi_assault
#define gax_mp7        &gai_mp7,       0,           &gxi_assault
#define gax_laptop     &gai_laptop,    0,           &gxi_heavy
#define gax_shotgun    &gai_shotgun,   0,           0
#define gax_zlmg       &gai_zlmg,      0,           0
#define gax_rocket     &gai_rocket,    0,           &gxi_rocket
#define gax_zrocket    &gai_zrocket,   0,           0
#define gax_thumper    &gai_thumper,   0,           0
#define gax_fmine      &gai_fmine,     0,           0
#define gax_rmine      &gai_rmine,     0,           0
#define gax_pmine      &gai_pmine,     0,           0
#define gax_ecm        &gai_ecm,       0,           0
#define gax_grenade    &gai_grenade,   0,           0
#define gax_nbomb      &gai_nbomb,     0,           0
#define gax_zsniper    &gai_zsniper,   0,           &gxi_sniper
#define gax_xbow       &gai_xbow,      0,           0
#define gax_tranq      &gai_tranq,     0,           0
#define gax_psycho     &gai_psycho,    0,           0
#define gax_sniper     &gai_sniper,    0,           &gxi_sniper
#define gax_ppk        &gai_ppk,       0,           0
#define gax_tt33       &gai_tt33,      0,           0
#define gax_vz61       &gai_vz61,      0,           0
#define gax_akms       &gai_akms,      0,           &gxi_heavy
#define gax_uzi        &gai_uzi,       0,           &gxi_smg
#define gax_mp5k       &gai_mp5k,      0,           &gxi_smg
#define gax_m16        &gai_m16,       0,           &gxi_heavy
#define gax_p90        &gai_p90,       0,           &gxi_smg
#define gax_chopper    &gai_chopper,   0,           0
#define gax_watch      &gai_watch,     0,           0
#define gax_knife      &gai_knife,     0,           0
#define gax_bug        &gai_bug,       0,           0
#define gax_hscan      0,              0,           &gxi_scanner
#define gax_cloak      &gai_cloak,     0,           0
#define gax_boost      &gai_boost,     0,           0
#define gax_rocket_34  &gai_rocket_34, 0,           &gxi_rocket
#define gax_tester     &gai_tester,    0,           0

#define gvx_eagle    gvc_eagle,    mpv_eagle
#define gvx_eagle_h  gvc_eagle_h,  mpv_eagle_h
#define gvx_eagle_s  gvc_eagle_s,  mpv_eagle_s
#define gvx_auto9    gvc_auto9,    mpv_auto9
#define gvx_magnum   gvc_magnum,   mpv_magnum
#define gvx_zpistol  gvc_zpistol,  mpv_zpistol
#define gvx_zblaster gvc_zblaster, mpv_zblaster
#define gvx_tmp      gvc_tmp,      mpv_tmp
#define gvx_xsmg     gvc_xsmg,     mpv_xsmg
#define gvx_xp90     gvc_xp90,     mpv_xp90
#define gvx_zsmg     gvc_zsmg,     mpv_zsmg
#define gvx_g36      gvc_g36,      mpv_g36
#define gvx_xg36     gvc_xg36,     mpv_xg36
#define gvx_famas    gvc_famas,    mpv_famas
#define gvx_mp7      gvc_mp7,      mpv_mp7
#define gvx_laptop   gvc_laptop,   mpv_laptop
#define gvx_shotgun  gvc_shotgun,  mpv_shotgun
#define gvx_zlmg     gvc_zlmg,     mpv_zlmg
#define gvx_rocket   gvc_rocket,   mpv_rocket
#define gvx_thumper  0,            mpv_thumper // note, weird
#define gvx_rmine    gvc_rmine,    mpv_rmine
#define gvx_grenade  gvc_grenade,  0
#define gvx_zsniper  gvc_zsniper,  mpv_zsniper
#define gvx_xbow     gvc_xbow,     mpv_xbow
#define gvx_tranq    gvc_tranq,    mpv_tranq
#define gvx_sniper   gvc_sniper,   mpv_sniper
#define gvx_bond_1h  gvc_classic,  mpv_classic
#define gvx_bond_2h  0,            mpv_classic
#define gvx_knife    gvc_knife,    0

item_t item_hammer    = { 0,                  0,                 0, 0, 0, 0,    0, 0,          gax_default,   rig_none,     0, 0,         wfx_hammer    };
item_t item_laser     = { file_gun_laser,     file_lod_laser,    gacx_laser,    gfx_laser,     0, 0, 0,       rig_laser,    0, 0,         wfx_laser     };
item_t item_nothing   = { 0,                  0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_none,     0, 0,         wf_dual       };
item_t item_unarmed   = { file_gun_unarmed,   0,                 0, 0, 0, 0,    gfx_unarmed,   gax_unarmed,   rig_unarmed,  0, 0,         wfx_unarmed   };
item_t item_eagle     = { file_gun_eagle,     file_lod_eagle,    gacx_eagle,    gfx_eagle,     gax_eagle,     rig_eagle_0,  gvx_eagle,    wfx_eagle_0   };
item_t item_eagle_h   = { file_gun_eagle,     file_lod_eagle,    gacx_eagle_h,  gfx_eagle_h,   gax_eagle_h,   rig_eagle_1,  gvx_eagle_h,  wfx_eagle_1   };
item_t item_eagle_s   = { file_gun_eagle,     file_lod_eagle,    gacx_eagle_s,  gfx_eagle_s,   gax_eagle_s,   rig_eagle_1,  gvx_eagle_s,  wfx_eagle_0   };
item_t item_auto9     = { file_gun_auto9,     file_lod_auto9,    gacx_auto9,    gfx_auto9,     gax_auto9,     rig_auto9,    gvx_auto9,    wfx_auto9     };
item_t item_magnum    = { file_gun_magnum,    file_lod_magnum,   gacx_magnum,   gfx_magnum,    gax_magnum,    rig_magnum,   gvx_magnum,   wfx_magnum    };
item_t item_gmagnum   = { file_gun_gmagnum,   file_lod_gmagnum,  gacx_gmagnum,  gfx_gmagnum,   gax_magnum,    rig_magnum,   gvx_magnum ,  wfx_magnum    };
item_t item_zpistol   = { file_gun_zpistol,   file_lod_zpistol,  gacx_zpistol,  gfx_zpistol,   gax_zpistol,   rig_zpistol,  gvx_zpistol,  wfx_bond_1h   };
item_t item_zblaster  = { file_gun_zblaster,  file_lod_zblaster, gacx_zblaster, gfx_zblaster,  gax_zblaster,  rig_zblaster, gvx_zblaster, wfx_smg       };
item_t item_tmp       = { file_gun_tmp,       file_lod_tmp,      gacx_tmp,      gfx_tmp,       gax_tmp,       rig_tmp,      gvx_tmp,      wfx_tmp       };
item_t item_xsmg      = { file_gun_xsmg,      file_lod_xsmg,     gacx_xsmg,     gfx_xsmg,      gax_xsmg,      rig_xsmg,     gvx_xsmg,     wfx_smg       };
item_t item_xp90      = { file_gun_xp90,      file_lod_xp90,     gacx_xp90,     gfx_xp90,      gax_xp90,      rig_xp90,     gvx_xp90,     wfx_pdw       };
item_t item_zsmg      = { file_gun_zsmg,      file_lod_zsmg,     gacx_zsmg,     gfx_zsmg,      gax_zsmg,      rig_zsmg,     gvx_zsmg,     wfx_pdw       };
item_t item_g36       = { file_gun_g36,       file_lod_g36,      gacx_g36,      gfx_g36,       gax_g36,       rig_g36,      gvx_g36,      wfx_assault   };
item_t item_xg36      = { file_gun_xg36,      file_lod_xg36,     gacx_xg36,     gfx_xg36,      gax_xg36,      rig_xg36,     gvx_xg36,     wfx_xg36      };
item_t item_famas     = { file_gun_famas,     file_lod_famas,    gacx_famas,    gfx_famas,     gax_famas,     rig_famas,    gvx_famas,    wfx_assault   };
item_t item_mp7       = { file_gun_mp7,       file_lod_mp7,      gacx_mp7,      gfx_mp7,       gax_mp7,       rig_mp7,      gvx_mp7,      wfx_rifle     };
item_t item_laptop    = { file_gun_laptop,    file_lod_laptop,   gacx_laptop,   gfx_laptop,    gax_laptop,    rig_laptop,   gvx_laptop,   wfx_laptop    };
item_t item_shotgun   = { file_gun_shotgun,   file_lod_shotgun,  gacx_shotgun,  gfx_shotgun,   gax_shotgun,   rig_shotgun,  gvx_shotgun,  wfx_shotgun   };
item_t item_zlmg      = { file_gun_zlmg,      file_lod_zlmg,     gacx_zlmg,     gfx_zlmg,      gax_zlmg,      rig_zlmg,     gvx_zlmg,     wfx_rifle     };
item_t item_rocket    = { file_gun_rocket,    file_lod_rocket,   gacx_rocket,   gfx_rocket,    gax_rocket,    rig_rocket,   gvx_rocket,   wfx_rocket    };
item_t item_zrocket   = { file_gun_zrocket,   file_lod_zrocket,  gacx_zrocket,  gfx_zrocket,   gax_zrocket,   rig_zrocket,  0, 0,         wfx_zrocket   };
item_t item_thumper   = { file_gun_thumper,   file_lod_thumper,  gacx_thumper,  gfx_thumper,   gax_thumper,   rig_thumper,  gvx_thumper,  wfx_thumper   };
item_t item_fmine     = { file_gun_fmine,     0,                 gacx_fmine,    gfx_fmine,     gax_fmine,     rig_fmine,    0, 0,         wfx_mine      };
item_t item_rmine     = { file_gun_rmine,     0,                 gacx_rmine,    gfx_rmine,     gax_rmine,     rig_rmine,    gvx_rmine,    wfx_mine      };
item_t item_pmine     = { file_gun_pmine,     0,                 gacx_pmine,    gfx_pmine,     gax_pmine,     rig_pmine,    0, 0,         wfx_mine      };
item_t item_ecm       = { file_gun_ecm,       0,                 gacx_ecm,      gfx_ecm,       gax_ecm,       rig_ecm,      0, 0,         wfx_ecm       };
item_t item_grenade   = { file_gun_grenade,   file_lod_grenade,  gacx_grenade,  gfx_grenade,   gax_grenade,   rig_grenade,  gvx_grenade,  wfx_grenade   };
item_t item_nbomb     = { file_gun_nbomb,     file_lod_nbomb,    gacx_nbomb,    gfx_nbomb,     gax_nbomb,     rig_nbomb,    gvx_grenade,  wfx_grenade   };
item_t item_zsniper   = { file_gun_zsniper,   file_lod_zsniper,  gacx_zsniper,  gfx_zsniper,   gax_zsniper,   rig_zsniper,  gvx_zsniper,  wfx_sniper    };
item_t item_xbow      = { file_gun_xbow,      file_lod_xbow,     gacx_xbow,     gfx_xbow,      gax_xbow,      rig_xbow,     gvx_xbow,     wfx_xbow      };
item_t item_tranq     = { file_gun_tranq,     file_lod_tranq,    gacx_tranq,    gfx_tranq,     gax_tranq,     rig_tranq,    gvx_tranq,    wfx_tranq     };
item_t item_psycho    = { file_gun_tranq,     file_lod_tranq,    gacx_psycho,   gfx_psycho,    gax_psycho,    rig_psycho,   gvx_tranq,    wfx_tranq     };
item_t item_sniper    = { file_gun_sniper,    file_lod_sniper,   gacx_sniper,   gfx_sniper,    gax_sniper,    rig_sniper,   gvx_sniper,   wfx_sniper    };
item_t item_ppk       = { file_gun_ppk,       0,                 gacx_ppk,      gfx_ppk,       gax_ppk,       rig_ppk,      gvx_bond_1h,  wfx_bond_1h   };
item_t item_tt33      = { file_gun_tt33,      0,                 gacx_tt33,     gfx_tt33,      gax_tt33,      rig_tt33,     gvx_bond_1h,  wfx_bond_1h   };
item_t item_vz61      = { file_gun_vz61,      0,                 0, 0, 0, 0,    gfx_vz61,      gax_vz61,      rig_vz61,     gvx_bond_2h,  wfx_bond_2h   };
item_t item_akms      = { file_gun_akms,      0,                 0, 0, 0, 0,    gfx_akms,      gax_akms,      rig_akms,     gvx_bond_2h,  wfx_bond_2h   };
item_t item_uzi       = { file_gun_uzi,       0,                 0, 0, 0, 0,    gfx_uzi,       gax_uzi,       rig_uzi,      gvx_bond_2h,  wfx_bond_2h   };
item_t item_mp5k      = { file_gun_mp5k,      0,                 0, 0, 0, 0,    gfx_mp5k,      gax_mp5k,      rig_mp5k,     gvx_bond_2h,  wfx_bond_2h   };
item_t item_m16       = { file_gun_m16,       0,                 0, 0, 0, 0,    gfx_m16,       gax_m16,       rig_m16,      gvx_bond_2h,  wfx_bond_2h   };
item_t item_p90       = { file_gun_p90,       0,                 0, 0, 0, 0,    gfx_p90,       gax_p90,       rig_p90,      gvx_bond_2h,  wfx_bond_2h   };
item_t item_flag      = { file_lod_eagle,     file_lod_eagle,    0, 0, 0, 0,    gfx_flag,      0, 0, 0,       rig_none,     0, 0,         wfx_flag      };
item_t item_chopper   = { 0,                  0,                 0, 0, 0, 0,    gfx_chopper,   gax_chopper,   rig_chopper,  0, 0,         wfx_watch     };
item_t item_watch     = { 0,                  0,                 0, 0, 0, 0,    gfx_watch,     gax_watch,     rig_watch,    0, 0,         wfx_watch     };
item_t item_knife     = { file_gun_knife,     file_lod_knife,    gacx_knife,    gfx_knife,     gax_knife,     rig_knife,    gvx_knife,    wfx_knife     };
item_t item_tap       = { file_prop_bug,      0,                 0, 0, 0, 0,    gfx_tap,       gax_bug,       rig_bug,      0, 0,         wfx_bug       };
item_t item_bug       = { file_prop_bug,      0,                 0, 0, 0, 0,    gfx_bug,       gax_bug,       rig_bug,      0, 0,         wfx_bug       };
item_t item_amp       = { file_prop_amp,      0,                 0, 0, 0, 0,    gfx_amp,       gax_bug,       rig_bug,      0, 0,         wfx_bug       };
item_t item_nvg       = { file_prop_nvg,      0,                 0, 0, 0, 0,    gfx_nvg,       0, 0, 0,       rig_bug,      0, 0,         wfx_nvg       };
item_t item_hscan     = { file_prop_hscan,    0,                 0, 0, 0, 0,    gfx_hscan,     gax_hscan,     rig_bug,      0, 0,         wfx_hscan     };
item_t item_cloak     = { file_prop_cloak,    0,                 0, 0, 0, 0,    gfx_cloak,     gax_cloak,     rig_bug,      0, 0,         wfx_boost     };
item_t item_boost     = { file_prop_boost,    0,                 0, 0, 0, 0,    gfx_boost,     gax_boost,     rig_bug,      0, 0,         wfx_boost     };
item_t item_cyanide   = { 0,                  0,                 0, 0, 0, 0,    gfx_cyanide,   0, 0, 0,       rig_bug,      0, 0,         wfx_cyanide   };
item_t item_irg       = { file_gun_irg,       0,                 0, 0, 0, 0,    gfx_irg,       0, 0, 0,       rig_bug,      0, 0,         wfx_hscan     };
item_t item_guise_0   = { 0,                  0,                 0, 0, 0, 0,    gfx_guise,     0, 0, 0,       rig_bug,      0, 0,         wfx_guise     };
item_t item_guise_1   = { 0,                  0,                 0, 0, 0, 0,    gfx_guise,     0, 0, 0,       rig_bug,      0, 0,         wfx_guise     };
item_t item_espy      = { file_actor_espy,    0,                 0, 0, 0, 0,    gfx_espy,      0, 0, 0,       rig_bug,      0, 0,         wfx_pscan     };
item_t item_rtracker  = { file_prop_pscan,    0,                 0, 0, 0, 0,    gfx_rtracker,  0, 0, 0,       rig_bug,      0, 0,         wfx_pscan     };
item_t item_xray      = { file_prop_xray,     0,                 0, 0, 0, 0,    gfx_xray,      0, 0, 0,       rig_bug,      0, 0,         wfx_hscan     };
item_t item_uplink    = { file_gun_uplink,    0,                 gacx_uplink,   gfx_uplink,    0, 0, 0,       rig_uplink,   0, 0,         wfx_uplink    };
item_t item_decoder   = { file_prop_decoder,  0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_decoder,  0, 0,         wfx_decoder   };
item_t item_rocket    = { file_gun_xsmg,      file_lod_xsmg,     gacx_rocket,   gfx_rocket,    gax_rocket,    rig_none,     gvx_rocket,   0             };
item_t item_hrocket   = { file_gun_xsmg,      file_lod_xsmg,     0, 0, 0, 0,    0, 0,          gax_default,   rig_none,     0, 0,         0             };
item_t item_round     = { file_gun_xsmg,      file_lod_xsmg,     0, 0, 0, 0,    gfx_round,     gax_default,   rig_none,     0, 0,         0             };
item_t item_bolt      = { file_gun_xsmg,      file_lod_xsmg,     0, 0, 0, 0,    gfx_bolt,      gax_default,   rig_none,     0, 0,         0             };
item_t item_zbomb     = { file_prop_zbomb,    0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wf_device     };
item_t item_bomb      = { file_prop_bomb,     0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wf_device     };
item_t item_pscan     = { file_prop_pscan,    0,                 0, 0, 0, 0,    gfx_pscan,     0, 0, 0,       rig_bug,      0, 0,         wfx_pscan     };
item_t item_defib     = { file_prop_defib,    0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wfx_mission   };
item_t item_plan      = { file_prop_plan,     0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wf_crucial    };
item_t item_tape      = { file_prop_tape,     0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wf_crucial    };
item_t item_disk      = { file_prop_disk,     0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wf_crucial    };
item_t item_briefcase = { file_prop_key,      0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wfx_briefcase };
item_t item_suitcase  = { file_prop_suitcase, 0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wfx_mission   };
item_t item_pendant   = { file_prop_pendant,  0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wf_crucial    };
item_t item_stech     = { file_prop_shield,   0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wf_crucial    };
item_t item_key       = { file_prop_key,      0,                 0, 0, 0, 0,    0, 0,          0, 0, 0,       rig_object,   0, 0,         wf_crucial    };
item_t item_rocket_34 = { file_gun_rocket,    file_lod_rocket,   0, 0, 0, 0,    gfx_rocket_34, gax_rocket_34, rig_rocket,   0, 0,         wfx_rocket_34 };
item_t item_tester    = { file_gun_tester,    0,                 0, 0, 0, 0,    gfx_tester,    gax_tester,    rig_object,   0, 0,         wfx_tester    };

// // alternative

// #define file_0 0
// #define file_lod_0 0
// #define gacx_0 0, 0, 0, 0
// #define gfx_0 0, 0
// #define gax_0 0, 0, 0
// #define rig_0 rig_none
// #define gvx_0 0, 0
// #define wfx_0 0
// #define wfx_dual wf_dual
// #define wfx_crucial wf_crucial
// #define wfx_device wf_device
//
// #define field( item, file, lod, gacx, gfx, gax, rig, gvx, wfx ) item_t item_##item = { file_##file, file_lod_##lod, gacx_##gacx, gfx_##gfx, gax_##gax, rig_##rig, gvx_##gvx, wfx_##wfx 	}
// field( hammer,    0,             0,        0,         0,         default,   0,        0,        hammer     );
// field( laser,     gun_laser,     laser,    laser,     laser,     0,         laser,    0,        laser      );
// field( nothing,   0,             0,        0,         0,         0,         0,        0,        dual       );
// field( unarmed,   gun_unarmed,   0,        0,         unarmed,   unarmed,   unarmed,  0,        unarmed    );
// field( eagle,     gun_eagle,     eagle,    eagle,     eagle,     eagle,     eagle_0,  eagle,    eagle_0    );
// field( eagle_h,   gun_eagle,     eagle,    eagle_h,   eagle_h,   eagle_h,   eagle_1,  eagle_h,  eagle_1    );
// field( eagle_s,   gun_eagle,     eagle,    eagle_s,   eagle_s,   eagle_s,   eagle_1,  eagle_s,  eagle_0    );
// field( auto9,     gun_auto9,     auto9,    auto9,     auto9,     auto9,     auto9,    auto9,    auto9      );
// field( magnum,    gun_magnum,    magnum,   magnum,    magnum,    magnum,    magnum,   magnum,   magnum     );
// field( gmagnum,   gun_gmagnum,   gmagnum,  gmagnum,   gmagnum,   magnum,    magnum,   magnum,   magnum     );
// field( zpistol,   gun_zpistol,   zpistol,  zpistol,   zpistol,   zpistol,   zpistol,  zpistol,  bond_1h    );
// field( zblaster,  gun_zblaster,  zblaster, zblaster,  zblaster,  zblaster,  zblaster, zblaster, smg        );
// field( tmp,       gun_tmp,       tmp,      tmp,       tmp,       tmp,       tmp,      tmp,      tmp        );
// field( xsmg,      gun_xsmg,      xsmg,     xsmg,      xsmg,      xsmg,      xsmg,     xsmg,     smg        );
// field( xp90,      gun_xp90,      xp90,     xp90,      xp90,      xp90,      xp90,     xp90,     pdw        );
// field( zsmg,      gun_zsmg,      zsmg,     zsmg,      zsmg,      zsmg,      zsmg,     zsmg,     pdw        );
// field( g36,       gun_g36,       g36,      g36,       g36,       g36,       g36,      g36,      assault    );
// field( xg36,      gun_xg36,      xg36,     xg36,      xg36,      xg36,      xg36,     xg36,     xg36       );
// field( famas,     gun_famas,     famas,    famas,     famas,     famas,     famas,    famas,    assault    );
// field( mp7,       gun_mp7,       mp7,      mp7,       mp7,       mp7,       mp7,      mp7,      rifle      );
// field( laptop,    gun_laptop,    laptop,   laptop,    laptop,    laptop,    laptop,   laptop,   laptop     );
// field( shotgun,   gun_shotgun,   shotgun,  shotgun,   shotgun,   shotgun,   shotgun,  shotgun,  shotgun    );
// field( zlmg,      gun_zlmg,      zlmg,     zlmg,      zlmg,      zlmg,      zlmg,     zlmg,     rifle      );
// field( rocket,    gun_rocket,    rocket,   rocket,    rocket,    rocket,    rocket,   rocket,   rocket     );
// field( zrocket,   gun_zrocket,   zrocket,  zrocket,   zrocket,   zrocket,   zrocket,  0,        zrocket    );
// field( thumper,   gun_thumper,   thumper,  thumper,   thumper,   thumper,   thumper,  thumper,  thumper    );
// field( fmine,     gun_fmine,     0,        fmine,     fmine,     fmine,     fmine,    0,        mine       );
// field( rmine,     gun_rmine,     0,        rmine,     rmine,     rmine,     rmine,    rmine,    mine       );
// field( pmine,     gun_pmine,     0,        pmine,     pmine,     pmine,     pmine,    0,        mine       );
// field( ecm,       gun_ecm,       0,        ecm,       ecm,       ecm,       ecm,      0,        ecm        );
// field( grenade,   gun_grenade,   grenade,  grenade,   grenade,   grenade,   grenade,  grenade,  grenade    );
// field( nbomb,     gun_nbomb,     nbomb,    nbomb,     nbomb,     nbomb,     nbomb,    grenade,  grenade    );
// field( zsniper,   gun_zsniper,   zsniper,  zsniper,   zsniper,   zsniper,   zsniper,  zsniper,  sniper     );
// field( xbow,      gun_xbow,      xbow,     xbow,      xbow,      xbow,      xbow,     xbow,     xbow       );
// field( tranq,     gun_tranq,     tranq,    tranq,     tranq,     tranq,     tranq,    tranq,    tranq      );
// field( psycho,    gun_tranq,     tranq,    psycho,    psycho,    psycho,    psycho,   tranq,    tranq      );
// field( sniper,    gun_sniper,    sniper,   sniper,    sniper,    sniper,    sniper,   sniper,   sniper     );
// field( ppk,       gun_ppk,       0,        ppk,       ppk,       ppk,       ppk,      bond_1h,  bond_1h    );
// field( tt33,      gun_tt33,      0,        tt33,      tt33,      tt33,      tt33,     bond_1h,  bond_1h    );
// field( vz61,      gun_vz61,      0,        0,         vz61,      vz61,      vz61,     bond_2h,  bond_2h    );
// field( akms,      gun_akms,      0,        0,         akms,      akms,      akms,     bond_2h,  bond_2h    );
// field( uzi,       gun_uzi,       0,        0,         uzi,       uzi,       uzi,      bond_2h,  bond_2h    );
// field( mp5k,      gun_mp5k,      0,        0,         mp5k,      mp5k,      mp5k,     bond_2h,  bond_2h    );
// field( m16,       gun_m16,       0,        0,         m16,       m16,       m16,      bond_2h,  bond_2h    );
// field( p90,       gun_p90,       0,        0,         p90,       p90,       p90,      bond_2h,  bond_2h    );
// field( flag,      lod_eagle,     eagle,    0,         flag,      0,         none,     0,        flag       );
// field( chopper,   0,             0,        0,         chopper,   chopper,   chopper,  0,        watch      );
// field( watch,     0,             0,        0,         watch,     watch,     watch,    0,        watch      );
// field( knife,     gun_knife,     knife,    knife,     knife,     knife,     knife,    knife,    knife      );
// field( tap,       prop_bug,      0,        0,         tap,       bug,       bug,      0,        bug        );
// field( bug,       prop_bug,      0,        0,         bug,       bug,       bug,      0,        bug        );
// field( amp,       prop_amp,      0,        0,         amp,       bug,       bug,      0,        bug        );
// field( nvg,       prop_nvg,      0,        0,         nvg,       0,         bug,      0,        nvg        );
// field( hscan,     prop_hscan,    0,        0,         hscan,     hscan,     bug,      0,        hscan      );
// field( cloak,     prop_cloak,    0,        0,         cloak,     cloak,     bug,      0,        boost      );
// field( boost,     prop_boost,    0,        0,         boost,     boost,     bug,      0,        boost      );
// field( cyanide,   0,             0,        0,         cyanide,   0,         bug,      0,        cyanide    );
// field( irg,       gun_irg,       0,        0,         irg,       0,         bug,      0,        hscan      );
// field( guise_0,   0,             0,        0,         guise,     0,         bug,      0,        guise      );
// field( guise_1,   0,             0,        0,         guise,     0,         bug,      0,        guise      );
// field( espy,      actor_espy,    0,        0,         espy,      0,         bug,      0,        pscan      );
// field( rtracker,  prop_pscan,    0,        0,         rtracker,  0,         bug,      0,        pscan      );
// field( xray,      prop_xray,     0,        0,         xray,      0,         bug,      0,        hscan      );
// field( uplink,    gun_uplink,    0,        uplink,    uplink,    0,         uplink,   0,        uplink     );
// field( decoder,   prop_decoder,  0,        0,         0,         0,         decoder,  0,        decoder    );
// field( rocket,    gun_xsmg,      xsmg,     rocket,    rocket,    rocket,    none,     rocket,   0          );
// field( hrocket,   gun_xsmg,      xsmg,     0,         0,         default,   none,     0,        0          );
// field( round,     gun_xsmg,      xsmg,     0,         round,     default,   none,     0,        0          );
// field( bolt,      gun_xsmg,      xsmg,     0,         bolt,      default,   none,     0,        0          );
// field( zbomb,     prop_zbomb,    0,        0,         0,         0,         object,   0,        device     );
// field( bomb,      prop_bomb,     0,        0,         0,         0,         object,   0,        device     );
// field( pscan,     prop_pscan,    0,        0,         pscan,     0,         bug,      0,        pscan      );
// field( defib,     prop_defib,    0,        0,         0,         0,         object,   0,        mission    );
// field( plan,      prop_plan,     0,        0,         0,         0,         object,   0,        crucial    );
// field( tape,      prop_tape,     0,        0,         0,         0,         object,   0,        crucial    );
// field( disk,      prop_disk,     0,        0,         0,         0,         object,   0,        crucial    );
// field( briefcase, prop_key,      0,        0,         0,         0,         object,   0,        briefcase  );
// field( suitcase,  prop_suitcase, 0,        0,         0,         0,         object,   0,        mission    );
// field( pendant,   prop_pendant,  0,        0,         0,         0,         object,   0,        crucial    );
// field( stech,     prop_shield,   0,        0,         0,         0,         object,   0,        crucial    );
// field( key,       prop_key,      0,        0,         0,         0,         object,   0,        crucial    );
// field( rocket_34, gun_rocket,    rocket,   0,         rocket_34, rocket_34, rocket,   0,        rocket_34  );
// field( tester,    gun_tester,    0,        0,         tester,    tester,    object,   0,        tester     );
// #undef field

item_t *g_item[] = {
	&item_nothing,
	&item_unarmed,
	&item_eagle,
	&item_eagle_s,
	&item_eagle_h,
	&item_auto9,
	&item_zblaster,
	&item_zpistol,
	&item_magnum,
	&item_gmagnum,
	&item_tmp,
	&item_xsmg,
	&item_zsmg,
	&item_xp90,
	&item_laptop,
	&item_g36,
	&item_mp7,
	&item_famas,
	&item_xg36,
	&item_shotgun,
	&item_zlmg,
	&item_sniper,
	&item_zsniper,
	&item_thumper,
	&item_rocket,
	&item_zrocket,
	&item_knife,
	&item_xbow,
	&item_tranq,
	&item_laser,
	&item_grenade,
	&item_nbomb,
	&item_fmine,
	&item_pmine,
	&item_rmine,
	&item_boost,
	&item_ppk,
	&item_tt33,
	&item_vz61,
	&item_akms,
	&item_uzi,
	&item_mp5k,
	&item_m16,
	&item_p90,
	&item_psycho,
	&item_nvg,
	&item_espy,
	&item_xray,
	&item_irg,
	&item_cloak,
	&item_hscan,
	&item_tester,
	&item_rocket_34,
	&item_ecm,
	&item_uplink,
	&item_rtracker,
	&item_pscan,
	&item_decoder,
	&item_defib,
	&item_bomb,
	&item_zbomb,
	&item_tap,
	&item_bug,
	&item_amp,
	&item_guise_0,
	&item_guise_1,
	&item_plan,
	&item_tape,
	&item_disk,
	&item_key,
	&item_key,
	&item_key,
	&item_key,
	&item_key,
	&item_key,
	&item_key,
	&item_key,
	&item_suitcase,
	&item_briefcase,
	&item_stech,
	&item_pendant,
	&item_hammer,
	&item_hammer,
	&item_rocket,
	&item_hrocket,
	&item_round,
	&item_bolt,
	&item_flag,
	&item_rocket,
	&item_chopper,
	&item_watch,
	&item_hammer,
	&item_hammer,
	&item_cyanide,
};

// note, new function, never called (yet)

void item_t_init() {
	for ( int i = 0; i < array_count( g_item ); i++) {
		if ( not g_item[i]->model_lo ) g_item[i]->model_lo = g_item[i]->model_hi;
		if ( not g_item[i]->gxi      ) g_item[i]->gxi      = &gxi_default;
	}
}
