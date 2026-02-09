#pragma once

#include "game/g.hpp"
#include "game/g/index.hpp"

#include "type.hpp"

#define g_squad_count_max           16
#define g_actor_per_squad_count_max 16

void squad_rebuild() {;
	int16_t index = 15;

	for ( int j = 0; j < g_squad_count_max; j++ ) {
		if ( j != 0 ) g.stage.squad[j - 1] = index;

		for ( int i = 0; i < g_chr_slot_count; i++ ) {
			actor_t &actor = g_chr_slot[i];

			if ( actor.data.chr >= 0 and actor.data.squad == j ) {
				if ( actor.data.prop == 0 or actor.data.prop->type != pt_player) {
					g.stage.squad[index++] = actor.data.chr;
				}
			}
		}

		g.stage.squad[index++] = -2;
		if ( index >= ( g_actor_per_squad_count_max + 1 ) * g_squad_count_max ) break;
	}
}

int16_t *squad_get_actor_ids( int squad ) {
	if ( squad < 0 or squad >= g_squad_count_max ) return 0;
	if ( squad != 0 ) return &g.stage.squad[ g.stage.squad[ squad - 1 ] ];
	return &g.stage.squad[ g_squad_count_max - 1 ];
}
