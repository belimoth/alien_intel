#pragma once

#include "game/brain.hpp"
#include "game/world.hpp"

#include "type.hpp"

// enum game_actor_team {
// 	actor_team_victim = 0,
// 	actor_team_player = 1,
// 	actor_team_buddy  = 2,
// 	actor_team_police = 3,
// 	actor_team_enemy  = 4,
// 	actor_team_alien  = 5,
// 	actor_team_danger = 6,
// };

enum game_actor_type {
	actor_type_none = 0,
	actor_type_ai1  = 1,
};

struct game_actor_nav {
	int placeholder;
};

struct game_actor_data_head {
	game_actor_nav nav;
};

#include "game/chapter/ai1/actor/data.hpp"

// data
// data.head
// data.ai1

struct game_actor_data {
	game_actor_data_head head;

	union {
		actor_t_data ai1;
		// game_actor_data_aix aix;
	};
};

// game_actor
// game_actor.type      : game_actor_type
// game_actor.data      : game_actor_data
// game_actor.data.head : game_actor_data_head
// game_actor.data.ai1  : actor_t_data

struct game_actor {
	game_actor_type type = {};
	game_actor_data data = {};
};

// actor_t
// actor_t.type : game_actor_type
// actor_t.base : game_actor_data
// actor_t.head : game_actor_data_head
// actor_t.data : game_actor_data_ai, same as actor_t.base.data.ai and game_actor.data.ai

struct actor_t {
	game_actor_type type = actor_type_ai1;

	union {
		game_actor_data base = {};

		struct {
			game_actor_data_head head;
			actor_t_data         data;
		};
	};
};

enum ai1_race {
	race_human  = 0,
	race_skedar = 1,
	race_thatch = 2,
	race_drone  = 3,
	race_robot  = 4
};

#define actor_get_race( self ) ( self ? self->race : race_human )

prop_t *actor_get_prop_held       ( actor_t &self, int hand );
prop_t *actor_get_prop_held_usable( actor_t &self, int hand );
prop_t *actor_get_prop_target     ( actor_t &self );

#define flag_set( data, flag, value ) if ( value ) { (data) &= ~(flag); } else { (data) |= (flag); }

void actor_set_flag_2_perim_disabled( actor_t *self, bool enable );
