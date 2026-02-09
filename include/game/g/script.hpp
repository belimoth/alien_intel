#pragma once

#include "game/g.hpp"

#include "type.hpp"

struct script_t {
	uint8_t *list;
	int      id;
};

extern script_t g_global_script[];

int g_global_script_count = 0;
int g_level_script_count  = 0;

uint8_t *script_find( int i ) {
	if ( i >= 0x401 ) {
		if ( g.stage.setup.script ) {
			int lower = 0;
			int upper = g_level_script_count;

			while ( upper >= lower ) {
				int index = ( lower + upper ) / 2;
				if ( g.stage.setup.script[index].id == i ) return g.stage.setup.script[index].list;

				if ( i < g.stage.setup.script[index].id ) {
					upper = index - 1;
				} else {
					lower = index + 1;
				}
			}
		}
	} else {
		int lower = 0;
		int upper = g_global_script_count;

		while ( upper >= lower ) {
			int index = ( lower + upper ) / 2;

			if ( g_global_script[index].id == i ) return g_global_script[index].list;

			if ( i < g_global_script[index].id ) {
				upper = index - 1;
			} else {
				lower = index + 1;
			}
		}
	}

	return 0;
}
