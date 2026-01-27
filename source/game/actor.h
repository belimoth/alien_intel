#pragma once

#include "brain.h"
#include "world.h"

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
	actor_type_ai   = 1,
};

struct game_actor_nav {

};

struct game_actor_data_head {
	game_actor_nav nav;
};

// #include "alien_intel/actor.h"

struct game_actor_data_ai {}; // stub

struct game_actor_data {
	game_actor_data_head head;

	union {
		game_actor_data_ai ai;
	};
};

// game_actor
// game_actor.type      : game_actor_type
// game_actor.data      : game_actor_data
// game_actor.data.head : game_actor_data_head
// game_actor.data.ai   : game_actor_data_ai

struct game_actor {
	game_actor_type type;
	game_actor_data data;
};

// ai_actor
// ai_actor.type : game_actor_type
// ai_actor.base : game_actor_data
// ai_actor.head : game_actor_data_head
// ai_actor.data : game_actor_data_ai, same as ai_actor.base.data.ai and game_actor.data.ai

struct ai_actor {
	game_actor_type type = actor_type_ai;

	union {
		game_actor_data base;

		struct {
			game_actor_data_head head;
			game_actor_data_ai   data;
		};
	};
};
