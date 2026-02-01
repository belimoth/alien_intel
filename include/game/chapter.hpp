#pragma once

enum game_chapter {
	game_chapter_none = 0,

	game_chapter_d0p, // Draugb - 0 Prologue (D0P)
	game_chapter_d1h, // Draugb - 1 Harbor (D1H)
	game_chapter_d2c, // Draugb - 2 Colony (D2C)
	game_chapter_d3f, // Draugb - 3 Frontier (D3F)
	game_chapter_d4w, // Draugb - 4 Wastes (D4W)
	game_chapter_d5t, // Draugb - 5 Tower (D5T)
	game_chapter_d6d, // Draugb - 6 Draugb (D6D)

	game_chapter_ai1, // Alien Intel (AI1)
	game_chapter_aix, // Alien Intel X (AIX)
	game_chapter_bf1, // Blood Flush (BF1)
	game_chapter_dp1, // Diablo Plains (DP1)
	game_chapter_hw1, // Horse War (HW1)
	game_chapter_hc1, // Howling Commandos (HC1)
	game_chapter_rc1, // Red Cry (RC1)
	game_chapter_sc1, // Swat City (SC1)
	game_chapter_scx, // Swat City X (SCX)
};

#include "chapter/d0p.hpp"
#include "chapter/d1h.hpp"
#include "chapter/d2c.hpp"
#include "chapter/d3f.hpp"
#include "chapter/d4w.hpp"
#include "chapter/d5t.hpp"
#include "chapter/d6d.hpp"

#include "chapter/ai1.hpp"
#include "chapter/aix.hpp"
#include "chapter/bf1.hpp"
#include "chapter/dp1.hpp"
#include "chapter/hw1.hpp"
#include "chapter/hc1.hpp"
#include "chapter/rc1.hpp"
#include "chapter/sc1.hpp"
#include "chapter/scx.hpp"

void game_chapter_init() {
	switch ( game.chapter ) {
		switch ( game.chapter ) {
			case game_chapter_none:
			break;

			case game_chapter_d0p:
			case game_chapter_d1h:
			case game_chapter_d2c:
			case game_chapter_d3f:
			case game_chapter_d4w:
			case game_chapter_d5t:
			case game_chapter_d6d:
			break;

			case game_chapter_ai1: game_chapter_ai1_init();
			case game_chapter_aix: game_chapter_aix_init();
			case game_chapter_bf1: game_chapter_bf1_init();
			case game_chapter_dp1: game_chapter_dp1_init();
			case game_chapter_hc1: game_chapter_hc1_init();
			case game_chapter_hw1: game_chapter_hw1_init();
			case game_chapter_rc1: game_chapter_rc1_init();
			case game_chapter_sc1: game_chapter_sc1_init();
			case game_chapter_scx: game_chapter_scx_init();
			break;
		}
	}
}

void game_chapter_step() {
	switch ( game.chapter ) {
		case game_chapter_none:
		break;

		case game_chapter_d0p:
		case game_chapter_d1h:
		case game_chapter_d2c:
		case game_chapter_d3f:
		case game_chapter_d4w:
		case game_chapter_d5t:
		case game_chapter_d6d:
		break;

		case game_chapter_ai1:
		case game_chapter_aix:
		case game_chapter_bf1:
		case game_chapter_dp1:
		case game_chapter_hw1:
		case game_chapter_hc1:
		case game_chapter_rc1:
		case game_chapter_sc1:
		case game_chapter_scx:
		break;
	}
}
