#include "game.hpp"

#include "game/actor.hpp"

#include "game/actor/act.hpp"
#include "game/data/gun.hpp"
#include "game/data/gun/info.hpp"
#include "game/g.hpp"
#include "game/prop.hpp"

#include "type.hpp"

bool gun_has_flag( int itemid, uint32_t flag );

prop_t *actor_get_prop_held( actor_t &self, int hand ) {
	return self.data.held[hand];
}

prop_t *actor_get_prop_held_usable( actor_t &self , int hand ) {
	prop_t *prop = self.data.held[hand];

	if ( prop ) {
		prop_gun &gun = *( prop->gun );
		if ( not gun_has_flag( gun.weaponnum, wf_bot ) ) return {};
	}

	return prop;
}

prop_t *actor_get_prop_target( actor_t &self ) {
	if ( self.data.target == -1 ) return g.stage.var.play.player[ self.data.p1p2 ]->prop;
	return g.stage.var.prop.all + self.data.target;
}

void game_actor_init() {
	game.data.actor = {};
}

void game_actor_step() {
	for_each_actor_i {

	}
}
