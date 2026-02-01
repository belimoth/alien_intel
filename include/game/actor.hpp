#pragma once

#include "game/brain.hpp"
#include "game/world.hpp"

#include <stdint.h>
typedef unsigned int uint;

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
		game_actor_data_ai1 ai1;
		// game_actor_data_aix aix;
	};
};

// game_actor
// game_actor.type      : game_actor_type
// game_actor.data      : game_actor_data
// game_actor.data.head : game_actor_data_head
// game_actor.data.ai1  : game_actor_data_ai1

struct game_actor {
	game_actor_type type = {};
	game_actor_data data = {};
};

// ai1_actor
// ai1_actor.type : game_actor_type
// ai1_actor.base : game_actor_data
// ai1_actor.head : game_actor_data_head
// ai1_actor.data : game_actor_data_ai, same as ai1_actor.base.data.ai and game_actor.data.ai

struct ai1_actor {
	game_actor_type type = actor_type_ai1;

	union {
		game_actor_data base = {};

		struct {
			game_actor_data_head head;
			game_actor_data_ai1  data;
		};
	};
};
