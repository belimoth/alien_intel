#include "game/actor.cpp"
#include "game/brain.cpp"
#include "game/event.cpp"
#include "game/stuff.cpp"
#include "game/world.cpp"

#include "game.h"

void game_config() {

}

void game_init() {
	game_config();

	//

	game_actor_init();
	game_brain_init();
	game_stuff_init();
	game_world_init();

	//

	game_chapter_init();
}

void game_step() {
	game_actor_step();
	game_brain_step();
	game_stuff_step();

	//

	game_chapter_step();
}

void game_exit() {

}
