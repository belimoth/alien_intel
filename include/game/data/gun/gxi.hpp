#pragma once

#include "type.hpp"

// gun aim info

struct gxi_t {
	float fov;
	float yn;
	float yp;
	float x;
	float damp;
	uint32_t type : 4;
	uint32_t flag;
};

#define gxf_zoom  0x1
#define gxf_auto  0x2
#define gxf_first 0x4

#define gxf_rifle  gxf_auto | gxf_first
#define gxf_sniper gxf_zoom | gxf_first

#define gxi_damp_default 0.9767
#define gxi_move_default 3, 8, 15

#define gxi_type_none    0
#define gxi_type_default 1
#define gxi_type_scanner 2 // unused
#define gxi_type_rocket  3
#define gxi_type_tracker 4
#define gxi_type_threat  5

#define gxi_head_default gxi_move_default, gxi_damp_default, gxi_type_default
#define gxi_head_none    gxi_move_default, gxi_damp_default, gxi_type_none
#define gxi_head_zoom    gxi_move_default, gxi_damp_default, gxi_type_default
#define gxi_head_tracker gxi_move_default, gxi_damp_default, gxi_type_tracker
#define gxi_head_rocket  gxi_move_default, gxi_damp_default, gxi_type_rocket

#define gxi_tail_none    gxi_head_none,    gxf_auto
#define gxi_tail_rifle   gxi_head_default, gxf_rifle
#define gxi_tail_pistol  gxi_head_default, gxf_auto
#define gxi_tail_tracker gxi_head_tracker, gxf_rifle
#define gxi_tail_rocket  gxi_head_rocket,  gxf_rifle
#define gxi_tail_sniper  gxi_head_default, gxf_sniper
#define gxi_tail_scanner gxi_head_none,    gxf_sniper

gxi_t gxi_default = {  0, gxi_tail_pistol  };
gxi_t gxi_smg     = {  0, gxi_tail_rifle   };
gxi_t gxi_unarmed = {  0, gxi_tail_none    };
gxi_t gxi_tmp     = {  0, gxi_tail_tracker };
gxi_t gxi_rocket  = {  0, gxi_tail_rocket  };
gxi_t gxi_assault = { 20, gxi_tail_rifle   };
gxi_t gxi_auto9   = { 25, gxi_tail_pistol  };
gxi_t gxi_eagle_h = { 30, gxi_tail_pistol  };
gxi_t gxi_heavy   = { 30, gxi_tail_rifle   };
gxi_t gxi_sniper  = {  0, gxi_tail_sniper  };
gxi_t gxi_scanner = {  0, gxi_tail_scanner };
