#pragma once

#include "game/actor/act.hpp"
#include "game/prop.hpp"
#include "game/bot.hpp"

#include "type.hpp"

struct actor_t_data {
	uint16_t chr;
	act_t act;

	// vitals

	float shield;

	// props

	prop_t *held[3] = {}; // gun 1, gun 2, hat

	// behavior

	int16_t target; // index into g.stage.var.prop.all

	uint8_t *ailist;
	uint16_t aioffset;
	int16_t aireturnlist;
	int16_t aishotlist;
	uint8_t morale;
	uint8_t alertness;
	int32_t timer60;
	int32_t soundtimer;
	uint8_t random;
	uint8_t team;
	uint8_t soundgap;
	int16_t padpreset1;
	int16_t chrpreset1;
	int16_t proppreset1;
	int16_t chrseeshot;
	int16_t chrseedie;
	int16_t chrdup;

	// flags

	// chrflags flag_3
	// hidden   flag_2
	// flags    flag_0
	// flags2   flag_1
	// hidden2  flag_4

	uint32_t flag_0;
	uint32_t flag_1;
	uint32_t flag_2;
	uint32_t flag_3;
	uint32_t flag_4;

	// rig

	uint8_t  race;

	//

	int8_t   aim;
	int8_t   run; // 0-100
	uint8_t  firecount[2];
	int8_t   headnum;
	int8_t   sleep;
	int8_t   invalidmove;
	int8_t   numclosearghs;
	int8_t   numarghs;
	uint8_t  fadealpha;
	int8_t   arghrating;
	int8_t   aimendcount;
	uint8_t  grenadeprob;
	int16_t  bodynum;
	int8_t   flinchcnt;
	int8_t   path;
	prop_t  *prop;
	model_t *model;
	float    radius;
	float    height;

	//

	float   sumground;
	float   manground;
	float   ground;
	float2  fallspeed;
	float2  prevpos;
	int32_t lastwalk60;
	int32_t lastmoveok60;
	float   visionrange;
	int32_t lastseetarget60;
	int32_t lastvisibletarget60;
	prop_t *poisonprop;
	int16_t lastshooter;
	int16_t timeshooter;
	float   hearingscale;
	int32_t lastheartarget60;
	uint8_t shadecol[4];
	uint8_t nextcol[4];

	// damage

	float damage;
	float maxdamage;

	//

	geocyl geo;
	float shot_bond_sum;
	float aimuplshoulder;
	float aimuprshoulder;
	float aimupback;
	float aimsideback;
	float aimendlshoulder;
	float aimendrshoulder;
	float aimendback;
	float aimendsideback;
	int8_t fireslots[2];

	// shield efffect

	int8_t   cmnum;
	int8_t   cmnum2;
	int8_t   cmnum3;
	int8_t   cmnum4;
	uint16_t cmcount;

	// cloak

	int16_t cloak_pause;
	uint8_t cloak_fade_frac : 7;
	uint8_t cloak_fade_finished : 1;

	// drug

	/*0x2d8*/ int16_t blurdrugamount;
	/*0x2dc*/ float drugheadsway;
	/*0x2e0*/ uint8_t drugheadcount;

	//

	uint16_t floorcol;
	float    oldframe;
	int8_t   footstep;
	uint8_t  floortype;
	float    magicframe;
	float    magicspeed;
	int16_t  magicanim;
	int16_t  goposforce;
	int32_t  bdlist[60];
	uint8_t  bdstart;
	uint8_t  goposhitcount;
	int16_t  cover;
	float2   targetlastseenp;
	uint8_t  myaction;
	uint8_t  orders;
	uint8_t  squad;
	uint8_t  listening;
	uint32_t convtalk;
	int32_t  talktimer;
	uint8_t  question;
	uint8_t  talkgap;
	uint16_t unk2ae;
	uint8_t  tude;
	uint8_t  voicebox;
	room_i   floorroom;
	uint32_t unk2b4;
	room_i   oldrooms[8];
	float2   runfrompos;
	bot_t   *bot;

	uint8_t  teamscandist;
	uint8_t  naturalanim;
	int32_t  myspecial; // This is an object tag ID
	float    timeextra;
	float    elapseextra;
	float2   extraspeed;
	uint8_t  yvisang;
	uint8_t  hitpart;
	uint8_t  blurnumtimesdied;
	prop_t  *gunprop;
	float    pushspeed[2];
	float    gunroty[2];
	float    gunrotx[2];
	uint32_t onladder;
	float2   laddernormal;

	uint8_t liftaction : 8;

	uint8_t inlift : 1;
	uint8_t pouncebits : 3;
	uint8_t unk32c_12 : 2;
	uint8_t darkroomthing : 1;
	uint8_t playerdeadthing : 1;

	uint8_t p1p2 : 2;
	uint8_t unk32c_18 : 1;
	uint8_t noblood : 1;
	uint8_t rtracked : 1;
	uint8_t unk32c_21 : 1;
	uint8_t unk32c_22 : 2;

	uint8_t sdie : 8;

	uint16_t roomtosearch;
	uint8_t  propsoundcount;
	int8_t   patrolnextstep;
	uint8_t  bulletstaken;

	uint8_t  woundedsplatsadded;
	uint16_t tickssincesplat;
	uint8_t  splatsdroppedhere;
	uint8_t  stdsplatsadded;
	uint8_t  deaddropsplatsadded;

	int8_t   aimtesttimer60;
	float2   lastdroppos;
	struct   fireslotthing *unk348[2];
	actor_t  lastattacker;
	int16_t  aipunchdodgelist;
	int16_t  aishootingatmelist;
	int16_t  aidarkroomlist;
	int16_t  aiplayerdeadlist;

	//

	int16_t  poisoncounter;

	//

	uint8_t  dodgerating;
	uint8_t  maxdodgerating;
	uint8_t  unarmeddodgerating;

	//

	uint8_t  lastfootsample;

	// thatch

	uint8_t thatch_image_left  : 4;
	uint8_t thatch_image_right : 4;

	//

	prop_t   lift;
};

#define hand_right 0
#define hand_left  1
