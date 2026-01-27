#pragma once

enum game_chapter {
	game_chapter_none = 0,

	game_chapter_draugb_0_prologue,
	game_chapter_draugb_1_harbor,
	game_chapter_draugb_2_colony,
	game_chapter_draugb_3_frontier,
	game_chapter_draugb_4_wastes,
	game_chapter_draugb_5_tower,
	game_chapter_draugb_6_draugb,

	game_chapter_alien_intel,
	game_chapter_alien_intel_x,
	game_chapter_blood_flush,
	game_chapter_diablo_plains,
	game_chapter_horse_war,
	game_chapter_howling_commandos,
	game_chapter_red_cry,
	game_chapter_swat_city,
	game_chapter_swat_city_x,
};

#include "game/actor.h"
#include "game/brain.h"
#include "game/event.h"
#include "game/stuff.h"

struct game_t {
	game_chapter chapter;

	struct game_data {
		struct game_actor_data_each { game_actor each[ 0x400]; int i; } actor;
		struct game_brain_data_each { game_brain each[ 0x400]; int i; } brain;
		struct game_event_data_each { game_event each[0x4000]; int i; } event;
		struct game_stuff_data_each { game_stuff each[0x4000]; int i; } stuff;
	} data;
} game;


struct game_actor_i { game_actor &self = {}; int i; };
struct game_brain_i { game_brain &self = {}; int i; };
struct game_event_i { game_event &self = {}; int i; };
struct game_stuff_i { game_stuff &self = {}; int i; };

void game_actor_i_walk( game_actor_i &self ) { self.self = game.data.actor.each[ self.i++ ]; }
void game_brain_i_walk( game_brain_i &self ) { self.self = game.data.brain.each[ self.i++ ]; }
void game_event_i_walk( game_event_i &self ) { self.self = game.data.event.each[ self.i++ ]; }
void game_stuff_i_walk( game_stuff_i &self ) { self.self = game.data.stuff.each[ self.i++ ]; }

#define for_each_actor_i for ( game_actor_i i = {}; i.i < game.data.actor.i; game_actor_i_walk( i ) )
#define for_each_brain_i for ( game_brain_i i = {}; i.i < game.data.brain.i; game_brain_i_walk( i ) )
#define for_each_event_i for ( game_event_i i = {}; i.i < game.data.event.i; game_event_i_walk( i ) )
#define for_each_stuff_i for ( game_stuff_i i = {}; i.i < game.data.stuff.i; game_stuff_i_walk( i ) )

// chapter

#include "game/chapter/alien_intel.h"
#include "game/chapter/alien_intel_x.h"
#include "game/chapter/blood_flush.h"
#include "game/chapter/diablo_plains.h"
#include "game/chapter/draugb_harbor.h"
#include "game/chapter/draugb_colony.h"
#include "game/chapter/horse_war.h"
#include "game/chapter/howling_commandos.h"
#include "game/chapter/red_cry.h"
#include "game/chapter/swat_city.h"
#include "game/chapter/swat_city_x.h"

void game_chapter_init() {
	switch ( game.chapter ) {
		switch ( game.chapter ) {
			case game_chapter_none:
			break;

			case game_chapter_draugb_0_prologue:
			case game_chapter_draugb_1_harbor:
			case game_chapter_draugb_2_colony:
			case game_chapter_draugb_3_frontier:
			case game_chapter_draugb_4_wastes:
			case game_chapter_draugb_5_tower:
			case game_chapter_draugb_6_draugb:
			break;

			case game_chapter_alien_intel:       game_chapter_alien_intel_init();
			case game_chapter_alien_intel_x:     game_chapter_alien_intel_x_init();
			case game_chapter_blood_flush:       game_chapter_blood_flush_init();
			case game_chapter_diablo_plains:     game_chapter_diablo_plains_init();
			case game_chapter_horse_war:         game_chapter_horse_war_init();
			case game_chapter_howling_commandos: game_chapter_howling_commandos_init();
			case game_chapter_red_cry:           game_chapter_red_cry_init();
			case game_chapter_swat_city:         game_chapter_swat_city_init();
			case game_chapter_swat_city_x:       game_chapter_swat_city_x_init();
			break;
		}
	}
}

void game_chapter_step() {
	switch ( game.chapter ) {
		case game_chapter_none:
		case game_chapter_draugb_0_prologue:
		case game_chapter_draugb_1_harbor:
		case game_chapter_draugb_2_colony:
		case game_chapter_draugb_3_frontier:
		case game_chapter_draugb_4_wastes:
		case game_chapter_draugb_5_tower:
		case game_chapter_draugb_6_draugb:
		case game_chapter_alien_intel:
		case game_chapter_alien_intel_x:
		case game_chapter_blood_flush:
		case game_chapter_diablo_plains:
		case game_chapter_horse_war:
		case game_chapter_howling_commandos:
		case game_chapter_red_cry:
		case game_chapter_swat_city:
		case game_chapter_swat_city_x:
		break;
	}
}
