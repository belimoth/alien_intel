#pragma once

#include "game/constant.hpp"

#define mp_setup_max 128
#define mp_setup_name_max 17
#define mp_setup_block_size 80

#define mouse_aim_classic 0 // crosshair moves around the screen in aim mode
#define mouse_aim_locked 1  // crosshair locked to the center of the screen in aim mode

#define hud_center_none   0 // don't center HUD
#define hud_center_normal 1 // center HUD in 4:3 window
#define hud_center_wide   2 // center HUD in 16:9 window

#define crouch_mode_hold          0 // hold the crouch buttons to keep crouching
#define crouch_mode_analog        1 // analog crouch like on n64
#define crouch_mode_toggle        2 // press the crouch buttons to toggle stance
#define crouch_mode_toggle_analog ( crouch_mode_analog | crouch_mode_toggle )

#define crosshair_health_off 0
#define CROSSHAIR_HEALTH_ON_GREEN 1
#define CROSSHAIR_HEALTH_ON_WHITE 2

struct extplayerconfig_t {
	float    fovy;
	float    fovzoommult;
	int      fovzoom;
	int      mouseaimmode;
	float    mouseaimspeedx;
	float    mouseaimspeedy;
	int      crouchmode;
	float    radialmenuspeed;
	float    crosshairsway;
	int      extcontrols;
	uint32_t crosshaircolour;
	uint32_t crosshairsize;
	float    crosshairedgeboundary;
	int      crosshairhealth;
	int      usereloads;
};

struct setupblock {
	uint8_t bytes[mp_setup_block_size];
};

struct mpsetupfile {
	uint8_t version;
	uint8_t defaultsetup;
	uint8_t numsetups;
	struct setupblock setups[mp_setup_max];
};

#define player_ext_cfg_default { 60.f, 1.f, true, mouse_aim_classic, 0.7f, 0.7f, crouch_mode_toggle_analog, 4.f, 1.f, true, 0x00ff0028, 2, 0.7f, crosshair_health_off, false }

extplayerconfig_t g_player_ext_cfg[player_count_max] = {
	player_ext_cfg_default,
	player_ext_cfg_default,
	player_ext_cfg_default,
};

#define PLAYER_EXTCFG() g_player_ext_cfg[g.stage.var.play.px_score->mpindex & 3]
#define PLAYER_DEFAULT_FOV (PLAYER_EXTCFG().fovy)

#ifdef PLATFORM_N64
#define fov_adjust(x) (x)
#define PLAYER_DEFAULT_FOV 60.f
#else
#define fov_adjust(x) ((x) * PLAYER_EXTCFG().fovzoommult)
#endif
