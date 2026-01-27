#pragma once

enum game_brain_type {
	brain_type_none,
	brain_type_team,
	brain_type_member,
	brain_type_commander,
};

//

struct game_brain_team_data {};

struct game_brain_member_data {};

struct game_brain_commander_data {
	int member_i, member_size;
};

//

struct game_brain_data {
	union {
		game_brain_team_data      team;
		game_brain_member_data    member;
		game_brain_commander_data commander;
	};
};

//

struct game_brain {
	game_brain_type type;
	game_brain_data data;
};
