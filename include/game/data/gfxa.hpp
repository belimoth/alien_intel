#pragma once

#include "math.hpp"

#include "type.hpp"

// todo fix these type names

struct gfxa_t {
	int16_t  i;
	bool     flip;
	float    frame_end;
	float    speed;
	uint32_t unk10;
	float    frame_thud_0;
	float    frame_thud_1;
};

struct gfxax_t {
	int     hit_part;
	gfxa_t *death;
	gfxa_t *hurt;
	int     death_count;
	int     hurt_count;
};

struct gfxa_head_t {
	int16_t i;
	float   frame_loop;
	float   frame_end;
	float   translateperframe;
	float   speed_min;
	float   speed_max;
};

enum gfxa_i {
	gfxa_idle,
	gfxa_two_gun_hold,
	gfxa_0002,
	gfxa_0003,
	gfxa_0004,
	gfxa_0005,
	gfxa_0006,
	gfxa_0007,
	gfxa_kneel_2h,
	gfxa_0009,
	gfxa_000A,
	gfxa_000B,
	gfxa_000C,
	gfxa_000D,
	gfxa_000E,
	gfxa_000F,
	gfxa_0010,
	gfxa_0011,
	gfxa_0012,
	gfxa_0013,
	gfxa_0014,
	gfxa_0015,
	gfxa_0016,
	gfxa_0017,
	gfxa_0018,
	gfxa_0019,
	gfxa_death_001A,
	gfxa_001B,
	gfxa_death_001C,
	gfxa_001D,
	gfxa_001E,
	gfxa_001F,
	gfxa_death_0020,
	gfxa_death_0021,
	gfxa_death_0022,
	gfxa_death_0023,
	gfxa_death_0024,
	gfxa_death_0025,
	gfxa_0026,
	gfxa_0027,
	gfxa_0028,
	gfxa_0029,
	gfxa_run_2h,
	gfxa_002B,
	gfxa_002C,
	gfxa_002D,
	gfxa_quit_002E,
	gfxa_quit_002F,
	gfxa_0030,
	gfxa_0031,
	gfxa_0032,
	gfxa_0033,
	gfxa_0034,
	gfxa_0035,
	gfxa_0036,
	gfxa_0037,
	gfxa_0038,
	gfxa_death_0039,
	gfxa_003A,
	gfxa_003B,
	gfxa_003C,
	gfxa_talk_003D,
	gfxa_throw_standing,
	gfxa_003F,
	gfxa_0040,
	gfxa_0041,
	gfxa_0042,
	gfxa_0043,
	gfxa_0044,
	gfxa_0045,
	gfxa_0046,
	gfxa_0047,
	gfxa_0048,
	gfxa_0049,
	gfxa_004A,
	gfxa_kneel_shoot_right_hand,
	gfxa_004C,
	gfxa_004D,
	gfxa_004E,
	gfxa_004F,
	gfxa_0050,
	gfxa_0051,
	gfxa_0052,
	gfxa_0053,
	gfxa_0054,
	gfxa_0055,
	gfxa_0056,
	gfxa_0057,
	gfxa_0058,
	gfxa_run_1h,
	gfxa_005A,
	gfxa_005B,
	gfxa_005C,
	gfxa_005D,
	gfxa_005E,
	gfxa_005F,
	gfxa_0060,
	gfxa_0061,
	gfxa_0062,
	gfxa_0063,
	gfxa_0064,
	gfxa_0065,
	gfxa_0066,
	gfxa_0067,
	gfxa_0068,
	gfxa_0069,
	gfxa_006A,
	gfxa_006B,
	gfxa_006C,
	gfxa_006D,
	gfxa_006E,
	gfxa_006F,
	gfxa_0070,
	gfxa_0071,
	gfxa_0072,
	gfxa_0073,
	gfxa_0074,
	gfxa_0075,
	gfxa_0076,
	gfxa_0077,
	gfxa_0078,
	gfxa_0079,
	gfxa_007A,
	gfxa_007B,
	gfxa_007C,
	gfxa_007D,
	gfxa_007E,
	gfxa_007F,
	gfxa_0080,
	gfxa_0081,
	gfxa_0082,
	gfxa_0083,
	gfxa_0084,
	gfxa_0085,
	gfxa_0086,
	gfxa_0087,
	gfxa_0088,
	gfxa_0089,
	gfxa_008A,
	gfxa_008B,
	gfxa_008C,
	gfxa_008D,
	gfxa_008E,
	gfxa_008F,
	gfxa_0090,
	gfxa_0091,
	gfxa_0092,
	gfxa_0093,
	gfxa_0094,
	gfxa_0095,
	gfxa_0096,
	gfxa_0097,
	gfxa_talk_0098,
	gfxa_0099,
	gfxa_yawn,
	gfxa_scratch_head,
	gfxa_roll_head,
	gfxa_grab_crotch,
	gfxa_grab_butt,
	gfxa_sneeze,
	gfxa_talk_00A0,
	gfxa_00A1,
	gfxa_00A2,
	gfxa_talk_00A3,
	gfxa_00A4,
	gfxa_00A5,
	gfxa_00A6,
	gfxa_00A7,
	gfxa_00A8,
	gfxa_00A9,
	gfxa_00AA,
	gfxa_00AB,
	gfxa_push_button,
	gfxa_00AD,
	gfxa_00AE,
	gfxa_stand_1h,
	gfxa_00B0,
	gfxa_00B1,
	gfxa_00B2,
	gfxa_00B3,
	gfxa_00B4,
	gfxa_00B5,
	gfxa_00B6,
	gfxa_00B7,
	gfxa_00B8,
	gfxa_00B9,
	gfxa_00BA,
	gfxa_00BB,
	gfxa_00BC,
	gfxa_00BD,
	gfxa_00BE,
	gfxa_00BF,
	gfxa_00C0,
	gfxa_gun_xbow_equip,
	gfxa_gun_xbow_shoot,
	gfxa_cut_sho_beta_cam,
	gfxa_cut_sho_beta_nochr,
	gfxa_cut_ame_intro_cam_03,
	gfxa_cut_ame_intro_dropship_03,
	gfxa_cut_ame_intro_cam_02,
	gfxa_cut_ame_intro_dropship_02,
	gfxa_cut_ame_intro_cam_01,
	gfxa_cut_ame_intro_dropship_01,
	gfxa_cut_ame_intro_cam_04,
	gfxa_cut_ame_intro_dropship_04,
	gfxa_cut_ame_intro_cam_05,
	gfxa_cut_ame_intro_dropship_05,
	gfxa_cut_pete_intro_cam_01,
	gfxa_cut_pete_intro_cam_02,
	gfxa_cut_pete_intro_cam_03,
	gfxa_cut_pete_intro_cam_05,
	gfxa_gun_xbow_unequip,
	gfxa_gun_xbow_reload,
	gfxa_cut_pete_intro_vehicle_04,
	gfxa_cut_pete_intro_vehicle_01,
	gfxa_cut_pete_intro_vehicle_02,
	gfxa_cut_pete_intro_vehicle_03,
	gfxa_cut_pete_intro_vehicle_07,
	gfxa_00DA,
	gfxa_cut_pete_intro_vehicle_08,
	gfxa_cut_pete_intro_vehicle_05,
	gfxa_cut_pete_intro_vehicle_06,
	gfxa_cut_pete_intro_vehicle_09,
	gfxa_cut_pete_intro_jo_02,
	gfxa_cut_pete_intro_cam_04,
	gfxa_cut_pete_intro_jo_01,
	gfxa_gun_laptop_equip,
	gfxa_gun_laptop_unequip,
	gfxa_gun_laptop_reload,
	gfxa_gun_laptop_shoot,
	gfxa_gun_mp7_equip,
	gfxa_gun_mp7_unequip,
	gfxa_00E8,
	gfxa_gun_mp7_reload,
	gfxa_gun_eagle_equip,
	gfxa_gun_eagle_unequip,
	gfxa_gun_eagle_shoot,
	gfxa_gun_eagle_reload,
	gfxa_cut_ame_intro_cam_09,
	gfxa_cut_ame_intro_dropship_06,
	gfxa_cut_lue_intro_cam_04,
	gfxa_cut_lue_intro_jo,
	gfxa_cut_ame_outro_cam,
	gfxa_cut_ame_outro_jo,
	gfxa_00F4,
	gfxa_cut_ear_intro_cam,
	gfxa_cut_ear_intro_jo,
	gfxa_cut_ear_intro_guard_01,
	gfxa_00F8,
	gfxa_cut_ear_outro_cam_01,
	gfxa_cut_ear_outro_jo_01,
	gfxa_00FB,
	gfxa_cut_ame_intro_cam_07,
	gfxa_cut_ame_intro_dropship_07,
	gfxa_cut_ame_intro_sec,
	gfxa_cut_ame_intro_cam_08,
	gfxa_cut_ame_intro_dropship_08,
	gfxa_0101,
	gfxa_cut_ame_intro_banner1_01,
	gfxa_cut_ame_intro_cam_06,
	gfxa_cut_ame_intro_dropship_11,
	gfxa_cut_ame_intro_cam_11,
	gfxa_cut_ame_intro_dropship_12,
	gfxa_cut_ame_intro_cam_13,
	gfxa_cut_ame_intro_dropship_13,
	gfxa_cut_ame_intro_jo_09,
	gfxa_cut_ame_intro_rope_02,
	gfxa_cut_ame_intro_cam_14,
	gfxa_cut_ame_intro_dropship_14,
	gfxa_cut_ame_intro_jo_02,
	gfxa_cut_ame_intro_rope_03,
	gfxa_cut_ame_intro_banner1_04,
	gfxa_0110,
	gfxa_0111,
	gfxa_gun_tester_shoot,
	gfxa_0113,
	gfxa_0114,
	gfxa_gun_tmp_reload,
	gfxa_gun_tmp_shoot,
	gfxa_cut_ame_intro_banner2_01,
	gfxa_cut_ame_intro_banner2_04,
	gfxa_cut_ame_intro_vehicle_12,
	gfxa_cut_ame_intro_vehicle_13,
	gfxa_cut_ame_intro_vehicle_14,
	gfxa_cut_ame_intro_vehicle_06,
	gfxa_cut_ame_intro_vehicle_07,
	gfxa_cut_ame_intro_vehicle_08,
	gfxa_cut_ame_intro_vehicle_09,
	gfxa_cut_ame_intro_vehicle_10,
	gfxa_cut_ame_intro_vehicle_11,
	gfxa_cut_ame_intro_vehicle_01,
	gfxa_cut_ame_intro_vehicle_02,
	gfxa_cut_ame_intro_vehicle_03,
	gfxa_cut_ame_intro_vehicle_04,
	gfxa_cut_ame_intro_vehicle_05,
	gfxa_cut_ame_intro_vehicle_15,
	gfxa_cut_ame_intro_vehicle_16,
	gfxa_cut_ame_intro_vehicle_17,
	gfxa_cut_ame_intro_vehicle_18,
	gfxa_cut_ame_intro_vehicle_19,
	gfxa_cut_ame_intro_vehicle_20,
	gfxa_cut_ame_intro_vehicle_21,
	gfxa_cut_ame_intro_cam_10,
	gfxa_cut_ame_intro_dropship_09,
	gfxa_0130,
	gfxa_cut_ame_intro_banner1_02,
	gfxa_cut_ame_intro_banner2_02,
	gfxa_cut_ame_intro_cam_12,
	gfxa_cut_ame_intro_dropship_10,
	gfxa_cut_ame_intro_rope_01,
	gfxa_cut_ame_intro_banner1_03,
	gfxa_cut_ame_intro_banner2_03,
	gfxa_cut_ark_intro_cam,
	gfxa_cut_ark_intro_jo,
	gfxa_cut_ark_intro_guard_01,
	gfxa_013B,
	gfxa_013C,
	gfxa_cut_ark_intro_drc,
	gfxa_013E,
	gfxa_013F,
	gfxa_cut_ear_outro_cam_02,
	gfxa_cut_ear_outro_jo_02,
	gfxa_0142,
	gfxa_cut_ear_outro_cam_03,
	gfxa_cut_ear_outro_jo_03,
	gfxa_0145,
	gfxa_cut_ear_outro_cam_04,
	gfxa_cut_ear_outro_jo_04,
	gfxa_0148,
	gfxa_cut_ear_outro_cam_05,
	gfxa_cut_ear_outro_jo_05,
	gfxa_cut_ear_outro_drc_01,
	gfxa_cut_ear_outro_cam_06,
	gfxa_cut_ear_outro_jo_06,
	gfxa_cut_ear_outro_drc_02,
	gfxa_cut_ear_outro_cam_07,
	gfxa_cut_ear_outro_jo_07,
	gfxa_cut_ear_outro_drc_03,
	gfxa_cut_ear_outro_cam_08,
	gfxa_cut_ear_outro_jo_08,
	gfxa_cut_ear_outro_drc_04,
	gfxa_cut_ame_intro_cam_15,
	gfxa_cut_ame_intro_jo_03,
	gfxa_cut_ark_outro_cam,
	gfxa_cut_ark_outro_jo,
	gfxa_cut_ark_outro_cass,
	gfxa_cut_ark_outro_mrb,
	gfxa_cut_ark_outro_guard1,
	gfxa_cut_ark_outro_guard2,
	gfxa_cut_ark_outro_drc,
	gfxa_cut_ark_outro_dropship,
	gfxa_015F,
	gfxa_0160,
	gfxa_cut_ame_intro_banner1_05,
	gfxa_cut_ame_intro_banner2_05,
	gfxa_0163,
	gfxa_0164,
	gfxa_cut_depo_intro_cam,
	gfxa_cut_depo_intro_jo,
	gfxa_cut_depo_intro_guard_01,
	gfxa_0168,
	gfxa_0169,
	gfxa_016A,
	gfxa_cut_cave_beta_cam,
	gfxa_cut_cave_beta_guard1,
	gfxa_cut_cave_beta_guard2,
	gfxa_cut_cave_beta_guard3,
	gfxa_cut_cave_beta_stewardess,
	gfxa_cut_cave_beta_jo,
	gfxa_cut_eld_intro_cam_01,
	gfxa_cut_eld_intro_neg_01,
	gfxa_cut_eld_intro_taker1_01,
	gfxa_cut_eld_intro_taker2_01,
	gfxa_cut_eld_intro_dropship_01,
	gfxa_0176,
	gfxa_0177,
	gfxa_cut_pete_outro_cam,
	gfxa_cut_pete_outro_jo,
	gfxa_cut_eld_outro_cam,
	gfxa_cut_eld_outro_carr,
	gfxa_cut_eld_outro_jo,
	gfxa_cut_lue_outro_cam,
	gfxa_cut_lue_outro_jon,
	gfxa_cut_lue_outro_jo,
	gfxa_cut_lue_outro_guard,
	gfxa_cut_lue_intro_cam_01,
	gfxa_cut_lue_intro_guard,
	gfxa_cut_lue_intro_cam_02,
	gfxa_cut_lue_intro_lab_01,
	gfxa_cut_lue_intro_bio1_01,
	gfxa_cut_lue_intro_bio2_01,
	gfxa_cut_lue_intro_bed_01,
	gfxa_cut_lue_intro_cam_03,
	gfxa_cut_lue_intro_bio1_02,
	gfxa_cut_lue_intro_bio2_02,
	gfxa_cut_lue_intro_bed_02,
	gfxa_cut_rit_intro_cam_01,
	gfxa_cut_rit_intro_trent,
	gfxa_cut_rit_intro_pres,
	gfxa_cut_rit_intro_str,
	gfxa_0190,
	gfxa_cut_depo_mid_cam,
	gfxa_cut_depo_mid_mrb,
	gfxa_cut_depo_mid_cass,
	gfxa_cut_depo_mid_trent,
	gfxa_cut_depo_mid_str,
	gfxa_cut_depo_outro_cam,
	gfxa_cut_depo_outro_jo,
	gfxa_cut_lip_outro_cam,
	gfxa_cut_lip_outro_jo,
	gfxa_cut_lip_outro_bio1,
	gfxa_cut_lip_outro_bio2,
	gfxa_cut_tra_intro_cam,
	gfxa_cut_tra_intro_jo,
	gfxa_cut_tra_intro_bio1,
	gfxa_cut_tra_intro_bio2,
	gfxa_cut_tra_intro_bed,
	gfxa_cut_lip_outro_bed,
	gfxa_cut_imp_outro_cam_01,
	gfxa_cut_imp_outro_jo_01,
	gfxa_cut_imp_outro_crate1_01,
	gfxa_cut_imp_outro_crate2_01,
	gfxa_cut_imp_outro_crate3_01,
	gfxa_cut_imp_outro_crate4_01,
	gfxa_cut_imp_outro_crate5_01,
	gfxa_cut_imp_outro_crate6_01,
	gfxa_cut_imp_outro_crate7_01,
	gfxa_01AB,
	gfxa_cut_imp_outro_cam_02,
	gfxa_cut_imp_outro_skedar1_01,
	gfxa_cut_imp_outro_skedar2,
	gfxa_01AF,
	gfxa_01B0,
	gfxa_cut_imp_outro_laser1,
	gfxa_01B2,
	gfxa_01B3,
	gfxa_cut_imp_outro_dropship_01,
	gfxa_cut_azt_intro_cam,
	gfxa_cut_azt_intro_jo,
	gfxa_cut_eld_intro_cam_02,
	gfxa_cut_eld_intro_neg_02,
	gfxa_cut_eld_intro_taker1_02,
	gfxa_cut_eld_intro_taker2_02,
	gfxa_cut_eld_intro_cam_03,
	gfxa_cut_eld_intro_jo_01,
	gfxa_cut_eld_intro_dropship_02,
	gfxa_cut_eld_intro_cam_04,
	gfxa_cut_eld_intro_jo_02,
	gfxa_cut_eld_intro_taker1_03,
	gfxa_cut_eld_intro_taker2_03,
	gfxa_cut_lee_intro_cam,
	gfxa_cut_lee_intro_jo,
	gfxa_cut_lee_intro_cass,
	gfxa_cut_lee_intro_skedar,
	gfxa_cut_lip_intro_cam,
	gfxa_cut_lip_intro_jon,
	gfxa_cut_lip_intro_jo,
	gfxa_cut_lip_intro_guard,
	gfxa_cut_lip_intro_crate,
	gfxa_cut_tra_mid_cam,
	gfxa_cut_tra_mid_elvis,
	gfxa_cut_tra_mid_jon,
	gfxa_cut_tra_mid_jo,
	gfxa_cut_tra_mid_bed,
	gfxa_cut_rit_intro_cam_02,
	gfxa_cut_rit_intro_jo_01,
	gfxa_cut_rit_intro_cam_03,
	gfxa_cut_rit_intro_jo_02,
	gfxa_cut_pam_mid_cam,
	gfxa_cut_pam_mid_jo,
	gfxa_cut_pam_mid_elvis,
	gfxa_cut_pam_mid_drc,
	gfxa_cut_pam_mid_card,
	gfxa_cut_azt_outro_cam,
	gfxa_cut_azt_outro_skedar,
	gfxa_cut_azt_outro_elvis,
	gfxa_cut_azt_outro_trent,
	gfxa_cut_azt_outro_mrb,
	gfxa_cut_azt_outro_pres,
	gfxa_cut_azt_outro_jo,
	gfxa_cut_azt_outro_crate,
	gfxa_cut_lee_outro_cam,
	gfxa_cut_lee_outro_jo,
	gfxa_cut_lee_outro_elvis,
	gfxa_cut_lee_outro_skshuttle,
	gfxa_cut_cave_intro_cam,
	gfxa_cut_cave_intro_jo,
	gfxa_cut_cave_intro_trent,
	gfxa_cut_cave_intro_nsa1,
	gfxa_cut_cave_intro_nsa2,
	gfxa_cut_cave_intro_nsa3,
	gfxa_cut_cave_intro_guard1,
	gfxa_cut_cave_intro_guard2,
	gfxa_cut_cave_intro_cablecar,
	gfxa_cut_cave_intro_binoculars,
	gfxa_cut_pam_intro_cam,
	gfxa_cut_pam_intro_jo,
	gfxa_cut_pam_intro_elvis,
	gfxa_cut_pam_intro_lift,
	gfxa_01F3,
	gfxa_01F4,
	gfxa_cower_01f5,
	gfxa_01F6,
	gfxa_01F7,
	gfxa_01F8,
	gfxa_01F9,
	gfxa_stand_up_from_sitting,
	gfxa_sitting_typing,
	gfxa_01FC,
	gfxa_01FD,
	gfxa_01FE,
	gfxa_reload,
	gfxa_0200,
	gfxa_dont_shoot,
	gfxa_surprised_0202,
	gfxa_0203,
	gfxa_operate_0204,
	gfxa_operate_0205,
	gfxa_operate_0206,
	gfxa_smoke_cigarette,
	gfxa_0208,
	gfxa_reload_0209,
	gfxa_020A,
	gfxa_cut_ear_intro_guard_02,
	gfxa_cut_ark_intro_guard_02,
	gfxa_020D,
	gfxa_020E,
	gfxa_020F,
	gfxa_0210,
	gfxa_0211,
	gfxa_0212,
	gfxa_0213,
	gfxa_0214,
	gfxa_0215,
	gfxa_0216,
	gfxa_0217,
	gfxa_0218,
	gfxa_0219,
	gfxa_021A,
	gfxa_021B,
	gfxa_021C,
	gfxa_021D,
	gfxa_021E,
	gfxa_021F,
	gfxa_0220,
	gfxa_operate_0221,
	gfxa_operate_0222,
	gfxa_operate_0223,
	gfxa_0224,
	gfxa_0225,
	gfxa_walk_backwards,
	gfxa_sitting_dormant,
	gfxa_blinded,
	gfxa_cower_0229,
	gfxa_cut_depo_intro_guard_02,
	gfxa_022B,
	gfxa_022C,
	gfxa_022D,
	gfxa_022E,
	gfxa_022F,
	gfxa_0230,
	gfxa_talk_0231,
	gfxa_talk_0232,
	gfxa_talk_0233,
	gfxa_talk_0234,
	gfxa_0235,
	gfxa_0236,
	gfxa_0237,
	gfxa_0238,
	gfxa_0239,
	gfxa_023A,
	gfxa_head_roll,
	gfxa_023C,
	gfxa_pick_up_gun,
	gfxa_023E,
	gfxa_big_sneeze,
	gfxa_0240,
	gfxa_0241,
	gfxa_throw_no_pin,
	gfxa_0243,
	gfxa_throw_crouching,
	gfxa_draw_pistol_0245,
	gfxa_0246,
	gfxa_0247,
	gfxa_0248,
	gfxa_0249,
	gfxa_024A,
	gfxa_024B,
	gfxa_024C,
	gfxa_024D,
	gfxa_024E,
	gfxa_024F,
	gfxa_0250,
	gfxa_0251,
	gfxa_0252,
	gfxa_0253,
	gfxa_0254,
	gfxa_0255,
	gfxa_0256,
	gfxa_0257,
	gfxa_0258,
	gfxa_0259,
	gfxa_025A,
	gfxa_look_around_025b,
	gfxa_look_around_025c,
	gfxa_look_around_025d,
	gfxa_look_around_025e,
	gfxa_look_around_frantic,
	gfxa_0260,
	gfxa_sdie_fallback,
	gfxa_sdie_roll1,
	gfxa_sdie_roll2,
	gfxa_0264,
	gfxa_sitting_0265,
	gfxa_0266,
	gfxa_sdie_roll3,
	gfxa_sdie_overrailing,
	gfxa_sniping_getdown,
	gfxa_sniping_onground,
	gfxa_sniping_getup,
	gfxa_sniping_die,
	gfxa_026D,
	gfxa_026E,
	gfxa_026F,
	gfxa_0270,
	gfxa_0271,
	gfxa_0272,
	gfxa_0273,
	gfxa_0274,
	gfxa_0275,
	gfxa_0276,
	gfxa_0277,
	gfxa_0278,
	gfxa_0279,
	gfxa_027A,
	gfxa_027B,
	gfxa_027C,
	gfxa_027D,
	gfxa_027E,
	gfxa_027F,
	gfxa_0280,
	gfxa_0281,
	gfxa_0282,
	gfxa_0283,
	gfxa_0284,
	gfxa_0285,
	gfxa_0286,
	gfxa_0287,
	gfxa_draw_pistol_0288,
	gfxa_draw_pistol_0289,
	gfxa_028A,
	gfxa_028B,
	gfxa_028C,
	gfxa_028D,
	gfxa_028E,
	gfxa_028F,
	gfxa_0290,
	gfxa_0291,
	gfxa_0292,
	gfxa_0293,
	gfxa_0294,
	gfxa_0295,
	gfxa_0296,
	gfxa_0297,
	gfxa_0298,
	gfxa_fix_gun_jam_easy,
	gfxa_fix_gun_jam_hard,
	gfxa_on_bike_unarmed,
	gfxa_on_bike_pistol,
	gfxa_on_bike_dualguns,
	gfxa_on_bike_heavygun,
	gfxa_029F,
	gfxa_02A0,
	gfxa_02A1,
	gfxa_02A2,
	gfxa_02A3,
	gfxa_02A4,
	gfxa_02A5,
	gfxa_02A6,
	gfxa_02A7,
	gfxa_02A8,
	gfxa_02A9,
	gfxa_02AA,
	gfxa_02AB,
	gfxa_02AC,
	gfxa_02AD,
	gfxa_02AE,
	gfxa_02AF,
	gfxa_02B0,
	gfxa_02B1,
	gfxa_02B2,
	gfxa_02B3,
	gfxa_02B4,
	gfxa_02B5,
	gfxa_02B6,
	gfxa_02B7,
	gfxa_02B8,
	gfxa_02B9,
	gfxa_02BA,
	gfxa_02BB,
	gfxa_cut_imp_intro_cam_01,
	gfxa_cut_imp_intro_jo_01,
	gfxa_cut_imp_intro_carr,
	gfxa_cut_imp_intro_soldier1,
	gfxa_cut_imp_intro_soldier2,
	gfxa_cut_imp_intro_dropship,
	gfxa_cut_imp_intro_cam_02,
	gfxa_cut_imp_intro_skedar,
	gfxa_cut_imp_intro_jo_02,
	gfxa_cut_imp_intro_door1,
	gfxa_cut_imp_intro_door2,
	gfxa_cut_sho_outro_cam_03,
	gfxa_cut_sho_outro_jo_02,
	gfxa_cut_sho_outro_elvis_02,
	gfxa_cut_sho_outro_rubble01,
	gfxa_cut_sho_outro_rubble02,
	gfxa_cut_sho_outro_rubble03,
	gfxa_cut_sho_outro_rubble04,
	gfxa_cut_dam_intro_cam,
	gfxa_cut_dam_intro_jo,
	gfxa_cut_dam_intro_elvis,
	gfxa_cut_dam_intro_guard,
	gfxa_cut_tra_outro_cam_01,
	gfxa_cut_tra_outro_ufo_01,
	gfxa_cut_tra_outro_cam_02,
	gfxa_cut_tra_outro_ufo_02,
	gfxa_02D6,
	gfxa_cut_pam_outro_cam,
	gfxa_cut_rit_outro_cam,
	gfxa_cut_rit_outro_elvis,
	gfxa_cut_rit_outro_jo,
	gfxa_cut_rit_outro_skshuttle,
	gfxa_cut_rit_outro_ufoexterior,
	gfxa_cut_rit_outro_ufointerior,
	gfxa_cut_rit_outro_plane,
	gfxa_cut_rit_mid_cam,
	gfxa_cut_rit_mid_skshuttle,
	gfxa_cut_rit_mid_plane,
	gfxa_cut_dam_outro_cam,
	gfxa_cut_dam_outro_jo,
	gfxa_cut_dam_outro_elvis,
	gfxa_cut_dam_outro_submarine,
	gfxa_cut_dam_outro_grate,
	gfxa_cut_dam_outro_crate1,
	gfxa_cut_dam_outro_crate2,
	gfxa_cut_sho_intro_cam_01,
	gfxa_cut_sho_intro_cam_02,
	gfxa_cut_sho_intro_jo_01,
	gfxa_cut_sho_intro_elvis_01,
	gfxa_cut_sho_intro_cam_03,
	gfxa_cut_sho_intro_skedar1_01,
	gfxa_cut_sho_intro_skedar2_01,
	gfxa_cut_sho_intro_skedar3_01,
	gfxa_cut_sho_intro_cam_04,
	gfxa_cut_sho_intro_jo_02,
	gfxa_cut_sho_intro_elvis_02,
	gfxa_cut_sho_intro_cam_05,
	gfxa_cut_sho_intro_skedar1_02,
	gfxa_cut_sho_intro_skedar2_02,
	gfxa_cut_sho_intro_skedar3_02,
	gfxa_cut_sho_intro_skedar4_01,
	gfxa_cut_sho_intro_cam_06,
	gfxa_cut_sho_intro_skshuttle_01,
	gfxa_cut_sho_intro_cam_07,
	gfxa_cut_sho_intro_skedar1_03,
	gfxa_cut_sho_intro_skedar2_03,
	gfxa_cut_sho_intro_skedar3_03,
	gfxa_cut_sho_intro_skedar4_02,
	gfxa_cut_sho_intro_king,
	gfxa_cut_sho_intro_cam_08,
	gfxa_cut_sho_intro_skshuttle_02,
	gfxa_cut_sho_intro_jo_03,
	gfxa_cut_tra_outro_guard,
	gfxa_cut_imp_outro_cam_03,
	gfxa_cut_imp_outro_jo_02,
	gfxa_cut_imp_outro_crate1_02,
	gfxa_cut_imp_outro_crate2_02,
	gfxa_cut_imp_outro_crate3_02,
	gfxa_cut_imp_outro_crate4_02,
	gfxa_cut_imp_outro_crate5_02,
	gfxa_cut_imp_outro_crate6_02,
	gfxa_cut_imp_outro_crate7_02,
	gfxa_030E,
	gfxa_cut_imp_outro_dropship_02,
	gfxa_cut_imp_outro_cam_04,
	gfxa_cut_imp_outro_jo_03,
	gfxa_cut_imp_outro_skedar1_02,
	gfxa_cut_imp_outro_crate1_03,
	gfxa_cut_imp_outro_crate2_03,
	gfxa_cut_imp_outro_crate3_03,
	gfxa_cut_imp_outro_crate4_03,
	gfxa_cut_imp_outro_crate5_03,
	gfxa_cut_imp_outro_crate6_03,
	gfxa_cut_imp_outro_crate7_03,
	gfxa_cut_cave_outro_cam,
	gfxa_cut_cave_outro_guard,
	gfxa_cut_cave_outro_plane,
	gfxa_031D,
	gfxa_031E,
	gfxa_031F,
	gfxa_0320,
	gfxa_0321,
	gfxa_0322,
	gfxa_0323,
	gfxa_0324,
	gfxa_0325,
	gfxa_0326,
	gfxa_0327,
	gfxa_0328,
	gfxa_0329,
	gfxa_032A,
	gfxa_032B,
	gfxa_032C,
	gfxa_032D,
	gfxa_032E,
	gfxa_032F,
	gfxa_0330,
	gfxa_0331,
	gfxa_0332,
	gfxa_0333,
	gfxa_0334,
	gfxa_0335,
	gfxa_0336,
	gfxa_0337,
	gfxa_0338,
	gfxa_0339,
	gfxa_033A,
	gfxa_033B,
	gfxa_033C,
	gfxa_033D,
	gfxa_033E,
	gfxa_033F,
	gfxa_0340,
	gfxa_0341,
	gfxa_0342,
	gfxa_0343,
	gfxa_0344,
	gfxa_0345,
	gfxa_0346,
	gfxa_0347,
	gfxa_0348,
	gfxa_0349,
	gfxa_034A,
	gfxa_034B,
	gfxa_034C,
	gfxa_034D,
	gfxa_034E,
	gfxa_034F,
	gfxa_0350,
	gfxa_0351,
	gfxa_skedar_collapse,
	gfxa_0353,
	gfxa_0354,
	gfxa_0355,
	gfxa_0356,
	gfxa_0357,
	gfxa_0358,
	gfxa_0359,
	gfxa_035A,
	gfxa_035B,
	gfxa_035C,
	gfxa_035D,
	gfxa_035E,
	gfxa_035F,
	gfxa_0360,
	gfxa_0361,
	gfxa_0362,
	gfxa_0363,
	gfxa_0364,
	gfxa_0365,
	gfxa_0366,
	gfxa_0367,
	gfxa_0368,
	gfxa_0369,
	gfxa_036A,
	gfxa_036B,
	gfxa_036C,
	gfxa_036D,
	gfxa_036E,
	gfxa_036F,
	gfxa_0370,
	gfxa_0371,
	gfxa_0372,
	gfxa_0373,
	gfxa_0374,
	gfxa_0375,
	gfxa_0376,
	gfxa_0377,
	gfxa_0378,
	gfxa_0379,
	gfxa_037A,
	gfxa_037B,
	gfxa_037C,
	gfxa_037D,
	gfxa_037E,
	gfxa_037F,
	gfxa_0380,
	gfxa_0381,
	gfxa_0382,
	gfxa_0383,
	gfxa_pounce_start,
	gfxa_pounce_air,
	gfxa_0386,
	gfxa_0387,
	gfxa_0388,
	gfxa_0389,
	gfxa_038A,
	gfxa_038B,
	gfxa_038C,
	gfxa_038D,
	gfxa_038E,
	gfxa_038F,
	gfxa_0390,
	gfxa_0391,
	gfxa_0392,
	gfxa_0393,
	gfxa_skedar_run,
	gfxa_0395,
	gfxa_0396,
	gfxa_0397,
	gfxa_0398,
	gfxa_0399,
	gfxa_039A,
	gfxa_039B,
	gfxa_039C,
	gfxa_039D,
	gfxa_039E,
	gfxa_039F,
	gfxa_03A0,
	gfxa_03A1,
	gfxa_03A2,
	gfxa_03A3,
	gfxa_03A4,
	gfxa_03A5,
	gfxa_03A6,
	gfxa_03A7,
	gfxa_03A8,
	gfxa_03A9,
	gfxa_03AA,
	gfxa_03AB,
	gfxa_03AC,
	gfxa_03AD,
	gfxa_03AE,
	gfxa_03AF,
	gfxa_03B0,
	gfxa_03B1,
	gfxa_03B2,
	gfxa_03B3,
	gfxa_03B4,
	gfxa_03B5,
	gfxa_03B6,
	gfxa_03B7,
	gfxa_03B8,
	gfxa_03B9,
	gfxa_03BA,
	gfxa_03BB,
	gfxa_03BC,
	gfxa_03BD,
	gfxa_03BE,
	gfxa_03BF,
	gfxa_03C0,
	gfxa_03C1,
	gfxa_03C2,
	gfxa_03C3,
	gfxa_03C4,
	gfxa_03C5,
	gfxa_03C6,
	gfxa_03C7,
	gfxa_03C8,
	gfxa_03C9,
	gfxa_03CA,
	gfxa_03CB,
	gfxa_03CC,
	gfxa_03CD,
	gfxa_03CE,
	gfxa_03CF,
	gfxa_03D0,
	gfxa_03D1,
	gfxa_03D2,
	gfxa_03D3,
	gfxa_03D4,
	gfxa_03D5,
	gfxa_03D6,
	gfxa_03D7,
	gfxa_03D8,
	gfxa_03D9,
	gfxa_03DA,
	gfxa_03DB,
	gfxa_03DC,
	gfxa_03DD,
	gfxa_03DE,
	gfxa_03DF,
	gfxa_03E0,
	gfxa_03E1,
	gfxa_03E2,
	gfxa_03E3,
	gfxa_03E4,
	gfxa_03E5,
	gfxa_03E6,
	gfxa_03E7,
	gfxa_03E8,
	gfxa_gun_unarmed_punch_left,
	gfxa_gun_unarmed_punch_right,
	gfxa_gun_zsniper_reload,
	gfxa_gun_zsniper_shoot,
	gfxa_gun_shotgun_reload,
	gfxa_gun_shotgun_shoot_single,
	gfxa_gun_rocket_reload,
	gfxa_gun_rocket_shoot,
	gfxa_gun_eagle_reload_dual,
	gfxa_gun_eagle_whip,
	gfxa_gun_zblaster_shoot,
	gfxa_gun_zblaster_reload,
	gfxa_gun_zblaster_reload_dual,
	gfxa_03F6,
	gfxa_gun_thumper_shoot,
	gfxa_gun_thumper_reload,
	gfxa_gun_g36_shoot,
	gfxa_gun_g36_reload,
	gfxa_gun_xg36_reload_0,
	gfxa_gun_xg36_reload_1,
	gfxa_gun_xg36_change,
	gfxa_gun_xg36_shoot_0,
	gfxa_gun_xg36_shoot_1,
	gfxa_gun_zlmg_shoot,
	gfxa_gun_zlmg_reload,
	gfxa_0402,
	gfxa_gun_knife_equip,
	gfxa_gun_knife_slash,
	gfxa_gun_knife_change,
	gfxa_gun_magnum_shoot,
	gfxa_gun_magnum_whip,
	gfxa_gun_magnum_reload,
	gfxa_gun_auto9_reload,
	gfxa_gun_auto9_reload_dual,
	gfxa_gun_auto9_shoot,
	gfxa_gun_sniper_equip,
	gfxa_040D,
	gfxa_gun_xsmg_reload,
	gfxa_gun_sniper_reload,
	gfxa_gun_tranq_reload,
	gfxa_gun_tranq_inject,
	gfxa_0412,
	gfxa_0413,
	gfxa_0414,
	gfxa_gun_zpistol_reload,
	gfxa_0416,
	gfxa_gun_eagle_reload_scope,
	gfxa_gun_zsmg_reload,
	gfxa_gun_famas_reload,
	gfxa_gun_xp90_reload,
	gfxa_gun_knife_throw,
	gfxa_041C,
	gfxa_041D,
	gfxa_041E,
	gfxa_gun_unarmed_push_right,
	gfxa_gun_magnum_reload_dual,
	gfxa_gun_xsmg_reload_dual,
	gfxa_gun_tmp_reload_dual,
	gfxa_gun_zpistol_reload_dual,
	gfxa_gun_xp90_shoot,
	gfxa_gun_unarmed_punch_double,
	gfxa_gun_grenade_throw,
	gfxa_gun_zlmg_equip,
	gfxa_gun_zlmg_unequip,
	gfxa_gun_zrocket_reload,
	gfxa_gun_zrocket_shoot,
	gfxa_gun_grenade_equip,
	gfxa_gun_shotgun_shoot_double,
	gfxa_gun_tranq_shoot,
	gfxa_gun_laser_equip,
	gfxa_gun_laser_unequip,
	gfxa_gun_mine_equip,
	gfxa_gun_mine_unequip,
	gfxa_gun_rmine_equip,
	gfxa_gun_rmine_unequip,
	gfxa_0434,
	gfxa_gun_mine_throw,
	gfxa_gun_rmine_throw,
	gfxa_gun_ecm_equip,
	gfxa_gun_ecm_unequip,
	gfxa_gun_uplink_equip,
	gfxa_gun_uplink_unequip,
	gfxa_043B,
	gfxa_gun_zsmg_shoot,
	gfxa_gun_xsmg_shoot,
	gfxa_gun_zpistol_shoot,
	gfxa_gun_tt33_shoot,
	gfxa_gun_ppk_shoot,
	gfxa_0441,
	gfxa_0442,
	gfxa_0443,
	gfxa_0444,
	gfxa_0445,
	gfxa_0446,
	gfxa_0447,
	gfxa_0448,
	gfxa_0449,
	gfxa_044A,
	gfxa_044B,
	gfxa_cut_sho_outro_cam_01,
	gfxa_cut_sho_outro_king_01,
	gfxa_cut_sho_outro_spike_01,
	gfxa_cut_sho_outro_cam_02,
	gfxa_cut_sho_outro_king_02,
	gfxa_cut_sho_outro_jo_01,
	gfxa_cut_sho_outro_spike_02,
	gfxa_cut_sho_outro_rubble05,
	gfxa_cut_sho_outro_rubble06,
	gfxa_cut_sho_outro_rubble07,
	gfxa_cut_sho_outro_rubble08,
	gfxa_cut_sho_outro_rubble09,
	gfxa_cut_sho_outro_rubble10,
	gfxa_0459,
	gfxa_045A,
	gfxa_045B,
	gfxa_045C,
	gfxa_cut_old_title_cam_01,
	gfxa_cut_old_title_crate1_01,
	gfxa_045F,
	gfxa_0460,
	gfxa_cut_old_title_cam_03,
	gfxa_cut_old_title_crate1_02,
	gfxa_cut_old_title_crate2_02,
	gfxa_cut_old_title_cam_02,
	gfxa_cut_old_title_crate2_01,
	gfxa_0466,
	gfxa_0467,
	gfxa_0468,
	gfxa_0469,
	gfxa_046A,
	gfxa_046B,
	gfxa_cut_old_title_cam_04,
	gfxa_cut_old_title_crate1_03,
	gfxa_cut_old_title_crate2_03,
	gfxa_cut_old_title_crate3,
	gfxa_cut_pete_intro_fence,
	gfxa_cut_pam_intro_guard,
	gfxa_cut_wax_intro_cam,
	gfxa_cut_wax_intro_mrb,
	gfxa_cut_wax_outro_cam,
	gfxa_cut_wax_outro_skshuttle,
	gfxa_cut_sev_intro_cam,
	gfxa_cut_sev_intro_elvis,
	gfxa_cut_sev_intro_bed,
	gfxa_cut_sev_outro_cam,
	gfxa_cut_sev_outro_elvis,
	gfxa_cut_sev_outro_guard,
	gfxa_cut_stat_intro_cam,
	gfxa_cut_stat_intro_maian1,
	gfxa_cut_stat_intro_maian2,
	gfxa_cut_stat_intro_maian3,
	gfxa_cut_stat_outro_cam,
	gfxa_cut_stat_outro_maian1,
	gfxa_cut_stat_outro_maian2,
	gfxa_cut_stat_outro_maian3,
	gfxa_cut_dish_intro_cam,
	gfxa_cut_dish_intro_jo,
	gfxa_0486,
	gfxa_0487,
	gfxa_cut_ate_intro_cam,
	gfxa_0489,
	gfxa_048A,
	gfxa_048B,
	gfxa_048C,
	gfxa_048D,
	gfxa_048E,
	gfxa_048F,
	gfxa_0490,
	gfxa_0491,
	gfxa_0492,
	gfxa_0493,
	gfxa_0494,
	gfxa_0495,
	gfxa_0496,
	gfxa_0497,
	gfxa_0498,
	gfxa_0499,
	gfxa_049A,
	gfxa_049B,
	gfxa_049C,
	gfxa_049D,
	gfxa_049E,
	gfxa_049F,
	gfxa_04A0,
	gfxa_04A1,
	gfxa_04A2,
	gfxa_04A3,
	gfxa_04A4,
	gfxa_04A5,
	gfxa_04A6,
	gfxa_04A7,
	gfxa_04A8,
	gfxa_04A9,
	gfxa_04AA,
	gfxa_04AB,
	gfxa_04AC,
	gfxa_04AD,
	gfxa_04AE,
	gfxa_04AF,
	gfxa_04B0,
	gfxa_04B1,
	gfxa_04B2,
	gfxa_04B3,
	gfxa_04B4,
	gfxa_04B5,
	gfxa_04B6,
	gfxa_end
};

