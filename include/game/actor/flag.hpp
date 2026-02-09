#pragma once

enum af0 {
	af0_cant_alert_group    = 0x00000001, // Don't set group alertness when becoming aware
//  af0_unused_00000002     = 0x00000002,
	af0_general_purpose     = 0x00000004,
	af0_can_examine_body    = 0x00000008,
	af0_in_cover            = 0x00000010, // actor is hiding behind cover
 	af0_cover_type_1        = 0x00000040, // use a certain type of cover - never set though
	af0_chuck_norris        = 0x00000080, // Makes punch animation faster, and damage is multiplied by the chr's morale then doubled. Must also have af1_ADJUSTPUNCHSPEED
	af0_can_back_off        = 0x00000100,
	af0_can_retreat         = 0x00000200,
	af0_surprisable         = 0x00000400,
	af0_can_throw           = 0x00000800,
	af0_can_flank           = 0x00001000,
	af0_skip_safety_check   = 0x00002000,
	af0_force_safety_check  = 0x00004000, // overrides af0_skip_safety_check
	af0_8000                = 0x00008000, // Something to do with breaking cover or grenades?
	af0_bot_vs_bot          = 0x00010000, // Allow chr to fight with other AI
	af0_can_trap            = 0x00020000,
	af0_activate_alarm      = 0x00040000, // Chr will run for alarm
	af0_squad_alert_far     = 0x00080000,
	af0_alert_on_hear_spawn = 0x00100000, // Become alert when hearing player and never on screen
	af0_can_flee_surrender  = 0x00200000, // When unarmed, chr can run from player and surrender if caught up
//  af0_unused_00400000     = 0x00400000,
	af0_can_hear_alarm      = 0x00800000,
	af0_no_aim_after_jam    = 0x01000000,
	af0_HOLD_position       = 0x04000000, // chr can't track (follow) player
	af0_cover_type_2        = 0x08000000,
	af0_camp                = 0x10000000, // flag is turned off permanently if player gets too close
	af0_can_hear_spawn      = 0x20000000,
	af0_hear_require_los    = 0x40000000,
	af0_can_lose_gun        = 0x80000000,

	// quip

	af0_said_quip_injury = 0x00000020,
	af0_said_quip_ambush = 0x02000000,
};

enum af1 {
	af1_melee_only                = 0x00000001,
	af1_lost_gun                  = 0x00000002, // Chr has dropped their gun and can no longer recover it
	af1_can_attack_rand           = 0x00000004, // Can use act_attack_rand as part of general attack anims
	af1_WARFIRSTKING              = 0x00000008, // Specific to WAR only
	af1_can_attack_rand_reload    = 0x00000010, // Same as af1_can_attack_rand, but reload afterwards
	af1_can_reload                = 0x00000020,
	af1_can_snipe                 = 0x00000040,
	af1_ADJUSTPUNCHSPEED          = 0x00000080, // Makes chr punch slower, unless chr also has CHRFLAG0_CHUCKNORRIS
	af1_idle                      = 0x00000100,
	af2_prewarned                 = 0x00000200,
	af1_in_dark_room              = 0x00000400, // Lights are out - chr has poor visibility
	af1_punch_bot_extra_damage    = 0x00000800, // Punch does extra damage if target is AI - once only
	af1_no_melee                  = 0x00001000,
	af1_throw_first               = 0x00002000, // throw grenade as first attack
	af1_allow_soft_cover          = 0x00004000,
	af1_long_espy_observation     = 0x00008000,
	af1_hear_spawn_alert_if_alarm = 0x00010000, // After hearing an alarm, if the chr spawns a clone due to hearing you the chr themself will become alert
	af1_dodged                    = 0x00020000, // has no effect
	af1_flanked                   = 0x00040000,
	af1_no_idle                   = 0x00080000, // Don't yawn etc
	af1_bot_vs_bot_advantaged     = 0x00100000, // Chr will attack other AI first
	af1_NOOP_00200000             = 0x00200000,
	af1_punch_then_general_combat = 0x00400000, // If unset, return after punching. If set, assign general combat
	af1_done_search_anim          = 0x00800000,
	af1_looking_for_target        = 0x01000000, // Chr is tracking/searching for their target
	af1_stop_tracking_if_seen     = 0x02000000,
	af1_can_look_around           = 0x04000000,
	af1_talking_to_disguise       = 0x08000000,
	af1_search_same_room          = 0x10000000, // Search for player in chr's current room rather than player's current room
	af1_can_draw_pistol           = 0x20000000,
	af1_ignore_cover              = 0x40000000,
	af1_punch_harder              = 0x80000000,
};

