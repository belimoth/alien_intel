#pragma once

#include "chapter.hpp"

#include "game/actor.hpp"
#include "game/brain.hpp"
#include "game/event.hpp"
#include "game/stuff.hpp"

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
