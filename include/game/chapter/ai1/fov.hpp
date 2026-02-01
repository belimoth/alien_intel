#pragma once

#ifdef PLATFORM_N64
#define fov_adjust(x) (x)
#define PLAYER_DEFAULT_FOV 60.f
#else
#define fov_adjust(x) ((x) * PLAYER_EXTCFG().fovzoommult)
#endif
