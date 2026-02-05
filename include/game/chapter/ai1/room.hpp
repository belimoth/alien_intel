#pragma once

#include "game/chapter/ai1/gfx.hpp"
// #include "game/chapter/ai1/gbi.hpp"
struct gfx_t;
#include "game/chapter/ai1/vtx.hpp"

#include "type.hpp"

#define rf_disabledbyscript      0x0001
#define rf_hasdyntex             0x0002 // Has dynamic textures such as water
#define rf_onscreen              0x0004
#define rf_standby               0x0008 // Neighbour of an onscreen room - usually loaded as well
#define rf_complicatedportals    0x0010 // Room has portals that aren't on the room's bounding box
#define rf_loadcandidate         0x0020 // Room is a good candidate for loading on this tick
#define rf_brightness_calced     0x0040
#define rf_renderalways          0x0080
#define rf_lights_dirty          0x0100
#define rf_brightness_dirty_perm 0x0200
#define rf_brightness_dirty_temp 0x0400
#define rf_bboxhack              0x0800
#define rf_needreshade           0x1000
#define rf_lightsoff             0x2000
#define rf_playambienttrack      0x4000
#define rf_outdoors              0x8000

typedef int16_t room_i;

struct roomblock {
	uint8_t type;
	struct roomblock *next;
	union {
		struct { // type 0 (leaf)
			gfx_t *gdl;
			vtx *vertices;
			col *colours;
		};
		struct { // type 1 (parent)
			struct roomblock *child;
			float3 *unk0c; // pointer to 2 coords at least
		};
	};
};

struct roomgfxdata {
	/*0x00*/ vtx *vertices;
	/*0x04*/ col *colours;
	/*0x08*/ struct roomblock *opablocks;
	/*0x0c*/ struct roomblock *xlublocks;
	/*0x10*/ int16_t lightsindex;
	/*0x12*/ int16_t numlights;
	/*0x14*/ int16_t numvertices;
	/*0x16*/ int16_t numcolours;
	/*0x18*/ struct roomblock blocks[1];
};

struct room_t {
	uint16_t flag;
	int16_t  loaded240; // 0 when unloaded, 1 when visible, ticks up to 120 when recently visible
	uint8_t  portalrecursioncount;
	int8_t   numportals;
	uint8_t  snakecount;
	uint8_t  unk07;
	int8_t   numlights;
	uint8_t  numwaypoints; // note: excludes waypoints with PADFLAG_AIDROP
	uint16_t lightindex; // index of start of this room's lights in data file
	uint16_t firstwaypoint; // offset into g_Vars.waypoints
	int16_t  roomportallistoffset;
	int16_t  roommtxindex;
	struct   roomgfxdata *gfxdata;
	float    bbmin[3];
	float    bbmax[3];
	float3   centre;
	float    radius; // from volume centre to the corner in 3D
	int      numvtxbatches;
	struct   vtxbatch *vtxbatches;

	/**
	 * br values are a brightness value (0-255).
	 */

	// The min and max values are the brightness levels when the room has all
	// its lights shot out, or all lights healthy. They come from the BG file.
	// The br_light_each value is calculated from these based on the number of
	// lights in the room.
	uint8_t br_light_min;
	uint8_t br_light_max;
	uint8_t br_light_each;

	// The brightness level of the room, assuming no flashes are taking place,
	// and factoring in settled brightness from neighbouring rooms.
	uint8_t br_settled_regional;

	// Generally the same as br_light_min, but is sometimes fudged a bit.
	uint8_t br_base;

	// Unused
	uint8_t unk4d;

	// Lightops control what a room is doing with its lighting. They can be used
	// to simply set a brightness multiplier, or transition to another
	// brightness level over several frames, or repeat a brightness sine pattern.
	// The lightop calculates lightop_cur_frac, which is a multiplier.
	/*0x4e*/ uint8_t lightop : 4;

	// Unused
	/*0x4e*/ uint8_t unk4e_04 : 4;

	// The brightness level of the room, assuming no flashes are taking place,
	// and ignoring the brightness of neighbouring rooms.
	/*0x50*/ int16_t br_settled_local;

	// The current brightness of any temporary flash of light,
	// such as gunfire or lightning.
	/*0x52*/ int16_t br_flash;
	/*0x54*/ int16_t lightop_timer240;
	/*0x56*/ uint16_t hlupdatedframe;
	/*0x58*/ col *colours;
	/*0x5c*/ float lightop_cur_frac;
	/*0x60*/ float lightop_to_frac;
	/*0x64*/ float lightop_from_frac;
	/*0x68*/ float lightop_duration240;
	/*0x6c*/ float volume;      // in metres
	/*0x70*/ float surfacearea; // in centimetres
	/*0x74*/ float highlightfrac_r;
	/*0x78*/ float highlightfrac_g;
	/*0x7c*/ float highlightfrac_b;
	/*0x80*/ int gfxdatalen; // when inflated
	/*0x84*/ struct wallhit *opawallhits; // opaque
	/*0x88*/ struct wallhit *xluwallhits; // translucent
	/*0x8c*/ uint16_t extra_flags;
};
