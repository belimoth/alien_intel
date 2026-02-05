#pragma once

#include "game/chapter/ai1/constant.hpp"

#ifndef PLATFORM_N64

#define MPSETUP_MAXSETUPS 128
#define MPSETUP_MAXNAME 17
#define MPSETUP_BLOCKSIZE 80

#define MOUSEAIM_CLASSIC 0 // crosshair moves around the screen in aim mode
#define MOUSEAIM_LOCKED 1  // crosshair locked to the center of the screen in aim mode

#define HUDCENTER_NONE 0   // don't center HUD
#define HUDCENTER_NORMAL 1 // center HUD in 4:3 window
#define HUDCENTER_WIDE 2   // center HUD in 16:9 window

#define CROUCHMODE_HOLD 0   // hold the crouch buttons to keep crouching
#define CROUCHMODE_ANALOG 1 // analog crouch like on n64
#define CROUCHMODE_TOGGLE 2 // press the crouch buttons to toggle stance
#define CROUCHMODE_TOGGLE_ANALOG (CROUCHMODE_ANALOG | CROUCHMODE_TOGGLE)

#define CROSSHAIR_HEALTH_OFF 0
#define CROSSHAIR_HEALTH_ON_GREEN 1
#define CROSSHAIR_HEALTH_ON_WHITE 2

struct extplayerconfig_t {
	float fovy;
	float fovzoommult;
	int fovzoom;
	int mouseaimmode;
	float mouseaimspeedx;
	float mouseaimspeedy;
	int crouchmode;
	float radialmenuspeed;
	float crosshairsway;
	int extcontrols;
	uint32_t crosshaircolour;
	uint32_t crosshairsize;
	float crosshairedgeboundary;
	int crosshairhealth;
	int usereloads;
};

struct setupblock {
	uint8_t bytes[MPSETUP_BLOCKSIZE];
};

struct mpsetupfile {
	uint8_t version;
	uint8_t defaultsetup;
	uint8_t numsetups;
	struct setupblock setups[MPSETUP_MAXSETUPS];
};

#define PLAYER_EXT_CFG_DEFAULT { 60.f, 1.f, true, MOUSEAIM_CLASSIC, 0.7f, 0.7f, CROUCHMODE_TOGGLE_ANALOG, 4.f, 1.f, true, 0x00ff0028, 2, 0.7f, CROSSHAIR_HEALTH_OFF, false }

extplayerconfig_t g_PlayerExtCfg[player_count_max] = {
	PLAYER_EXT_CFG_DEFAULT,
	PLAYER_EXT_CFG_DEFAULT,
	PLAYER_EXT_CFG_DEFAULT,
};

#endif

#define PLAYER_EXTCFG() g_PlayerExtCfg[g.stage.var.play.px_score->mpindex & 3]
#define PLAYER_DEFAULT_FOV (PLAYER_EXTCFG().fovy)

#ifdef PLATFORM_N64
#define fov_adjust(x) (x)
#define PLAYER_DEFAULT_FOV 60.f
#else
#define fov_adjust(x) ((x) * PLAYER_EXTCFG().fovzoommult)
#endif