gfxa_t gfxa_death_human_lfoot[] = {
	{ gfxa_death_0020, 0, -1, 0.5, 0, 26, -1 },
	{ 0,               0,  0, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_lshin[] = {
	{ gfxa_death_0020, 0, -1, 0.5, 0, 26, -1 },
	{ 0,               0,  0, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_lthigh[] = {
	{ gfxa_death_0020, 0, -1, 0.5, 1, 26,  -1 },
	{ gfxa_death_0039, 1, -1, 0.5, 0, -1,  -1 },
	{ gfxa_0092,       1, -1, 0.4, 0, 42, 103 },
	{ gfxa_0258,       1, -1, 0.5, 0, 43, 100 },
	{ 0,               0, 0,  0.5, 0, -1,  -1 },
};

gfxa_t gfxa_death_human_rfoot[] = {
	{ gfxa_death_0020, 1, -1, 0.5, 0, 26, -1 },
	{ 0,               0, 0,  0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_rshin[] = {
	{ gfxa_death_0020, 1, -1, 0.5, 0, 26, -1 },
	{ 0,               0, 0,  0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_rthigh[] = {
	{ gfxa_death_0020, 1, -1, 0.5, 1, 26,  -1 },
	{ gfxa_death_0039, 0, -1, 0.5, 0, -1,  -1 },
	{ gfxa_0092,       0, -1, 0.4, 0, 42, 103 },
	{ gfxa_0258,       0, -1, 0.5, 0, 43, 100 },
	{ 0,               0, 0,  0.5, 0, -1,  -1 },
};

gfxa_t gfxa_death_human_pelvis[] = {
	{ gfxa_death_001A, 0, -1, 0.5, 0,  55,  39 },
	{ gfxa_death_001A, 1, -1, 0.5, 0,  55,  39 },
	{ gfxa_death_001C, 0, -1, 0.5, 1,  29,  -1 },
	{ gfxa_death_001C, 1, -1, 0.5, 1,  29,  -1 },
	{ gfxa_death_0021, 0, -1, 0.5, 0,  97,  64 },
	{ gfxa_death_0021, 1, -1, 0.5, 0,  97,  64 },
	{ gfxa_death_0023, 0, -1, 0.5, 0,  31,  -1 },
	{ gfxa_death_0023, 1, -1, 0.5, 0,  31,  -1 },
	{ gfxa_death_0024, 0, -1, 0.5, 0,  36,  -1 },
	{ gfxa_death_0024, 1, -1, 0.5, 0,  36,  -1 },
	{ gfxa_death_0025, 0, -1, 0.5, 0,  28,  -1 },
	{ gfxa_death_0025, 1, -1, 0.5, 0,  28,  -1 },
	{ gfxa_0090,       0, -1, 0.6, 0, 157, 234 },
	{ gfxa_0090,       1, -1, 0.6, 0, 157, 234 },
	{ gfxa_0091,       0, -1, 0.6, 0,  75, 265 },
	{ gfxa_0091,       1, -1, 0.6, 0,  75, 265 },
	{ gfxa_0250,       0, -1, 0.5, 0,  65, 105 },
	{ gfxa_0250,       1, -1, 0.5, 0,  65, 105 },
	{ 0,               0, -1, 0.5, 0,  -1,  -1 },
};

gfxa_t gfxa_death_human_head[] = {
	{ gfxa_death_001A, 0, -1, 0.5, 0, 55,   39 },
	{ gfxa_death_001A, 1, -1, 0.5, 0, 55,   39 },
	{ gfxa_death_001C, 0, -1, 0.5, 1, 29,   -1 },
	{ gfxa_death_001C, 1, -1, 0.5, 1, 29,   -1 },
	{ gfxa_death_0020, 0, -1, 0.5, 1, 26,   -1 },
	{ gfxa_death_0020, 1, -1, 0.5, 1, 26,   -1 },
	{ gfxa_death_0021, 0, -1, 0.5, 0, 97,   64 },
	{ gfxa_death_0021, 1, -1, 0.5, 0, 97,   64 },
	{ gfxa_death_0022, 0, -1, 0.5, 0, 94,   66 },
	{ gfxa_death_0022, 1, -1, 0.5, 0, 94,   66 },
	{ gfxa_death_0023, 0, -1, 0.5, 0, 31,   -1 },
	{ gfxa_death_0023, 1, -1, 0.5, 0, 31,   -1 },
	{ gfxa_death_0024, 0, -1, 0.5, 0, 36,   -1 },
	{ gfxa_death_0024, 1, -1, 0.5, 0, 36,   -1 },
	{ gfxa_death_0025, 0, -1, 0.5, 0, 28,   -1 },
	{ gfxa_death_0025, 1, -1, 0.5, 0, 28,   -1 },
	{ gfxa_0038,       0, -1, 0.5, 0,  -1,  -1 },
	{ gfxa_0038,       1, -1, 0.5, 0,  -1,  -1 },
	{ gfxa_0251,       0, -1, 0.5, 0, 132, 201 },
	{ gfxa_0251,       1, -1, 0.5, 0, 132, 201 },
	{ gfxa_0252,       0, -1, 0.5, 0,  83, 150 },
	{ gfxa_0252,       1, -1, 0.5, 0,  83, 150 },
	{ gfxa_0256,       0, -1, 0.5, 0,  63,  -1 },
	{ gfxa_0256,       1, -1, 0.5, 0,  63,  -1 },
	{ 0,               0, -1, 0.5, 0,  -1,  -1 },
};

gfxa_t gfxa_death_human_lhand[] = {
	{ gfxa_death_0020, 0, -1, 0.5, 0, 26, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_lfore[] = {
	{ gfxa_death_0020, 0, -1, 0.5, 0, 26, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_lbicep[] = {
	{ gfxa_death_0020, 0, -1, 0.5,  1, 26, -1 },
	{ gfxa_008F,       1, -1, 0.45, 1, 52, -1 },
	{ 0,               0, -1, 0.5,  0, -1, -1 },
};

gfxa_t gfxa_death_human_rhand[] = {
	{ gfxa_death_0020, 1, -1, 0.5, 0, 26, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_rfore[] = {
	{ gfxa_death_0020, 1, -1, 0.5, 0, 26, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_rbicep[] = {
	{ gfxa_death_0020, 1, -1, 0.5,  1, 26, -1 },
	{ gfxa_008F,       0, -1, 0.45, 1, 52, -1 },
	{ 0,               0, -1, 0.5,  0, -1, -1 },
};

gfxa_t gfxa_death_human_torso[] = {
	{ gfxa_death_001A, 0, -1, 0.5, 0, 55, 39 },
	{ gfxa_death_001A, 1, -1, 0.5, 0, 55, 39 },
	{ gfxa_death_001C, 0, -1, 0.5, 1, 29, -1 },
	{ gfxa_death_001C, 1, -1, 0.5, 1, 29, -1 },
	{ gfxa_death_0020, 0, -1, 0.5, 1, 26, -1 },
	{ gfxa_death_0020, 1, -1, 0.5, 1, 26, -1 },
	{ gfxa_death_0021, 0, -1, 0.5, 0, 97, 64 },
	{ gfxa_death_0021, 1, -1, 0.5, 0, 97, 64 },
	{ gfxa_death_0022, 0, -1, 0.5, 0, 94, 66 },
	{ gfxa_death_0022, 1, -1, 0.5, 0, 94, 66 },
	{ gfxa_death_0023, 0, -1, 0.5, 0, 31, -1 },
	{ gfxa_death_0023, 1, -1, 0.5, 0, 31, -1 },
	{ gfxa_death_0024, 0, -1, 0.5, 0, 36, -1 },
	{ gfxa_death_0024, 1, -1, 0.5, 0, 36, -1 },
	{ gfxa_death_0025, 0, -1, 0.5, 0, 28, -1 },
	{ gfxa_death_0025, 1, -1, 0.5, 0, 28, -1 },
	{ gfxa_024E,       0, -1, 0.4, 0, 60, -1 },
	{ gfxa_024E,       1, -1, 0.4, 0, 60, -1 },
	{ gfxa_024F,       0, -1, 0.5, 0, 49, 80 },
	{ gfxa_024F,       1, -1, 0.5, 0, 49, 80 },
	{ gfxa_0253,       0, -1, 0.5, 1, 22, -1 },
	{ gfxa_0253,       1, -1, 0.5, 1, 22, -1 },
	{ gfxa_0254,       0, -1, 0.5, 0, 52, 75 },
	{ gfxa_0254,       1, -1, 0.5, 0, 52, 75 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_human_gun[] = {
	{ gfxa_death_001A, 0, -1, 0.5, 0, 55, 39 },
	{ gfxa_death_001A, 1, -1, 0.5, 0, 55, 39 },
	{ gfxa_death_001C, 0, -1, 0.5, 1, 29, -1 },
	{ gfxa_death_001C, 1, -1, 0.5, 1, 29, -1 },
	{ gfxa_death_0021, 0, -1, 0.5, 0, 97, 64 },
	{ gfxa_death_0021, 1, -1, 0.5, 0, 97, 64 },
	{ gfxa_death_0022, 0, -1, 0.5, 0, 94, 66 },
	{ gfxa_death_0022, 1, -1, 0.5, 0, 94, 66 },
	{ gfxa_death_0023, 0, -1, 0.5, 0, 31, -1 },
	{ gfxa_death_0023, 1, -1, 0.5, 0, 31, -1 },
	{ gfxa_death_0024, 0, -1, 0.5, 0, 36, -1 },
	{ gfxa_death_0024, 1, -1, 0.5, 0, 36, -1 },
	{ gfxa_death_0025, 0, -1, 0.5, 0, 28, -1 },
	{ gfxa_death_0025, 1, -1, 0.5, 0, 28, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_human_slumped[] = {
	{ gfxa_0019, 0, -1, 0.5, 0, 67, 54 },
	{ gfxa_0019, 1, -1, 0.5, 0, 67, 54 },
	{ gfxa_0257, 0, -1, 0.5, 0, 15, 80 },
	{ gfxa_0257, 1, -1, 0.5, 0, 15, 80 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_lfoot[] = {
	{ gfxa_0014, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0015, 1, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_lshin[] = {
	{ gfxa_0014, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0015, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_00BC, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_00BD, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_lthigh[] = {
	{ gfxa_0014,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0015,       1, -1, 0.5, 0, -1, -1 },
	{ gfxa_death_0039, 1, 20, 0.4, 0, -1, -1 },
	{ gfxa_00BA,       0, -1, 0.5, 0, -1, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_rfoot[] = {
	{ gfxa_0015, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0014, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_0236, 0, -1, 0.5, 0, -1, -1 },
	{ 0,           0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_rshin[] = {
	{ gfxa_0015, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0014, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_00BE, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_rthigh[] = {
	{ gfxa_0015,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0014,       1, -1, 0.5, 0, -1, -1 },
	{ gfxa_death_0039, 0, 20, 0.4, 0, -1, -1 },
	{ gfxa_00BF,       0, -1, 0.5, 0, -1, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_pelvis[] = {
	{ gfxa_death_0022, 0, 20, 0.5,  0, -1, -1 },
	{ gfxa_death_0022, 1, 20, 0.5,  0, -1, -1 },
	{ gfxa_death_001A, 0, 15, 0.5,  0, -1, -1 },
	{ gfxa_death_001A, 1, 15, 0.5,  0, -1, -1 },
	{ gfxa_death_0023, 0, 10, 0.25, 0, -1, -1 },
	{ gfxa_death_0023, 1, 10, 0.25, 0, -1, -1 },
	{ gfxa_00DA,       0, -1, 0.5,  0, -1, -1 },
	{ gfxa_00F4,       0, -1, 0.5,  0, -1, -1 },
	{ 0,               0, -1, 0.5,  0, -1, -1 },
};

gfxa_t gfxa_hurt_human_head[] = {
	{ gfxa_death_0022, 0, 20, 0.5, 0, -1, -1 },
	{ gfxa_death_0022, 1, 20, 0.5, 0, -1, -1 },
	{ gfxa_death_001A, 0, 15, 0.5, 0, -1, -1 },
	{ gfxa_death_001A, 1, 15, 0.5, 0, -1, -1 },
	{ gfxa_00F8,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_00FB,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0101,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0113,       0, -1, 0.5, 0, -1, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_lhand[] = {
	{ gfxa_0012, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0013, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B8, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_lfore[] = {
	{ gfxa_0010, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0011, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B4, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_021B, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_lbicep[] = {
	{ gfxa_000E,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_000F,       1, -1, 0.5, 0, -1, -1 },
	{ gfxa_death_0022, 0, 20, 0.5, 0, -1, -1 },
	{ gfxa_00B0,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B1,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_021C,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B5,       0, -1, 0.5, 0, -1, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_rhand[] = {
	{ gfxa_0013, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0012, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B9, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_rfore[] = {
	{ gfxa_0011, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0010, 1, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_rbicep[] = {
	{ gfxa_000F,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_000E,       1, -1, 0.5, 0, -1, -1 },
	{ gfxa_death_0022, 1, 20, 0.5, 0, -1, -1 },
	{ gfxa_0190,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B2,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B3,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B6,       0, -1, 0.5, 0, -1, -1 },
	{ gfxa_00B7,       0, -1, 0.5, 0, -1, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_torso[] = {
	{ gfxa_death_0022, 0, 20, 0.5, 0, -1, -1 },
	{ gfxa_death_0022, 1, 20, 0.5, 0, -1, -1 },
	{ gfxa_death_001A, 0, 15, 0.5, 0, -1, -1 },
	{ gfxa_death_001A, 1, 15, 0.5, 0, -1, -1 },
	{ gfxa_0114,       1, -1, 0.5, 0, -1, -1 },
	{ gfxa_0130,       0, -1, 0.5, 0, -1, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_human_gun[] = {
	{ gfxa_death_0022, 0, 20, 0.5, 0, -1, -1 },
	{ gfxa_death_0022, 1, 20, 0.5, 0, -1, -1 },
	{ gfxa_death_001A, 0, 15, 0.5, 0, -1, -1 },
	{ gfxa_death_001A, 1, 15, 0.5, 0, -1, -1 },
	{ 0,               0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_lfoot[] = {
	{ gfxa_0337, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_033C, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_033B, 1, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_lshin[] = {
	{ gfxa_0337, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_033C, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_033B, 1, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_lthigh[] = {
	{ gfxa_0337, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_033C, 1, -1, 0.5, 0, -1, -1 },
	{ gfxa_033B, 1, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_rfoot[] = {
	{ gfxa_0337, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033C, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033B, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_rshin[] = {
	{ gfxa_0337, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033C, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033B, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_rthigh[] = {
	{ gfxa_0337, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033C, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033B, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_pelvis[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_head[] = {
	{ gfxa_0339, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_0338, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033A, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_lhand[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_lfore[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_lbicep[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_rhand[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_rfore[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_rbicep[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_torso[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_gun[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_death_skedar_tail[] = {
	{ gfxa_0336, 0, -1, 0.5, 0, -1, -1 },
	{ gfxa_033D, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_lfoot[] = {
	{ gfxa_038E, 0, -1, 1,   0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_lshin[] = {
	{ gfxa_0390, 0, -1, 0.9, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_lthigh[] = {
	{ gfxa_0390, 0, -1, 0.9, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_rfoot[] = {
	{ gfxa_038E, 1, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_rshin[] = {
	{ gfxa_0390, 1, -1, 0.9, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_rthigh[] = {
	{ gfxa_0390, 1, -1, 0.9, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_pelvis[] = {
	{ gfxa_038C, 0, -1, 0.9, 0, -1, -1 },
	{ gfxa_038C, 1, -1, 0.9, 0, -1, -1 },
	{ gfxa_0341, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_head[] = {
	{ gfxa_0341, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_lhand[] = {
	{ gfxa_0343, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_lfore[] = {
	{ gfxa_038B, 0, -1, 0.9, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_lbicep[] = {
	{ gfxa_038B, 0, -1, 0.9, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_rhand[] = {
	{ gfxa_0343, 1, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_rfore[] = {
	{ gfxa_038B, 1, -1, 0.9, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_rbicep[] = {
	{ gfxa_038B, 1, -1, 0.9, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_torso[] = {
	{ gfxa_038C, 0, -1, 0.9, 0, -1, -1 },
	{ gfxa_038C, 1, -1, 0.9, 0, -1, -1 },
	{ gfxa_0341, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_gun[] = {
	{ gfxa_0343, 0, -1, 0.5, 0, -1, -1 },
	{ 0,         0, -1, 0.5, 0, -1, -1 },
};

gfxa_t gfxa_hurt_skedar_tail[] = {
	{ gfxa_0341, 0, -1, 0.5, 0, -1,  -1  },
	{ 0,         0, -1, 0.5, 0, -1,  -1  },
};

gfxa_t g_xaecialDieAnims[] = {
	{ gfxa_sdie_fallback,    0, -1, 0.5, 0, 149, 175 },
	{ gfxa_sdie_roll1,       0, -1, 0.5, 0, 115, 152 },
	{ gfxa_sdie_roll2,       0, -1, 0.5, 0, 115, 152 },
	{ gfxa_sdie_roll3,       0, -1, 0.5, 0, 115, 152 },
	{ gfxa_sdie_overrailing, 0, -1, 0.5, 0,  83,  99 },
	{ gfxa_022B,             0, -1, 0.5, 0,   0,   0 },
	{ gfxa_022C,             0, -1, 0.5, 0,   0,   0 },
	{ gfxa_022D,             0, -1, 0.5, 0,   0,   0 },
	{ gfxa_022E,             0, -1, 0.5, 0,   0,   0 },
	{ 0,                     0, -1, 0.5, 0,  -1,  -1 },
};

#define hit_part_lfoot     1
#define hit_part_lshin     2
#define hit_part_lthigh    3
#define hit_part_rfoot     4
#define hit_part_rshin     5
#define hit_part_rthigh    6
#define hit_part_pelvis    7
#define hit_part_head      8
#define hit_part_lhand     9
#define hit_part_lfore    10
#define hit_part_lbicep   11
#define hit_part_rhand    12
#define hit_part_rfore    13
#define hit_part_rbicep   14
#define hit_part_torso    15
#define hit_part_tail     16
#define hit_part_gun     100
#define hit_part_hat     110
#define hit_part_general 200
#define hit_part_half    201

gfxax_t gfxa_human[] = {
	{ 0,                0,                      0,                      0, 0 },
	{ hit_part_lfoot,  gfxa_death_human_lfoot,  gfxa_hurt_human_lfoot,  0, 0 },
	{ hit_part_lshin,  gfxa_death_human_lshin,  gfxa_hurt_human_lshin,  0, 0 },
	{ hit_part_lthigh, gfxa_death_human_lthigh, gfxa_hurt_human_lthigh, 0, 0 },
	{ hit_part_rfoot,  gfxa_death_human_rfoot,  gfxa_hurt_human_rfoot,  0, 0 },
	{ hit_part_rshin,  gfxa_death_human_rshin,  gfxa_hurt_human_rshin,  0, 0 },
	{ hit_part_rthigh, gfxa_death_human_rthigh, gfxa_hurt_human_rthigh, 0, 0 },
	{ hit_part_pelvis, gfxa_death_human_pelvis, gfxa_hurt_human_pelvis, 0, 0 },
	{ hit_part_head,   gfxa_death_human_head,   gfxa_hurt_human_head,   0, 0 },
	{ hit_part_lhand,  gfxa_death_human_lhand,  gfxa_hurt_human_lhand,  0, 0 },
	{ hit_part_lfore,  gfxa_death_human_lfore,  gfxa_hurt_human_lfore,  0, 0 },
	{ hit_part_lbicep, gfxa_death_human_lbicep, gfxa_hurt_human_lbicep, 0, 0 },
	{ hit_part_rhand,  gfxa_death_human_rhand,  gfxa_hurt_human_rhand,  0, 0 },
	{ hit_part_rfore,  gfxa_death_human_rfore,  gfxa_hurt_human_rfore,  0, 0 },
	{ hit_part_rbicep, gfxa_death_human_rbicep, gfxa_hurt_human_rbicep, 0, 0 },
	{ hit_part_torso,  gfxa_death_human_torso,  gfxa_hurt_human_torso,  0, 0 },
	{ hit_part_gun,    gfxa_death_human_gun,    gfxa_hurt_human_gun,    0, 0 },
	{ hit_part_hat,    0,                       0,                      0, 0 },
	{ -1,              0,                       0,                      0, 0 },
};

gfxax_t gfxa_skedar[] = {
	{ 0,               0,                        0,                       0, 0 },
	{ hit_part_lfoot,  gfxa_death_skedar_lfoot,  gfxa_hurt_skedar_lfoot,  0, 0 },
	{ hit_part_lshin,  gfxa_death_skedar_lshin,  gfxa_hurt_skedar_lshin,  0, 0 },
	{ hit_part_lthigh, gfxa_death_skedar_lthigh, gfxa_hurt_skedar_lthigh, 0, 0 },
	{ hit_part_rfoot,  gfxa_death_skedar_rfoot,  gfxa_hurt_skedar_rfoot,  0, 0 },
	{ hit_part_rshin,  gfxa_death_skedar_rshin,  gfxa_hurt_skedar_rshin,  0, 0 },
	{ hit_part_rthigh, gfxa_death_skedar_rthigh, gfxa_hurt_skedar_rthigh, 0, 0 },
	{ hit_part_pelvis, gfxa_death_skedar_pelvis, gfxa_hurt_skedar_pelvis, 0, 0 },
	{ hit_part_head,   gfxa_death_skedar_head,   gfxa_hurt_skedar_head,   0, 0 },
	{ hit_part_lhand,  gfxa_death_skedar_lhand,  gfxa_hurt_skedar_lhand,  0, 0 },
	{ hit_part_lfore,  gfxa_death_skedar_lfore,  gfxa_hurt_skedar_lfore,  0, 0 },
	{ hit_part_lbicep, gfxa_death_skedar_lbicep, gfxa_hurt_skedar_lbicep, 0, 0 },
	{ hit_part_rhand,  gfxa_death_skedar_rhand,  gfxa_hurt_skedar_rhand,  0, 0 },
	{ hit_part_rfore,  gfxa_death_skedar_rfore,  gfxa_hurt_skedar_rfore,  0, 0 },
	{ hit_part_rbicep, gfxa_death_skedar_rbicep, gfxa_hurt_skedar_rbicep, 0, 0 },
	{ hit_part_torso,  gfxa_death_skedar_torso,  gfxa_hurt_skedar_torso,  0, 0 },
	{ hit_part_gun,    gfxa_death_skedar_gun,    gfxa_hurt_skedar_gun,    0, 0 },
	{ hit_part_hat,    gfxa_death_skedar_head,   gfxa_hurt_skedar_head,   0, 0 },
	{ hit_part_tail,   gfxa_death_skedar_tail,   gfxa_hurt_skedar_tail,   0, 0 },
	{ -1,              0,                        0,                       0, 0 },
};

gfxax_t gfxa_thatch[] = {
	{  0, 0, 0, 0, 0 },
	{ -1, 0, 0, 0, 0 },
};

gfxax_t gfxa_espy[] = {
	{  0, 0, 0, 0, 0 },
	{ -1, 0, 0, 0, 0 },
};

gfxax_t gfxa_robot[] = {
	{  0, 0, 0, 0, 0 },
	{ -1, 0, 0, 0, 0 },
};

gfxax_t *gfxa_by_race[] = {
	gfxa_human,
	gfxa_skedar,
	gfxa_thatch,
	gfxa_espy,
	gfxa_robot,
};

// a yeet anim is an animation config for a chr being launched by an explosion

struct gffx_yeet {
	int16_t animnum;
	bool    flip;
	float   speed;
	float   frame_start;
	float   frame_thud;
	float   frame_end;
};

gffx_yeet gffx_yeet_Human[] = {
	{ gfxa_0082, 0, 0.5, 9,  29, -1 },
	{ gfxa_0082, 1, 0.5, 9,  29, -1 },
	{ gfxa_008A, 0, 0.5, 11, 31, -1 },
	{ gfxa_008A, 1, 0.5, 11, 31, -1 },
	{ gfxa_0089, 0, 0.5, 6,  27, -1 },
	{ gfxa_0089, 1, 0.5, 6,  27, -1 },
	{ gfxa_008C, 0, 0.5, 29, 48, -1 },
	{ gfxa_008C, 1, 0.5, 29, 48, -1 },
	{ gfxa_008D, 0, 0.5, 29, 49, -1 },
	{ gfxa_008D, 1, 0.5, 29, 49, -1 },
	{ gfxa_008E, 0, 0.5, 19, 42, -1 },
	{ gfxa_008E, 1, 0.5, 19, 42, -1 },
	{ gfxa_0086, 0, 0.5, 0,  60, -1 },
	{ gfxa_0086, 1, 0.5, 0,  60, -1 },
	{ gfxa_0087, 0, 0.5, 6,  29, -1 },
	{ gfxa_0087, 1, 0.5, 6,  29, -1 },
	{ gfxa_0084, 0, 0.5, 8,  25, -1 },
	{ gfxa_0084, 1, 0.5, 8,  25, -1 },
	{ gfxa_0085, 0, 0.5, 8,  25, -1 },
	{ gfxa_0085, 1, 0.5, 8,  25, -1 },
	{ gfxa_0088, 0, 0.5, 12, 29, -1 },
	{ gfxa_0088, 1, 0.5, 12, 29, -1 },
	{ gfxa_008B, 0, 0.5, 22, 41, -1 },
	{ gfxa_008B, 1, 0.5, 22, 41, -1 },
	{ 0,         0, 0.5, 0,  0,  -1 },
};

int g_YeetAnimIndexesHumanAngle0[] = { 0,  1,   2,  3, 4, 5 };
int g_YeetAnimIndexesHumanAngle1[] = { 7,  9,  11 };
int g_YeetAnimIndexesHumanAngle2[] = { 6,  8,  10 };
int g_YeetAnimIndexesHumanAngle3[] = { 12, 15,  0 };
int g_YeetAnimIndexesHumanAngle4[] = { 13, 14,  0 };
int g_YeetAnimIndexesHumanAngle5[] = { 18, 19, 20, 21 };
int g_YeetAnimIndexesHumanAngle6[] = { 16, 22 };
int g_YeetAnimIndexesHumanAngle7[] = { 17, 23 };

gffx_yeet gffx_yeet_Skedar[] = {
	{ gfxa_033F, 0, 0.5, 0, -1, -1 },
	{ gfxa_033F, 0, 0.5, 0, -1, -1 },
	{ gfxa_033F, 0, 0.5, 0, -1, -1 },
	{ gfxa_033F, 0, 0.5, 0, -1, -1 },
	{ gfxa_033F, 0, 0.5, 0, -1, -1 },
	{ gfxa_033F, 0, 0.5, 0, -1, -1 },
	{ gfxa_033F, 0, 0.5, 0, -1, -1 },
	{ gfxa_033F, 0, 0.5, 0, -1, -1 },
	{ 0,         0, 0.5, 0, 0,  -1 },
};

int g_YeetAnimIndexesSkedarAngle0[] = { 0 };
int g_YeetAnimIndexesSkedarAngle1[] = { 1 };
int g_YeetAnimIndexesSkedarAngle2[] = { 2 };
int g_YeetAnimIndexesSkedarAngle3[] = { 3 };
int g_YeetAnimIndexesSkedarAngle4[] = { 4 };
int g_YeetAnimIndexesSkedarAngle5[] = { 7 };
int g_YeetAnimIndexesSkedarAngle6[] = { 5 };
int g_YeetAnimIndexesSkedarAngle7[] = { 6 };

struct gfxax_yeet_t {
	int *indexes;
	int count;
};

gfxax_yeet_t g_YeetAnimIndexesByRaceAngle[][8] = {
	{
		{ g_YeetAnimIndexesHumanAngle0, 6 },
		{ g_YeetAnimIndexesHumanAngle1, 3 },
		{ g_YeetAnimIndexesHumanAngle3, 3 },
		{ g_YeetAnimIndexesHumanAngle6, 2 },
		{ g_YeetAnimIndexesHumanAngle5, 4 },
		{ g_YeetAnimIndexesHumanAngle7, 2 },
		{ g_YeetAnimIndexesHumanAngle4, 3 },
		{ g_YeetAnimIndexesHumanAngle2, 3 },
	}, {
		{ g_YeetAnimIndexesSkedarAngle0, 1 },
		{ g_YeetAnimIndexesSkedarAngle1, 1 },
		{ g_YeetAnimIndexesSkedarAngle3, 1 },
		{ g_YeetAnimIndexesSkedarAngle6, 1 },
		{ g_YeetAnimIndexesSkedarAngle5, 1 },
		{ g_YeetAnimIndexesSkedarAngle7, 1 },
		{ g_YeetAnimIndexesSkedarAngle4, 1 },
		{ g_YeetAnimIndexesSkedarAngle2, 1 },
	},
};

//

struct gfxa_attack {
	int16_t i;
	float unk04; // frame number
	float unk08;
	float unk0c;
	float unk10; // frame number
	float unk14; // frame number
	float unk18; // frame number
	float unk1c; // frame number
	float unk20; // frame number
	float unk24; // frame number
	float unk28; // frame number
	float unk2c; // frame number
	float unk30;
	float unk34;
	float unk38;
	float unk3c;
	float unk40;
	float unk44;
};

//

struct gfxax_attack {
	gfxa_attack *animcfg;
	int len;
};

gfxa_attack var800656c0[] = {
	{ gfxa_0002, 28, 0, 0, 0, -1, 23, 54, -1, -1, 18, 54, 0.87252569198608, -0.52351540327072, 1.0470308065414, -0.34901028871536, 1.6000000238419, 1.7999999523163 },
	{ 0,          0, 0, 0, 0, -1, 0,  0,  0,  0,  0,  0,  0,                0,                 0,                0,                0,               0               },
};

gfxax_attack var80065750 = { var800656c0, 0xffffffff };

gfxa_attack var80065758[] = {
	{ gfxa_0032, 37, 0, 0, 0, -1, 30, 81, -1, -1, 25, 81, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.69802057743073, 1.6000000238419, 1.75 },
	{ gfxa_0003, 27, 0, 0, 0, -1, 22, 61, -1, -1, 17, 61, 0.87252569198608, -0.26175770163536, 0.69802057743073, -0.69802057743073, 2,               1    },
	{ 0,          0, 0, 0, 0, -1, 0,  0,  0,  0,  0,  0,  0,                0,                 0,                0,                 0,               0    },
};

gfxax_attack var80065830 = { var80065758, 0xffffffff };

gfxa_attack var80065838[] = {
	{ gfxa_0032, 37, 0, 0, 0, -1, 30, 81, -1, -1, 25, 81, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.69802057743073, 1.6000000238419, 1.75 },
	{ gfxa_0003, 27, 0, 0, 0, -1, 22, 61, -1, -1, 17, 61, 0.87252569198608, -0.26175770163536, 0.69802057743073, -0.69802057743073, 2,               1    },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0,               0    },
};

gfxax_attack var80065910 = { var80065838, 0xffffffff };

gfxa_attack var80065918[] = {
	{ gfxa_0004, 19, 0, 1.5707963705063, 0, -1, 19, 61, -1, -1, 14, 61, 0.87252569198608, -0.34901028871536, 0.43626284599304, -1.0470308065414, 2.5, 2.5 },
	{ 0,          0, 0, 0,               0, -1, 0,  0,  0,  0,  0,  0,  0,                 0,                0,                 0,               0,   0   },
};

gfxax_attack var800659a8 = { var80065918, 0xffffffff };

gfxa_attack var800659b0[] = {
	{ gfxa_0006, 27, 0, 0, 0, -1, 39, 74, -1, -1, 34, 74, 0.87252569198608, -0.69802057743073, 0.7852731347084, -0.69802057743073, 1.5, 1.5 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                0,                0,   0   },
};

gfxax_attack var80065a40 = { var800659b0, 0xffffffff };

gfxa_attack var80065a48[] = {
	{ gfxa_034A, 20, 0, 0, 0, -1, 25, 50, -1, -1, 10, 50, 0.34901028871536, -0.34901028871536, 0.52351540327072, -0.52351540327072, 1, 1 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80065ad8 = { var80065a48, 0xffffffff };

gfxax_attack *g_StandHeavyAttackAnims[][32] = {
	{
		// race_human
		&var80065750, &var80065830, &var80065830, &var80065830,
		&var80065830, &var80065830, &var80065830, &var80065830,
		&var80065830, &var80065830, &var800659a8, &var800659a8,
		&var800659a8, &var800659a8, &var800659a8, &var800659a8,
		&var80065a40, &var80065a40, &var80065a40, &var80065a40,
		&var80065a40, &var80065a40, &var80065910, &var80065910,
		&var80065910, &var80065910, &var80065910, &var80065910,
		&var80065910, &var80065910, &var80065910, &var80065750,
	}, {
		// race_skedar
		&var80065ad8, &var80065ad8, &var80065ad8, &var80065ad8,
		&var80065ad8, &var80065ad8, &var80065ad8, &var80065ad8,
		&var80065ad8, &var80065ad8, &var80065ad8, &var80065ad8,
		&var80065ad8, &var80065ad8, &var80065ad8, &var80065ad8,
		&var80065ad8, &var80065ad8, &var80065ad8, &var80065ad8,
		&var80065ad8, &var80065ad8, &var80065ad8, &var80065ad8,
		&var80065ad8, &var80065ad8, &var80065ad8, &var80065ad8,
		&var80065ad8, &var80065ad8, &var80065ad8, &var80065ad8,
	},
};

gfxa_attack var80065be0[] = {
	{ gfxa_0041, 26, 0, 0, 12, 140, 58, 92, 60, 79, 20, 120, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.69802057743073, 0, 0 },
	{ gfxa_0044,  0, 0, 0, 17, 100, 25, 87, 30, 55, 20,  93, 0.87252569198608, -0.69802057743073, 0.69802057743073, -1.0470308065414,  0, 0 },
	{ gfxa_0045,  0, 0, 0, 12,  64, 19, 51, 24, 46, 14,  58, 0.87252569198608, -0.69802057743073, 0.52351540327072, -0.7852731347084,  0, 0 },
	{ gfxa_0046, 22, 0, 0,  4,  69, 22, 49, 22, 33,  8,  58, 0.87252569198608, -0.69802057743073, 0.43626284599304, -0.7852731347084,  0, 0 },
	{ 0,          0, 0, 0,  0,  -1,  0,  0,  0,  0,  0,   0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80065d48 = { var80065be0, 0xffffffff };

gfxa_attack var80065d50[] = {
	{ gfxa_0041, 26, 0, 0, 12, 140, 58, 92, 60, 79, 20, 120, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.69802057743073, 0, 0 },
	{ gfxa_0046, 22, 0, 0, 4,   69, 22, 49, 22, 33,  8,  58, 0.87252569198608, -0.69802057743073, 0.43626284599304, -0.7852731347084,  0, 0 },
	{ 0,          0, 0, 0, 0,   -1,  0,  0,  0,  0,  0,   0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80065e28 = { var80065d50, 0xffffffff };

gfxa_attack var80065e30[] = {
	{ gfxa_0041, 26, 0, 0,              12, 140, 58, 92, 60, 79, 20, 120, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.69802057743073, 0, 0 },
	{ gfxa_0046, 22, 0, 0,               4,  69, 22, 49, 22, 33,  8,  58, 0.87252569198608, -0.69802057743073, 0.43626284599304, -0.7852731347084,  0, 0 },
	{ gfxa_0049,  0, 0, 1.5707963705063, 7, 130, 45, 93, 56, 73, 26, 107, 0.87252569198608, -0.69802057743073, 0.34901028871536, -0.52351540327072, 0, 0 },
	{ gfxa_004A, 15, 0, 1.5707963705063, 5,  76, 20, 31, 31, 38, 15,  49, 0.87252569198608, -0.69802057743073, 0.52351540327072, -1.0470308065414,  0, 0 },
	{ 0,          0, 0, 0,               0,  -1,  0,  0,  0,  0,  0,   0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80065f98 = { var80065e30, 0xffffffff };

gfxa_attack var80065fa0[] = {
	{ gfxa_0041, 26, 0, 0,               12, 140, 58, 92,  60, 79, 20, 120, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.69802057743073, 0, 0 },
	{ gfxa_0046, 22, 0, 0,               4,  69,  22, 49,  22, 33, 8,  58,  0.87252569198608, -0.69802057743073, 0.43626284599304, -0.7852731347084,  0, 0 },
	{ gfxa_0047,  0, 0, 4.7123889923096, 7,  139, 54, 105, 61, 88, 26, 120, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.61076802015305, 0, 0 },
	{ gfxa_0048, 19, 0, 4.7123889923096, 4,  79,  21, 50,  26, 42, 10, 64,  0.87252569198608, -0.69802057743073, 0.69802057743073, -0.61076802015305, 0, 0 },
	{ 0,          0, 0, 0,               0,  -1,  0,  0,   0,  0,  0,  0,   0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80066108 = { var80065fa0, 0xffffffff };

gfxa_attack var80066110[] = {
	{ gfxa_004A, 19, 0, 1.5707963705063, 5, 76, 20, 31, 31, 38, 15, 49, 0.87252569198608, -0.69802057743073, 0.52351540327072, -1.0470308065414, 0, 0 },
	{ 0,          0, 0, 0,               0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,               0, 0 },
};

gfxax_attack var800661a0 = { var80066110, 0xffffffff };

gfxa_attack var800661a8[] = {
	{ gfxa_0048, 19, 0, 4.7123889923096, 4, 79, 21, 50, 26, 42, 10, 64, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.61076802015305, 0, 0 },
	{ 0,          0, 0, 0,               0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80066238 = { var800661a8, 0xffffffff };

gfxa_attack var80066240[] = {
	{ gfxa_034A, 20, 0, 0, 0, -1, 25, 50, -1, -1, 10, 50, 0.34901028871536, -0.34901028871536, 0.52351540327072, -0.52351540327072, 1, 1 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var800662d0 = { var80066240, 0xffffffff };

gfxax_attack *g_StandLightAttackAnims[][32] = {
	{
		// race_human
		&var80065d48, &var80065d48, &var80065e28, &var80065e28,
		&var80065e28, &var80065f98, &var80065f98, &var80065f98,
		&var80065f98, &var80065f98, &var800661a0, &var800661a0,
		&var800661a0, &var800661a0, &var800661a0, &var800661a0,
		&var80066238, &var80066238, &var80066238, &var80066238,
		&var80066238, &var80066238, &var80066108, &var80066108,
		&var80066108, &var80066108, &var80066108, &var80065e28,
		&var80065e28, &var80065e28, &var80065d48, &var80065d48,
	}, {
		// race_skedar
		&var800662d0, &var800662d0, &var800662d0, &var800662d0,
		&var800662d0, &var800662d0, &var800662d0, &var800662d0,
		&var800662d0, &var800662d0, &var800662d0, &var800662d0,
		&var800662d0, &var800662d0, &var800662d0, &var800662d0,
		&var800662d0, &var800662d0, &var800662d0, &var800662d0,
		&var800662d0, &var800662d0, &var800662d0, &var800662d0,
		&var800662d0, &var800662d0, &var800662d0, &var800662d0,
		&var800662d0, &var800662d0, &var800662d0, &var800662d0,
	},
};


gfxa_attack var800663d8[] = {
	{ gfxa_007A, 26, 0, 0, 7, 92, 28, 68, -1, -1, 11, 73, 0.87252569198608, -0.69802057743073, 0.69802057743073, -0.69802057743073, 0, 0 },
	{ 0,          0, 0, 0, 0, -1, 0,  0,  0,  0,  0,  0,  0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80066468 = { var800663d8, 0xffffffff };

gfxa_attack var80066470[] = {
	{ gfxa_007B, 26, 0, 1.5707963705063,  9, 112, 38, 87, -1, -1, 19, 98, 0.87252569198608, -0.69802057743073, 0.43626284599304, -0.43626284599304, 0, 0 },
	{ gfxa_007D, 25, 0, 1.5707963705063, 10, 112, 32, 86, -1, -1, 19, 97, 0.87252569198608, -0.69802057743073, 0.43626284599304, -0.43626284599304, 0, 0 },
	{ 0,          0, 0, 0,                0,  -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80066548 = { var80066470, 0xffffffff };

gfxa_attack var80066550[] = {
	{ gfxa_007C, 39, 0, 4.7123889923096, 22, 127, 44, 102, -1, -1, 28, 112, 0.87252569198608, -0.69802057743073, 0.43626284599304, -0.43626284599304, 0, 0 },
	{ gfxa_007E, 39, 0, 4.7123889923096, 23, 130, 46, 100, -1, -1, 30, 110, 0.87252569198608, -0.69802057743073, 0.43626284599304, -0.43626284599304, 0, 0 },
	{ 0,          0, 0, 0,                0,  -1,  0,   0,  0,  0,   0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80066628 = { var80066550, 0xffffffff };

gfxa_attack var80066630[] = {
	{ gfxa_034A, 20, 0, 0, 0, -1, 25, 50, -1, -1, 10, 50, 0.34901028871536, -0.34901028871536, 0.52351540327072, -0.52351540327072, 1, 1 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var800666c0 = { var80066630, 0xffffffff };

gfxax_attack *g_StandDualAttackAnims[][32] = {
	{
		// race_human
		&var80066468, &var80066468, &var80066468, &var80066468,
		&var80066468, &var80066548, &var80066548, &var80066548,
		&var80066548, &var80066548, &var80066548, &var80066548,
		&var80066548, &var80066548, &var80066548, &var80066548,
		&var80066628, &var80066628, &var80066628, &var80066628,
		&var80066628, &var80066628, &var80066628, &var80066628,
		&var80066628, &var80066628, &var80066628, &var80066468,
		&var80066468, &var80066468, &var80066468, &var80066468,
	}, {
		// race_skedar
		&var800666c0, &var800666c0, &var800666c0, &var800666c0,
		&var800666c0, &var800666c0, &var800666c0, &var800666c0,
		&var800666c0, &var800666c0, &var800666c0, &var800666c0,
		&var800666c0, &var800666c0, &var800666c0, &var800666c0,
		&var800666c0, &var800666c0, &var800666c0, &var800666c0,
		&var800666c0, &var800666c0, &var800666c0, &var800666c0,
		&var800666c0, &var800666c0, &var800666c0, &var800666c0,
		&var800666c0, &var800666c0, &var800666c0, &var800666c0,
	},
};

gfxa_attack var800667c8[] = {
	{ gfxa_0007,     27, 0, 0, 0, -1, 35, 75, -1, -1, 31, 75, 0.87252569198608, -0.69802057743073, 0.90742671489716, -0.69802057743073, 1.5,             1.5 },
	{ gfxa_kneel_2h, 24, 0, 0, 0, -1, 46, 98, -1, -1, 41, 98, 0.87252569198608, -0.52351540327072, 1.1342834234238,  -0.69802057743073, 1.6000000238419, 1.6000000238419 },
	{ 0,              0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0,               0 },
};

gfxax_attack var800668a0 = { var800667c8, 0xffffffff };

gfxa_attack var800668a8[] = {
	{ gfxa_0009, 26, 0, 0, 0, -1, 34, 87, -1, -1, 29, 87, 0.87252569198608, -0.52351540327072, 0.69802057743073, -0.95977824926376, 1.6000000238419, 2 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0,               0 },
};

gfxax_attack var80066938 = { var800668a8, 0xffffffff };

gfxa_attack var80066940[] = {
	{ gfxa_000A, 28, 0, 0, 0, -1, 36, 88, -1, -1, 31, 88, 0.87252569198608, -0.69802057743073, 0.87252569198608, -0.43626284599304, 1.6000000238419, 1.5 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0,               0 },
};

gfxax_attack var800669d0 = { var80066940, 0xffffffff };

gfxa_attack var800669d8[] = {
	{ gfxa_034A, 20, 0, 0, 0, -1, 25, 50, -1, -1, 10, 50, 0.34901028871536, -0.34901028871536, 0.52351540327072, -0.52351540327072, 1, 1 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80066a68 = { var800669d8, 0xffffffff };

gfxax_attack *g_KneelHeavyAttackAnims[][32] = {
	{
		&var800668a0, &var800668a0, &var800668a0, &var800668a0,
		&var800668a0, &var800668a0, &var800668a0, &var800668a0,
		&var800668a0, &var800668a0, &var80066938, &var80066938,
		&var80066938, &var80066938, &var80066938, &var80066938,
		&var800669d0, &var800669d0, &var800669d0, &var800669d0,
		&var800669d0, &var800669d0, &var800668a0, &var800668a0,
		&var800668a0, &var800668a0, &var800668a0, &var800668a0,
		&var800668a0, &var800668a0, &var800668a0, &var800668a0,
	}, {
		&var80066a68, &var80066a68, &var80066a68, &var80066a68,
		&var80066a68, &var80066a68, &var80066a68, &var80066a68,
		&var80066a68, &var80066a68, &var80066a68, &var80066a68,
		&var80066a68, &var80066a68, &var80066a68, &var80066a68,
		&var80066a68, &var80066a68, &var80066a68, &var80066a68,
		&var80066a68, &var80066a68, &var80066a68, &var80066a68,
		&var80066a68, &var80066a68, &var80066a68, &var80066a68,
		&var80066a68, &var80066a68, &var80066a68, &var80066a68,
	},
};

gfxa_attack var80066b70[] = {
	{ gfxa_kneel_shoot_right_hand, 25, 0, 0, 12, 132, 55, 87, 67, 87, 26, 111, 0.87252569198608, -0.69802057743073, 0.61076802015305, -0.7852731347084, 0, 0 },
	{ gfxa_004C,                   26, 0, 0,  8,  89, 31, 63, 41, 51, 21, 80,  0.87252569198608, -0.69802057743073, 0.34901028871536, -1.1342834234238, 0, 0 },
	{ 0,                            0, 0, 0,  0,  -1,  0,  0,  0,  0,  0,  0,   0,                0,                0,                 0,               0, 0 },
};

gfxax_attack var80066c48 = { var80066b70, 0xffffffff };

gfxa_attack var80066c50[] = {
	{ gfxa_004F, 47, 0, 1.5707963705063, 7, 128, 33, 86, 47, 74, 23, 106, 0.87252569198608, -0.52351540327072,  0.52351540327072, -0.7852731347084,  0,   0 },
	{ gfxa_0050, 18, 0, 1.5707963705063, 7,  78, 28, 52, 35, 45, 15,  66, 0.87252569198608, -0.087252572178841, 0.69802057743073, -0.7852731347084,  1.5, 1 },
	{ gfxa_0051, 20, 0, 1.5707963705063, 13, 92, 37, 67, 42, 55, 25,  84, 0.87252569198608, -0.52351540327072,  0.34901028871536, -0.69802057743073, 0,   0 },
	{ 0,          0, 0, 0,                0, -1,  0,  0,  0,  0,  0,   0, 0,                 0,                 0,                 0,                0,   0 },
};

gfxax_attack var80066d70 = { var80066c50, 0xffffffff };

gfxa_attack var80066d78[] = {
	{ gfxa_004D, 28, 0, 4.7123889923096, 15, 124, 38, 97, 60, 84, 20, 106, 0.87252569198608, -0.69802057743073, 0.52351540327072, -0.87252569198608, 0, 0 },
	{ gfxa_004E, 23, 0, 4.7123889923096,  0,  85, 32, 38, 38, 60, 14,  71, 0.87252569198608, -0.69802057743073, 0.61076802015305, -0.95977824926376, 0, 0 },
	{ 0,          0, 0, 0,                0,  -1,  0,  0,  0,  0,  0,   0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80066e50 = { var80066d78, 0xffffffff };

gfxa_attack var80066e58[] = {
	{ gfxa_034A, 20, 0, 0, 0, -1, 25, 50, -1, -1, 10, 50, 0.34901028871536, -0.34901028871536, 0.52351540327072, -0.52351540327072, 1, 1 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80066ee8 = { var80066e58, 0xffffffff };

gfxax_attack *g_KneelLightAttackAnims[][32] = {
	{
		&var80066c48, &var80066c48, &var80066c48, &var80066c48,
		&var80066c48, &var80066c48, &var80066c48, &var80066c48,
		&var80066c48, &var80066c48, &var80066d70, &var80066d70,
		&var80066d70, &var80066d70, &var80066d70, &var80066d70,
		&var80066e50, &var80066e50, &var80066e50, &var80066e50,
		&var80066e50, &var80066e50, &var80066c48, &var80066c48,
		&var80066c48, &var80066c48, &var80066c48, &var80066c48,
		&var80066c48, &var80066c48, &var80066c48, &var80066c48,
	}, {
		&var80066ee8, &var80066ee8, &var80066ee8, &var80066ee8,
		&var80066ee8, &var80066ee8, &var80066ee8, &var80066ee8,
		&var80066ee8, &var80066ee8, &var80066ee8, &var80066ee8,
		&var80066ee8, &var80066ee8, &var80066ee8, &var80066ee8,
		&var80066ee8, &var80066ee8, &var80066ee8, &var80066ee8,
		&var80066ee8, &var80066ee8, &var80066ee8, &var80066ee8,
		&var80066ee8, &var80066ee8, &var80066ee8, &var80066ee8,
		&var80066ee8, &var80066ee8, &var80066ee8, &var80066ee8,
	},
};

gfxa_attack var80066ff0[] = {
	{ gfxa_0074, 22, 0, 0, 10, 111, 34, 87, -1, -1, 17, 104, 0.87252569198608, -0.69802057743073, 0.61076802015305, -0.7852731347084, 0, 0 },
	{ gfxa_0077, 25, 0, 0,  9,  92, 33, 62, -1, -1, 18,  69, 0.87252569198608, -0.69802057743073, 0.61076802015305, -0.7852731347084, 0, 0 },
	{ 0,          0, 0, 0,  0,  -1,  0,  0,  0,  0,  0,   0, 0,                 0,                0,                 0,               0, 0 },
};

gfxax_attack var800670c8 = { var80066ff0, 0xffffffff };

gfxa_attack var800670d0[] = {
	{ gfxa_0075, 28, 0, 1.5707963705063, 15, 108, 34, 73, -1, -1, 17, 93, 0.87252569198608, -0.69802057743073, 0.52351540327072, -0.7852731347084, 0,   0 },
	{ gfxa_0078, 19, 0, 1.5707963705063, 3,   95, 30, 64, -1, -1, 14, 71, 0.87252569198608, -0.69802057743073, 0.52351540327072, -0.7852731347084, 1.5, 1 },
	{ 0,          0, 0, 0,               0,   -1, 0,   0,  0,  0,  0,  0, 0,                 0,                0,                 0,               0,   0 },
};

gfxax_attack var800671a8 = { var800670d0, 0xffffffff };

gfxa_attack var800671b0[] = {
	{ gfxa_0076, 31, 0, 4.7123889923096, 14, 111, 40, 83, -1, -1, 21, 94, 0.87252569198608, -0.69802057743073, 0.52351540327072, -0.7852731347084, 0, 0 },
	{ gfxa_0079, 26, 0, 4.7123889923096,  7,  89, 34, 60, -1, -1, 20, 68, 0.87252569198608, -0.69802057743073, 0.52351540327072, -0.7852731347084, 0, 0 },
	{ 0,          0, 0, 0,                0,  -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,               0, 0 },
};

gfxax_attack var80067288 = { var800671b0, 0xffffffff };

gfxa_attack var80067290[] = {
	{ gfxa_034A, 20, 0, 0, 0, -1, 25, 50, -1, -1, 10, 50, 0.34901028871536, -0.34901028871536, 0.52351540327072, -0.52351540327072, 1, 1 },
	{ 0,          0, 0, 0, 0, -1,  0,  0,  0,  0,  0,  0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80067320 = { var80067290, 0xffffffff };

gfxax_attack *g_KneelDualAttackAnims[][32] = {
	{
		&var800670c8, &var800670c8, &var800670c8, &var800670c8,
		&var800670c8, &var800670c8, &var800670c8, &var800670c8,
		&var800670c8, &var800670c8, &var800671a8, &var800671a8,
		&var800671a8, &var800671a8, &var800671a8, &var800671a8,
		&var80067288, &var80067288, &var80067288, &var80067288,
		&var80067288, &var80067288, &var800670c8, &var800670c8,
		&var800670c8, &var800670c8, &var800670c8, &var800670c8,
		&var800670c8, &var800670c8, &var800670c8, &var800670c8,
	}, {
		&var80067320, &var80067320, &var80067320, &var80067320,
		&var80067320, &var80067320, &var80067320, &var80067320,
		&var80067320, &var80067320, &var80067320, &var80067320,
		&var80067320, &var80067320, &var80067320, &var80067320,
		&var80067320, &var80067320, &var80067320, &var80067320,
		&var80067320, &var80067320, &var80067320, &var80067320,
		&var80067320, &var80067320, &var80067320, &var80067320,
		&var80067320, &var80067320, &var80067320, &var80067320,
	},
};

gfxa_attack g_RollAttackAnims[] = {
	{ gfxa_000B, 76, 0, 0,               20,  -1, 98, 161, -1, -1, 93, 161, 0.87252569198608, -0.52351540327072,  0.69802057743073, -0.69802057743073, 1.7000000476837, 2 },
	{ gfxa_000C, 58, 0, 0,               10,  -1, 77, 104, -1, -1, 72, 104, 0.87252569198608, -0.34901028871536,  0.61076802015305, -0.69802057743073, 1.5499999523163, 1.5 },
	{ gfxa_000D, 61, 0, 0,               10,  -1, 83, 128, -1, -1, 78, 128, 0.87252569198608, -0.52351540327072,  0.87252569198608, -0.52351540327072, 1.2000000476837, 1.2999999523163 },
	{ gfxa_0027, 63, 0, 0,               10,  -1, 73, 114, -1, -1, 68, 114, 0.87252569198608, -0.52351540327072,  0.61076802015305, -0.61076802015305, 1.6499999761581, 1.5 },
	{ gfxa_000B, 76, 0, 0,               20,  76, 98, 161, -1, -1, 93, 161, 0.87252569198608, -0.52351540327072,  0.69802057743073, -0.69802057743073, 1.7000000476837, 2 },
	{ gfxa_000C, 58, 0, 0,               10,  63, 77, 104, -1, -1, 72, 104, 0.87252569198608, -0.34901028871536,  0.61076802015305, -0.69802057743073, 1.5499999523163, 1.5 },
	{ gfxa_000D, 61, 0, 0,               10,  56, 83, 128, -1, -1, 78, 128, 0.87252569198608, -0.52351540327072,  0.87252569198608, -0.52351540327072, 1.2000000476837, 1.2999999523163 },
	{ gfxa_0027, 63, 0, 0,               10,  50, 73, 114, -1, -1, 68, 114, 0.87252569198608, -0.52351540327072,  0.61076802015305, -0.61076802015305, 1.6499999761581, 1.5 },
	{ gfxa_0045,  0, 0, 0,                7,  64, 19,  51, 24, 46, 14,  58, 0.87252569198608, -0.69802057743073,  0.52351540327072, -0.7852731347084,  0,               0 },
	{ gfxa_004A,  0, 0, 1.5707963705063, 14,  76, 26,  31, 31, 38, 15,  49, 0.87252569198608, -0.69802057743073,  0.52351540327072, -1.0470308065414,  0,               0 },
	{ gfxa_004C, 26, 0, 0,               25,  89, 41,  63, 41, 51, 21,  80, 0.87252569198608, -0.69802057743073,  0.34901028871536, -1.1342834234238,  0,               0 },
	{ gfxa_0050, 18, 0, 1.5707963705063, 11,  78, 33,  52, 35, 45, 15,  66, 0.87252569198608, -0.087252572178841, 0.69802057743073, -0.7852731347084,  1.5,             1 },
	{ gfxa_007A, 26, 0, 0,                7,  92, 28,  68, -1, -1, 11,  73, 0.87252569198608, -0.69802057743073,  0.69802057743073, -0.69802057743073, 0,               0 },
	{ gfxa_007B, 26, 0, 1.5707963705063,  9, 112, 38,  87, -1, -1, 19,  98, 0.87252569198608, -0.69802057743073,  0.43626284599304, -0.43626284599304, 0,               0 },
	{ gfxa_0074, 22, 0, 0,               10,  11, 34,  87, -1, -1, 17, 104, 0.87252569198608, -0.69802057743073,  0.61076802015305, -0.7852731347084,  0,               0 },
	{ gfxa_0075, 28, 0, 1.5707963705063, 15, 108, 34,  73, -1, -1, 17,  93, 0.87252569198608, -0.69802057743073,  0.52351540327072, -0.7852731347084,  0,               0 },
	{ gfxa_007A, 26, 0, 0,                7,  92, 28,  68, -1, -1, 11,  73, 0.87252569198608, -0.69802057743073,  0.69802057743073, -0.69802057743073, 0,               0 },
	{ gfxa_007D, 25, 0, 1.5707963705063, 10, 112, 32,  86, -1, -1, 19,  97, 0.87252569198608, -0.69802057743073,  0.43626284599304, -0.43626284599304, 0,               0 },
	{ gfxa_0077, 25, 0, 0,                9,  92, 33,  62, -1, -1, 18,  69, 0.87252569198608, -0.69802057743073,  0.61076802015305, -0.7852731347084,  0,               0 },
	{ gfxa_0078, 19, 0, 1.5707963705063,  3,  95, 30,  64, -1, -1, 14,  71, 0.87252569198608, -0.69802057743073,  0.52351540327072, -0.7852731347084,  1.5,             1 },
	{ 0,          0, 0, 0,                0,  -1,  0,   0,  0,  0,  0,   0, 0,                 0,                 0,                 0,                0,               0 },
};

gfxa_attack g_WalkAttackAnims[] = {
	{ gfxa_0030, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 1.3999999761581, 1.2999999523163 },
	{ gfxa_0031, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 1.1000000238419, 1.2000000476837 },
	{ gfxa_0052, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0,               0 },
	{ gfxa_0055, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0,               0 },
	{ gfxa_006C, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0,               0 },
	{ gfxa_006E, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0,               0 },
	{ gfxa_006D, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0,               0 },
	{ gfxa_006F, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0,               0 },
	{ 0,         0, 0, 0, 0, -1, 0, 0,  0,  0, 0, 0, 0,                 0,                 0,                0,                0,               0 },
};

gfxa_attack var80067c50[] = {
	{ gfxa_0057, 0, 0, 1.5707963705063, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0, 0 },
	{ gfxa_0056, 0, 0, 4.7123889923096, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0, 0 },
	{ 0,         0, 0, 0,               0, -1, 0, 0,  0,  0, 0, 0, 0,                 0,                0,                 0,                0, 0 },
};

gfxa_attack var80067d28[] = { gfxa_sniping_getdown, 0, 0, 0, 0, 236, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0, 0 };

gfxa_attack var80067d70[] = {
	{ gfxa_sniping_onground, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0, 0 },
	{ gfxa_sniping_getup,    0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0.87252569198608, -0.52351540327072, 0.52351540327072, -0.52351540327072, 0, 0 },
	{ 0,                     0, 0, 0, 0, -1, 0, 0,   0, 0, 0, 0, 0,                 0,                0,                 0,                0, 0 },
};

gfxax_attack var80067e48 = { var80067d28, 0xffffffff };

gfxax_attack *g_LieAttackAnims = &var80067e48;

struct var80067e6c_t {
	int16_t animnum;
	float value;
};

var80067e6c_t var80067e6c[] = {
	{ gfxa_0028,   0 },
	{ gfxa_run_2h, 0 },
	{ gfxa_0029,   0 },
	{ gfxa_006B,   0 },
	{ gfxa_run_1h, 0 },
	{ gfxa_005A,   0 },
	{ gfxa_0072,   0 },
	{ gfxa_0073,   0 },
	{ gfxa_005A,   0 },
	{ gfxa_006C,   0 },
	{ gfxa_0030,   0 },
	{ gfxa_0031,   0 },
	{ gfxa_0052,   0 },
	{ gfxa_0055,   0 },
	{ gfxa_006E,   0 },
	{ gfxa_006F,   0 },
	{ gfxa_0057,   0 },
	{ gfxa_0056,   0 },
	{ gfxa_006D,   0 },
	{ gfxa_run_1h, 0 },
	{ gfxa_020A,   0 },
	{ gfxa_020D,   0 },
	{ gfxa_01F9,   0 },
	{ gfxa_01F8,   0 },
	{ gfxa_021D,   0 },
	{ gfxa_0016,   0 },
	{ gfxa_0018,   0 },
	{ gfxa_001B,   0 },
	{ gfxa_001D,   0 },
	{ gfxa_001E,   0 },
	{ gfxa_005C,   0 },
	{ gfxa_005D,   0 },
	{ gfxa_005E,   0 },
	{ gfxa_005F,   0 },
	{ -1 },
};

var80067e6c_t var80067f84[] = {
	{ gfxa_0392,       0 },
	{ gfxa_0393,       0 },
	{ gfxa_skedar_run, 0 },
	{ -1 },
};

var80067e6c_t var80067fa4[] = {
	{ gfxa_015F, 0 },
	{ gfxa_0160, 0 },
	{ -1 },
};

var80067e6c_t var80067fbc[] = {
	{ gfxa_015F, 0 },
	{ -1 },
};

var80067e6c_t var80067fcc[] = {
	{ gfxa_0238, 0 },
	{ -1 },
};

var80067e6c_t *var80067fdc[] = {
	var80067e6c,
	var80067f84,
	var80067fa4,
	var80067fbc,
	var80067fcc,
};

float func0f02dff0(int16_t animnum) {
	for ( int i = 0; i < array_count(var80067fdc); i++ ) {
		int j = 0;
		int16_t thisanimnum = var80067fdc[i][j].animnum;

		while (thisanimnum >= 0) {
			if (thisanimnum == animnum) return var80067fdc[i][j].value;
			thisanimnum = var80067fdc[i][j++].animnum;
		}
	}

	return 1.0f;
}
