#pragma once

#include "game/g.hpp"

#include "type.hpp"

#define g_team_count_max 8
#define g_actor_per_team_count_max 32

void g_stage_team_rebuild() {
	int16_t j = 7;
	uint8_t mask[] = { 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80 };

	for ( int t = 0; t < array_count(mask); t++ ) {
		if ( t != 0 ) g.stage.team[ t - 1 ] = j;

		for ( int i = 0; i < g_chr_slot_count; i++ ) {
			actor_t &actor = g_chr_slot[i];
			if ( actor.data.chr >= 0 and fone( actor.data.team, mask[t] ) ) g.stage.team[j++] = actor.data.chr;
		}

		g.stage.team[j++] = -2;
		if ( j >= ( g_actor_per_team_count_max + 1 ) * g_team_count_max ) break;
	}
}

int16_t *team_get_chr( int i ) {
	uint8_t lookup[8] = { 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80 };

	for ( int j = 0; j < g_team_count_max; j++ ) {
		if ( lookup[j] == i ) {
			i = j;
			break;
		}
	}

	if ( i < 0 or i >= g_team_count_max ) return 0;
	if ( i != 0 ) return &g.stage.team[ g.stage.team[ i - 1 ] ];
	return &g.stage.team[ g_team_count_max - 1 ];
}