enum af2 {
	af2_droppingitem         = 0x00000001, // actor is currently dropping an item
	af2_is_hearing_target    = 0x00000002, // actor is currently hearing their target
	af2_firing_left          = 0x00000004,
	af2_firing_right         = 0x00000008,
	af2_blocking_door        = 0x00000010,
	af2_deleting             = 0x00000020,
	af2_timer_running        = 0x00000040,
	af2_fire_sound_done      = 0x00000080,
	af2_perim_disabled       = 0x00000100,
	af2_consider_proxies     = 0x00000200, // Used for optimisation
	af2_spawn_nearby_only    = 0x00000200, // when spawning, only try nearby positions rather than the given position
	af2_passive              = 0x00000400,
	af2_00000800             = 0x00000800,
	af2_untargetable         = 0x00001000, // Player is disgused on Rescue, or just warped
	af2_dont_lose_target     = 0x00002000, // Don't lose target when target has af2_untargetable
	af2_trigger_buddy_warp   = 0x00004000,
	af2_perfect_aim          = 0x00008000, // duel opponents
	af2_disguise_uncovered   = 0x00010000,
	af2_00020000             = 0x00020000,
	af2_00040000             = 0x00040000, // unused
	af2_disguised            = 0x00080000,
	af2_warp_onscreen        = 0x00100000, // Allow chr warp to occur onscreen
	af2_need_anim            = 0x00200000,
	af2_basicguard           = 0x00400000, // Can be used for anti, have movement stopped during high lag, and warped out of lift doorways
	af2_p1_onscreen          = 0x00800000, // anti mode: chr is currently on p1's screen so shouldn't be used for spawning anti
	af2_asked_about_gun      = 0x01000000,
	af2_almost_uncovered     = 0x02000000,
	af2_asked_then_shot      = 0x04000000, // Chr asked player about their gun and then was shot
	af2_dont_shoot_me        = 0x08000000, // AI buddy must use melee attacks on this chr rather than shoot
	af2_infinite_shield      = 0x10000000,
	af2_cloaked              = 0x20000000,
	af2_anti_noninteractable = 0x40000000,
	af2_detected             = 0x80000000, // If set on player
	af2_psycho               = 0x80000000, // If set on AI
};

// chr->flag_3
#define af3_force_to_ground             0x00000001
#define af3_cloneable                   0x00000002
#define af3_near_miss                   0x00000004
#define af3_ever_onscreen               0x00000008
#define af3_invincible                  0x00000010
#define af3_los_extra_height            0x00000020
#define af3_no_ff                       0x00000040 // chr can only hurt enemies
#define af3_can_face_wall               0x00000080 // defection programmer, Rescue lab techs, globals when doing idle animation
#define af3_just_injured                0x00000100
#define af3_can_change_act_during_argh  0x00000200
#define af3_hidden                      0x00000400
#define af3_no_aa                       0x00000800
#define af3_unexplodable                0x00001000
#define af3_no_shadow                   0x00002000
#define af3_has_sdeath                  0x00004000
#define af3_die_with_force              0x00008000 // when killed with a weak weapon, fling the chr as if it was a strong weapon
#define af3_perim_disabled_temp         0x00010000 // collisions disabled temporarily
#define af3_force_aa                    0x00020000 // allow auto aim even if chr is unarmed
#define af3_never_sleep                 0x00040000
#define af3_run_faster                  0x00080000
#define af3_kill_countable              0x00100000
#define af3_trigger_shot_list           0x00200000
#define af3_00400000                    0x00400000 // unused
#define af3_unplayable                  0x00800000
#define af3_pushable                    0x01000000 // Typically set on allies during init
#define af3_shield_damaged              0x02000000
#define af3_keep_corpse_ko              0x04000000
#define af3_consider_dodge              0x08000000
#define af3_avoiding                    0x10000000
#define af3_delay_anim                  0x20000000 // unused, but would cause a chr to pause their animation for one frame
#define af3_40000000                    0x40000000 // unused
#define af3_injured_target              0x80000000

// chr->flag_4
#define af4_hide_for_cutscene 0x0001
#define af4_shield_hit         0x0002 // Turns off when shield no longer visible
#define af4_AUTOANIM          0x0004 // Do automatic look up/down anims for multiplayer third person
#define af4_blue_sight         0x0008
#define af4_TICKDURINGAUTOCUT 0x0010
#define af4_FIRESOUNDDONE     0x0020
#define af4_CONSIDERPROXIES   0x0040
#define af4_SPAWNED           0x0080
#define af4_HEADSHOTTED       0x1000
