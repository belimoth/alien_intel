#pragma once

#include "game/vtx.hpp"

#include "type.hpp"

// model

#define model_ROOFGUN               0x0000
#define model_GROUNDGUN             0x0001
#define model_TVSCREEN              0x0002
#define model_BORG_CRATE            0x0003
#define model_window                0x0004
#define model_A51_CRATE1_0005       0x0005
#define model_A51_CRATE1_0006       0x0006
#define model_A51_CRATE1_0007       0x0007
#define model_A51_CRATE1_0008       0x0008
#define model_A51_CRATE1_0009       0x0009
#define model_A51_CRATE1_000a       0x000a
#define model_A51_CRATE1_000b       0x000b
#define model_A51_CRATE1_000c       0x000c
#define model_A51_CRATE1_000d       0x000d
#define model_A51_CRATE1_000e       0x000e
#define model_A51_CRATE1_000f       0x000f
#define model_CRYPTDOOR1B           0x0010
#define model_briefcase             0x0011
#define model_bug                   0x0012
#define model_datathief             0x0013
#define model_NINTENDOLOGO          0x0014
#define model_DOOR_ROLLERTRAIN      0x0015
#define model_flag                  0x0016
#define model_MODEMBOX              0x0017
#define model_DOORCONSOLE           0x0018
#define model_A51_HORIZ_DOOR_TOP    0x0019
#define model_A51_HORIZ_DOOR_BOT    0x001a
#define model_A51_VERT_DOOR_LEFT    0x001b
#define model_A51_VERT_DOOR_RIGHT   0x001c
#define model_A51_VERT_DOOR_ST      0x001d
#define model_A51_HORIZ_DOOR_GL     0x001e
#define model_A51_HORIZ_DOOR_SECRET 0x001f
#define model_A51_CRATE1            0x0020
#define model_A51_CRATE2            0x0021
#define model_A51_CRATE3            0x0022
#define model_A51_EXP1              0x0023
#define model_A51_UNEXP1            0x0024
#define model_A51_EXP2              0x0025
#define model_A51_UNEXP2            0x0026
#define model_A51_UNEXP3            0x0027
#define model_AIVILLADOOR1          0x0028
#define model_AIVILLADOOR2A         0x0029
#define model_AIVILLADOOR4          0x002a
#define model_A51_LIFT_HANGAR       0x002b
#define model_A51_LIFT_CONTROL      0x002c
#define model_A51_LIFT_STORE        0x002d
#define model_A51_LIFT_THINWALL     0x002e
#define model_AIVILLABOT1           0x002f
#define model_AIVILLABOT2           0x0030
#define model_AIVILLABOT3           0x0031
#define model_AIVILLAWINDMILL       0x0032
#define model_HOVERBED              0x0033
#define model_MARKER                0x0034
#define model_ALDOOR_R              0x0035
#define model_ALDOOR_L              0x0036
#define model_DD_LIFTR              0x0037
#define model_DD_FANROOF            0x0038
#define model_DD_FANWALL            0x0039
#define model_HOVBIKE               0x003a
#define model_DD_OFFICEDOOR         0x003b
#define model_DD_PLANTRUBBER        0x003c
#define model_DD_PLANTSPIKE         0x003d
#define model_DD_PLANTSPIDER        0x003e
#define model_DD_WINDOW             0x003f
#define model_DD_REDSOFA            0x0040
#define model_DD_REDARM             0x0041
#define model_DD_SERVICEDOOR        0x0042
#define model_DD_WINDDOOR           0x0043
#define model_DD_LIFTDOOR           0x0044
#define model_DD_VERTBLIND          0x0045
#define model_DD_DESK               0x0046
#define model_DD_CHAIR              0x0047
#define model_NLOGO                 0x0048
#define model_NLOGO2                0x0049
#define model_NLOGO3                0x004a
#define model_PERFECTDARK           0x004b
#define model_PDONE                 0x004c
#define model_PDTWO                 0x004d
#define model_PDTHREE               0x004e
#define model_PDFOUR                0x004f
#define model_DD_HOVCOP             0x0050
#define model_DD_HOVMOTO            0x0051
#define model_DD_HOVTRUCK           0x0052
#define model_DD_HOVCAR             0x0053
#define model_DD_HOVCAB             0x0054
#define model_DD_AC_UNEXP           0x0055
#define model_DD_AC_EXP             0x0056
#define model_DD_ACBOT_UNEXP        0x0057
#define model_DD_ACBOT_EXP          0x0058
#define model_PC1                   0x0059
#define model_HOVERCRATE1           0x005a
#define model_DROPSHIP              0x005b
#define model_AL_AIRLOCK            0x005c
#define model_AL_DOCKLIFT           0x005d
#define model_CASE                  0x005e
#define model_DD_STONEDESK          0x005f
#define model_MEDLABWIN1            0x0060
#define model_MEDLABWIN2            0x0061
#define model_A51TABLE              0x0062
#define model_A51CHAIR              0x0063
#define model_A51SCREEN             0x0064
#define model_A51WASTEBIN           0x0065
#define model_A51DESKENT            0x0066
#define model_A51TROLLEY            0x0067
#define model_A51DIVIDE             0x0068
#define model_A51BOARD              0x0069
#define model_SKCREV_EXP1           0x006a
#define model_SKCREV_UNEXP1         0x006b
#define model_SKTNL_EXP1            0x006c
#define model_SKTNL_UNEXP1          0x006d
#define model_SK_DOOR1              0x006e
#define model_SK_SHIP_DOOR1         0x006f
#define model_SK_SHIP_HOLO1         0x0070
#define model_SK_SHIP_HOLO2         0x0071
#define model_SK_SHIP_HULLDOOR1     0x0072
#define model_SK_SHIP_HULLDOOR2     0x0073
#define model_SK_SHIP_HULLDOOR3     0x0074
#define model_SK_SHIP_HULLDOOR4     0x0075
#define model_SK_FIGHTER1           0x0076
#define model_SK_CRYOPOD1_TOP       0x0077
#define model_SK_CRYOPOD1_BOT       0x0078
#define model_SK_UNDER_GENERATOR    0x0079
#define model_SK_UNDER_TRANS        0x007a
#define model_SK_HANGARDOOR_TOP     0x007b
#define model_SK_HANGARDOOR_BOT     0x007c
#define model_DOOR2_G5              0x007d
#define model_DOOR1A_G5             0x007e
#define model_DOOR1B_G5             0x007f
#define model_DOOR1ATRI_G5          0x0080
#define model_DOOR2A_G5             0x0081
#define model_DD_DECODOOR           0x0082
#define model_DD_SECRETDOOR         0x0083
#define model_DD_SECRETDOOR2        0x0084
#define model_DDJUMPSHIP            0x0085
#define model_TAXICAB               0x0086
#define model_POLICECAR             0x0087
#define model_RAVINELIFT            0x0088
#define model_DD_LAB_DOOR_BS        0x0089
#define model_DD_LAB_DOOR_SEC       0x008a
#define model_DD_LAB_DOOR_WIND      0x008b
#define model_HOOVERBOT             0x008c
#define model_TESTERBOT             0x008d
#define model_DD_LAB_SECTOR2BOT     0x008e
#define model_DD_LAB_SECTOR2TOP     0x008f
#define model_DD_LAB_CAUTIONTOP     0x0090
#define model_DD_LAB_HAZARD         0x0091
#define model_DD_LAB_CAUTION        0x0092
#define model_thatch_DOOR        0x0093
#define model_DD_LAB_SECTOR3TOP     0x0094
#define model_DD_LAB_SECTOR3        0x0095
#define model_DD_LAB_SECTOR3WIND    0x0096
#define model_DD_HOVERCOPTER        0x0097
#define model_DD_LAB_SECTOR4TOP     0x0098
#define model_DD_LAB_RESTRICTED     0x0099
#define model_DOOR4A_G5             0x009a
#define model_DOOR4B_G5             0x009b
#define model_LASDOOR               0x009c
#define model_G5SAFEDOOR            0x009d
#define model_ROPE                  0x009e
#define model_G5_MAINFRAME          0x009f
#define model_thatch_DOOR_BASE   0x00a0
#define model_thatch_DOOR_MAIN   0x00a1
#define model_thatch_DOOR_LEFT   0x00a2
#define model_thatch_DOOR_RIGHT  0x00a3
#define model_thatch_DOOR_BMAIN  0x00a4
#define model_thatch_DOOR_BLEFT  0x00a5
#define model_thatch_DOOR_BRIGHT 0x00a6
#define model_DD_BANNER             0x00a7
#define model_G5_ESCDOORUP          0x00a8
#define model_G5_ESCDOORUPBOOM      0x00a9
#define model_G5_ESCDOORDOWN        0x00aa
#define model_G5_ESCDOORDOWNBOOM    0x00ab
#define model_DUMPSTER              0x00ac
#define model_G5CARLIFTDOOR         0x00ad
#define model_CH_SHUTTER1           0x00ae
#define model_CCTV_PD               0x00af
#define model_COMHUB                0x00b0
#define model_QUADPOD               0x00b1
#define model_PD_CONSOLE            0x00b2
#define model_DD_GRATE              0x00b3
#define model_LIFT_PLATFORM         0x00b4
#define model_LIGHTSWITCH           0x00b5
#define model_BLASTSHIELD           0x00b6
#define model_LIGHTSWITCH2          0x00b7
#define model_DD_ACCESSDOORUP       0x00b8
#define model_DD_ACCESSDOORDN       0x00b9
#define model_LAB_CONTAINER         0x00ba
#define model_LAB_CHAIR             0x00bb
#define model_LAB_TABLE             0x00bc
#define model_LAB_MICROSCOPE        0x00bd
#define model_LAB_MAINFRAME         0x00be
#define model_DD_LABDOOR            0x00bf
#define model_DD_LAB_DOORTOP        0x00c0
#define model_MULTI_AMMO_CRATE      0x00c1
#define model_pendant              0x00c2
#define model_TDOOR                 0x00c3
#define model_CI_SOFA               0x00c4
#define model_CI_LIFT               0x00c5
#define model_CI_LIFTDOOR           0x00c6
#define model_laserCUT              0x00c7
#define model_SK_SHUTTLE            0x00c8
#define model_NEWVILLADOOR          0x00c9
#define model_SK_PILLARLEFT         0x00ca
#define model_SK_PILLARRIGHT        0x00cb
#define model_SK_PLINTH_T           0x00cc
#define model_SK_PLINTH_ML          0x00cd
#define model_SK_PLINTH_MR          0x00ce
#define model_SK_PLINTH_BL          0x00cf
#define model_SK_PLINTH_BR          0x00d0
#define model_SK_FL_SHAD_T          0x00d1
#define model_SK_FL_SHAD_ML         0x00d2
#define model_SK_FL_SHAD_MR         0x00d3
#define model_SK_FL_SHAD_BL         0x00d4
#define model_SK_FL_SHAD_BR         0x00d5
#define model_SK_FL_NOSHAD_T        0x00d6
#define model_SK_FL_NOSHAD_ML       0x00d7
#define model_SK_FL_NOSHAD_MR       0x00d8
#define model_SK_FL_NOSHAD_BL       0x00d9
#define model_SK_FL_NOSHAD_BR       0x00da
#define model_SK_TEMPLECOLUMN1      0x00db
#define model_SK_TEMPLECOLUMN2      0x00dc
#define model_SK_TEMPLECOLUMN3      0x00dd
#define model_SK_SUNSHAD1           0x00de
#define model_SK_SUNSHAD2           0x00df
#define model_SK_SUNNOSHAD1         0x00e0
#define model_SK_SUNNOSHAD2         0x00e1
#define model_BARREL                0x00e2
#define model_GLASS_FLOOR           0x00e3
#define model_ESCA_STEP             0x00e4
#define model_MATRIX_LIFT           0x00e5
#define model_RUBBLE1               0x00e6
#define model_RUBBLE2               0x00e7
#define model_RUBBLE3               0x00e8
#define model_RUBBLE4               0x00e9
#define model_CABLE_CAR             0x00ea
#define model_ELVIS_SAUCER          0x00eb
#define model_STEWARDESS_TROLLEY    0x00ec
#define model_AIRBASE_LIFT_ENCLOSED 0x00ed
#define model_AIRBASE_LIFT_ANGLE    0x00ee
#define model_AIRBASE_SAFEDOOR      0x00ef
#define model_AF1_PILOTCHAIR        0x00f0
#define model_AF1_PASSCHAIR         0x00f1
#define model_TESTOBJ               0x00f2
#define model_nvg                   0x00f3
#define model_shield                0x00f4
#define model_eagle                 0x00f5
#define model_auto9                 0x00f6
#define model_zblaster              0x00f7
#define model_magnum                0x00f8
#define model_gmagnum               0x00f9
#define model_zpistol               0x00fa
#define model_eagle_s               0x00fb
#define model_eagle_h               0x00fc
#define model_tmp                   0x00fd
#define model_famas                 0x00fe
#define model_g36                   0x00ff
#define model_xg36                  0x0100
#define model_mp7                   0x0101
#define model_xsmg                  0x0102
#define model_zsmg                  0x0103
#define model_xp90                  0x0104
#define model_laptop                0x0105
#define model_shotgun               0x0106
#define model_zlmg                  0x0107
#define model_rocket                0x0108
#define model_thumper               0x0109
#define model_zrocket               0x010a
#define model_zsniper               0x010b
#define model_sniper                0x010c
#define model_xbow                  0x010d
#define model_tranq                 0x010e
#define model_knife                 0x010f
#define model_nbomb                 0x0110
#define model_fbomb                 0x0111
#define model_grenade               0x0112
#define model_fmine                 0x0113
#define model_pmine                 0x0114
#define model_rmine                 0x0115
#define model_ecm                   0x0116
#define model_ppk                   0x0117
#define model_tt33                  0x0118
#define model_vz61                  0x0119
#define model_akms                  0x011a
#define model_uzi                   0x011b
#define model_mp5k                  0x011c
#define model_m16                   0x011d
#define model_p90                   0x011e
#define model_arrow_rocket          0x011f
#define model_arrow_zrocket         0x0120
#define model_arrow_xbolt           0x0121
#define model_arrow_thumper         0x0122
#define model_arrow_g36             0x0123
#define model_A51_TURRET            0x0124
#define model_PELAGICDOOR           0x0125
#define model_AUTOSURGEON           0x0126
#define model_LIMO                  0x0127
#define model_A51INTERCEPTOR        0x0128
#define model_A51DISH               0x0129
#define model_A51RADARCONSOLE       0x012a
#define model_A51LOCKERDOOR         0x012b
#define model_G5GENERATOR           0x012c
#define model_G5DUMPSTER            0x012d
#define model_cloak                 0x012e
#define model_boost                 0x012f
#define model_BIGPELAGICDOOR        0x0130
#define model_SK_JONRUBBLE3         0x0131
#define model_SK_JONRUBBLE4         0x0132
#define model_SK_JONRUBBLE5         0x0133
#define model_SK_JONRUBBLE6         0x0134
#define model_BAGGAGECARRIER        0x0135
#define model_MINESIGN              0x0136
#define model_CHAMBER               0x0137
#define model_ISOTOPEEXPERIMENT     0x0138
#define model_ISOTOPE               0x0139
#define model_REACTORDOOR           0x013a
#define model_SAUCERINSIDE          0x013b
#define model_VILLASTOOL            0x013c
#define model_CETANWINDOW1          0x013d
#define model_CETANWINDOW2          0x013e
#define model_CETANWINDOW3          0x013f
#define model_BINOCULARS            0x0140
#define model_SUBMARINE             0x0141
#define model_AIRFORCE1             0x0142
#define model_ENGINEPART            0x0143
#define model_CETROOFGUN            0x0144
#define model_CETANSMALLDOOR        0x0145
#define model_POWERNODE             0x0146
#define model_CETANBLUEGREENL       0x0147
#define model_CETANBLUEGREENR       0x0148
#define model_SKEDARCONSOLE         0x0149
#define model_SKEDARCONSOLEPANEL    0x014a
#define model_WEAPONCDOOR           0x014b
#define model_TARGET                0x014c
#define model_DEVICESECRETDOOR      0x014d
#define model_CARRINGTONSECRETDOOR  0x014e
#define model_SINISTERPC            0x014f
#define model_SINISTERSTATION       0x0150
#define model_KEYPADLOCK            0x0151
#define model_THUMBPRINTSCANNER     0x0152
#define model_RETINALOCK            0x0153
#define model_CARDLOCK              0x0154
#define model_GOODSTATION           0x0155
#define model_GOODPC                0x0156
#define model_laptop                0x0157
#define model_G5BIGCHAIR            0x0158
#define model_G5SMALLCHAIR          0x0159
#define model_KINGSCEPTRE           0x015a
#define model_LABCOAT               0x015b
#define model_CIDOOR1               0x015c
#define model_G5_CHAIR              0x015d
#define model_G5_CHAIR2             0x015e
#define model_DD_WINDOW_FOYER       0x015f
#define model_CI_CABINET            0x0160
#define model_CI_DESK               0x0161
#define model_CI_CARR_DESK          0x0162
#define model_CI_F_CHAIR            0x0163
#define model_CI_LOUNGER            0x0164
#define model_CI_F_SOFA             0x0165
#define model_CI_TABLE              0x0166
#define model_CV_COFFEE_TABLE       0x0167
#define model_CV_CHAIR1             0x0168
#define model_CV_CHAIR2             0x0169
#define model_CV_SOFA               0x016a
#define model_CV_CHAIR4             0x016b
#define model_CV_LAMP               0x016c
#define model_CV_CABINET            0x016d
#define model_CV_F_BED              0x016e
#define model_PEL_CHAIR1            0x016f
#define model_SK_CONSOLE2           0x0170
#define model_DD_EAR_TABLE          0x0171
#define model_DD_EAR_CHAIR          0x0172
#define model_AIRBASE_TABLE2        0x0173
#define model_AIRBASE_CHAIR2        0x0174
#define model_MISC_CRATE            0x0175
#define model_A51_CRATE1_0175       0x0176
#define model__irg          0x0177
#define model_A51_ROOFGUN           0x0178
#define model_SK_DRONE_GUN          0x0179
#define model_CI_ROOFGUN            0x017a
#define model_CV_TABLE              0x017b
#define model_CIDOOR1_REF           0x017c
#define model_ALASKADOOR_OUT        0x017d
#define model_ALASKADOOR_IN         0x017e
#define model_WIREFENCE             0x017f
#define model_RARELOGO              0x0180
#define model_KEYCARD               0x0181
#define model_BODYARMOUR            0x0182
#define model_A51GATE_R             0x0183
#define model_A51GATE_L             0x0184
#define model_AF1_LAMP              0x0185
#define model_AF1_TOILET            0x0186
#define model_AF1_DOORBIG2          0x0187
#define model_AF1_PHONE             0x0188
#define model_AF1_CARGODOOR         0x0189
#define model_G5_ALARM              0x018a
#define model_G5_laser_SWITCH       0x018b
#define model_SK_TEMPLECOLUMN4      0x018c
#define model_COREHATCH             0x018d
#define model_A51GRATE              0x018e
#define model_AF1ESCAPEDOOR         0x018f
#define model_PRESCAPSULE           0x0190
#define model_SKEDARBRIDGE          0x0191
#define model_PELAGICDOOR2          0x0192
#define model_TTB_BOX               0x0193
#define model_INSTFRONTDOOR         0x0194
#define model_laser                 0x0195
#define model_bfta                  0x0196
#define model_screwdriver           0x0197
#define model_hammer                0x0198
#define model_bomb                  0x0199
#define model_zbomb                 0x019a
#define model_ZIGGYCARD             0x019b
#define model_SAFEITEM              0x019c
#define model_pscan                 0x019d
#define model_xray                  0x019e
#define model_CHRLUMPHAMMER2        0x019f
#define model_CHREYESPY             0x01a0
#define model_CHRDOORDECODER        0x01a1
#define model_AF1_TABLE             0x01a2
#define model_SHUTTLEDOOR           0x01a3
#define model_RUINBRIDGE            0x01a4
#define model_SECRETINDOOR          0x01a5
#define model_SENSITIVEINFO         0x01a6
#define model_suitcase              0x01a7
#define model_SKPUZZLEOBJECT        0x01a8
#define model_A51LIFTDOOR           0x01a9
#define model_CIHUB                 0x01aa
#define model_SK_SHIP_DOOR2         0x01ab
#define model_SK_WINDOW1            0x01ac
#define model_SK_HANGARDOORB_TOP    0x01ad
#define model_SK_HANGARDOORB_BOT    0x01ae
#define model_AF1_INNERDOOR         0x01af
#define model_laser_POST            0x01b0
#define model_amp                   0x01b1
#define model_SK_LIFT               0x01b2
#define model_KNOCKKNOCK            0x01b3
#define model_CETANDOOR             0x01b4
#define model_AF1RUBBLE             0x01b5
#define model_DD_DR_NONREF          0x01b6
#define model_CETANDOORSIDE         0x01b7
#define model_BUDDYBRIDGE           0x01b8
#define model_JPNLOGO               0x01b9
#define model_JPNPD                 0x01ba
#define NUM_MODELS                  (VERSION == VERSION_JPN_FINAL ? 0x1bb : 0x1b9)

// model node type

#define mnt_CHRINFO      0x01
#define mnt_POSITION     0x02
#define mnt_GUNDL        0x04
#define mnt_05           0x05
#define mnt_DISTANCE     0x08
#define mnt_REORDER      0x09
#define mnt_BBOX         0x0a
#define mnt_0B           0x0b
#define mnt_CHRGUNFIRE   0x0c
#define mnt_0D           0x0d
#define mnt_0E           0x0e
#define mnt_0F           0x0f
#define mnt_11           0x11
#define mnt_toggle       0x12
#define mnt_POSITIONHELD 0x15
#define mnt_STARGUNFIRE  0x16
#define mnt_HEADSPOT     0x17
#define mnt_DL           0x18
#define mnt_0100         0x0100
#define mnt_0200         0x0200

// model part

#define part_famas_0042           0x0042 // toggle
#define part_famas_0050           0x0050 // position
#define part_famas_0051           0x0051 // position
#define part_famas_mag_0          0x0029 // toggle
#define part_famas_mag_1          0x002a // toggle
#define part_autogun_0000         0x0000 // position
#define part_autogun_0001         0x0001 // position
#define part_autogun_0002         0x0002 // position
#define part_autogun_0003         0x0003 // position
#define part_autogun_0004         0x0004 // position
#define part_autogun_0006         0x0006 // position
#define part_autogun_flashleft    0x0005 // gunfire
#define part_autogun_flashright   0x0007 // gunfire
#define part_basic_0064           0x0064 // type19
#define part_basic_0065           0x0065 // type19
#define part_basic_0066           0x0066 // type19
#define part_basic_0067           0x0067 // bbox
#define part_basic_00c8           0x00c8 // toggle
#define part_basic_00c9           0x00c9 // toggle
#define part_basic_00ca           0x00ca // toggle
#define part_basic_00cb           0x00cb // toggle
#define part_basic_00cc           0x00cc // toggle
#define part_basic_00cd           0x00cd // toggle
#define part_basic_00ce           0x00ce // toggle
#define part_basic_00cf           0x00cf // toggle
#define part_basic_00d0           0x00d0 // toggle
#define part_basic_00d1           0x00d1 // toggle
#define part_basic_00d2           0x00d2 // toggle
#define part_basic_00d3           0x00d3 // toggle
#define part_zsmg_orb             0x0028 // toggle
#define part_cctv_0002            0x0002 // bbox
#define part_cctv_0003            0x0003 // toggle
#define part_cctv_casing          0x0000 // position
#define part_cctv_lens            0x0001 // dl
#define part_chopper_0000         0x0000 // position
#define part_chopper_0001         0x0001 // position
#define part_chopper_0002         0x0002 // position
#define part_chopper_0005         0x0005 // toggle
#define part_chopper_gunflash     0x0003 // gunfire
#define part_chrgun_0001          0x0001 // positionheld
#define part_chrgun_0002          0x0002 // toggle
#define part_chrgun_gunfire       0x0000 // gunfire
#define part_chr_0000             0x0000 // position
#define part_chr_0001             0x0001 // position
#define part_chr_0002             0x0002 // position
#define part_chr_0006             0x0006 // position
#define part_chr_headspot         0x0004 // headspot
#define part_chr_lefthand         0x0005 // position
#define part_chr_necklace         0x0007 // toggle
#define part_chr_righthand        0x0003 // position
#define part_cihub_0000           0x0000 // dl
#define part_cihub_0001           0x0001 // dl
#define part_cihub_0002           0x0002 // dl
#define part_cihub_0003           0x0003 // dl
#define part_classicgun_0050      0x0050 // position
#define part_tmp_0042             0x0042 // toggle
#define part_tmp_0050             0x0050 // position
#define part_tmp_0051             0x0051 // position
#define part_tmp_mag_0            0x002a // toggle
#define part_tmp_mag_1            0x002b // toggle
#define part_xbow_0028            0x0028 // toggle
#define part_xbow_0042            0x0042 // toggle
#define part_xbow_bolt            0x0029 // toggle
#define part_xbow_handle          0x002a // toggle
#define part_xsmg_0050            0x0050 // position
#define part_xsmg_0051            0x0051 // position
#define part_xsmg_magazine        0x0028 // toggle
#define part_thumper_0028         0x0028 // position
#define part_thumper_cart1        0x0064 // toggle - innermost cartridge
#define part_thumper_cart2        0x0065 // toggle
#define part_thumper_cart3        0x0066 // toggle
#define part_thumper_cart4        0x0067 // toggle
#define part_thumper_cart5        0x0068 // toggle
#define part_thumper_cart6        0x0069 // toggle
#define part_thumper_cart7        0x006a // toggle
#define part_thumper_cart8        0x006b // toggle - outermost cartridge
#define part_thumper_mag_0        0x0029 // toggle
#define part_thumper_mag_1        0x002a // toggle
#define part_g36_0042             0x0042 // toggle
#define part_g36_0050             0x0050 // position
#define part_g36_0051             0x0051 // position
#define part_g36_0052             0x0052 // position
#define part_g36_mag_0            0x0028 // toggle
#define part_g36_mag_1            0x002a // toggle
#define part_thatch_0000          0x0000 // toggle
#define part_thatch_0001          0x0001 // toggle
#define part_thatch_0002          0x0002 // toggle
#define part_thatch_0003          0x0003 // toggle
#define part_thatch_0004          0x0004 // toggle
#define part_thatch_0005          0x0005 // toggle
#define part_thatch_0006          0x0006 // toggle
#define part_thatch_0007          0x0007 // toggle
#define part_thatch_0008          0x0008 // toggle
#define part_thatch_0009          0x0009 // toggle
#define part_thatch_000A          0x000a // toggle
#define part_thatch_000B          0x000b // toggle
#define part_dropship_0064        0x0064 // type19
#define part_dropship_interior    0x006e // toggle
#define part_eagle_002E           0x002e // toggle
#define part_eagle_002F           0x002f // toggle
#define part_eagle_0042           0x0042 // toggle
#define part_eagle_0050           0x0050 // position
#define part_eagle_0051           0x0051 // position
#define part_eagle_mag_0          0x002a // toggle
#define part_eagle_mag_1          0x002b // toggle
#define part_eagle_scope          0x002c // toggle
#define part_eagle_s              0x002d // toggle
#define part_zsniper_orb          0x0028 // toggle
#define part_grenade_002b         0x002b // position
#define part_grenade_0064         0x0064 // toggle
#define part_gun_cartejectpos     0x003c // position
#define part_gun_cartflapclosed   0x0046 // toggle
#define part_gun_cartflapopen     0x0047 // toggle
#define part_gun_HOLDpos          0x0037 // position
#define part_gun_laserliquid      0x0041 // gundl
#define part_gun_lasersight       0x0034 // position
#define part_gun_muzzleflash1     0x005a // toggle
#define part_gun_muzzleflash2     0x005b // toggle
#define part_gun_muzzleflash3     0x005c // toggle
#define part_gun_muzzlepos        0x0032 // position
#define part_gun_slide            0x0033 // position
#define part_hand_left            0x0035 // toggle
#define part_hand_right           0x0036 // toggle
#define part_head_0190            0x0190 // dl
#define part_head_0191            0x0191 // dl
#define part_head_0192            0x0192 // dl
#define part_head_eyesclosed      0x0003 // toggle
#define part_head_eyesopen        0x0002 // toggle
#define part_head_hat             0x0001 // toggle
#define part_head_hudpiece        0x0004 // toggle
#define part_head_sunglasses      0x0000 // toggle
#define part_hoverbike_0064       0x0064 // type19
#define part_hudpiece_0000        0x0000 // gundl
#define part_hudpiece_0001        0x0001 // position
#define part_hudpiece_0002        0x0002 // position
#define part_joypad_0000          0x0000 // position
#define part_joypad_0001          0x0001 // position
#define part_joypad_0002          0x0002 // position
#define part_joypad_0003          0x0003 // position
#define part_joypad_0004          0x0004 // position
#define part_joypad_0005          0x0005 // position
#define part_joypad_0006          0x0006 // position
#define part_joypad_0007          0x0007 // position
#define part_joypad_0008          0x0008 // position
#define part_joypad_0009          0x0009 // position
#define part_joypad_000a          0x000a // position
#define part_joypad_000b          0x000b // position
#define part_joypad_000c          0x000c // position
#define part_joypad_000d          0x000d // toggle
#define part_mp7_0042             0x0042 // toggle
#define part_mp7_0050             0x0050 // position
#define part_mp7_0051             0x0051 // position
#define part_mp7_mag_0            0x0029 // toggle
#define part_mp7_mag_1            0x002a // toggle
#define part_knife_0064           0x0064 // toggle
#define part_laptop_0050          0x0050 // position
#define part_laptop_0051          0x0051 // position
#define part_laptop_mag_0         0x0029 // toggle
#define part_laptop_mag_1         0x002a // toggle
#define part_laser_0042           0x0042 // toggle
#define part_lift_doorblock       0x0004 // type19
#define part_lift_floornonrect1   0x0005 // type19
#define part_lift_floornonrect2   0x0006 // type19
#define part_lift_floorrect       0x0000 // bbox
#define part_lift_wall1           0x0001 // type19
#define part_lift_wall2           0x0002 // type19
#define part_lift_wall3           0x0003 // type19
#define part_logo_0000            0x0000 // toggle
#define part_logo_0001            0x0001 // toggle
#define part_logo_frontside       0x0002 // dl
#define part_logo_0003            0x0003 // dl
#define part_logo_rightside       0x0004 // dl
#define part_logo_0005            0x0005 // dl
#define part_logo_backside        0x0006 // dl
#define part_logo_0007            0x0007 // dl
#define part_logo_leftside        0x0008 // dl
#define part_logo_0009            0x0009 // dl
#define part_logo_0110            0x0110 // toggle
#define part_logo_0500            0x0500 // toggle
#define part_logo_4040            0x4040 // dl
#define part_magnum_000a          0x000a // position
#define part_magnum_000b          0x000b // position
#define part_magnum_000c          0x000c // position
#define part_magnum_000d          0x000d // position
#define part_magnum_000e          0x000e // position
#define part_magnum_000f          0x000f // position
#define part_magnum_0042          0x0042 // toggle
#define part_magnum_0050          0x0050 // position
#define part_magnum_0051          0x0051 // position
#define part_magnum_cart1         0x0028 // toggle
#define part_magnum_cart2         0x0029 // toggle
#define part_magnum_cart3         0x002a // toggle
#define part_magnum_cart4         0x002b // toggle
#define part_magnum_cart5         0x002c // toggle
#define part_magnum_cart6         0x002d // toggle
#define part_maianufo_0064        0x0064 // type19
#define part_zblaster_0050        0x0050 // position
#define part_zblaster_mag_0       0x002a // toggle
#define part_zblaster_mag_1       0x002b // toggle
#define part_zpistol_0042         0x0042 // toggle
#define part_zpistol_orb          0x0028 // toggle
#define part_pistol_0042          0x0042 // toggle
#define part_pistol_0050          0x0050 // position
#define part_pistol_mag_0         0x0029 // toggle
#define part_pistol_mag_1         0x002a // toggle
#define part_rarelogo_000b        0x000b // toggle
#define part_rarelogo_000c        0x000c // toggle
#define part_rarelogo_000d        0x000d // toggle
#define part_xp90_0042            0x0042 // toggle
#define part_xp90_0050            0x0050 // position
#define part_xp90_0051            0x0051 // position
#define part_xp90_mag_0           0x0028 // toggle
#define part_xp90_mag_1           0x0029 // toggle
#define part_zlmg_001e            0x001e // position
#define part_zlmg_001f            0x001f // position
#define part_zlmg_0020            0x0020 // position
#define part_zlmg_002c            0x002c // position
#define part_zlmg_002d            0x002d // position
#define part_zlmg_002e            0x002e // position
#define part_zlmg_002f            0x002f // position
#define part_zlmg_0042            0x0042 // toggle
#define part_zlmg_0050            0x0050 // position
#define part_zlmg_0051            0x0051 // position
#define part_zlmg_0052            0x0052 // position
#define part_zlmg_cartejectpos1   0x0030 // position
#define part_zlmg_cartejectpos2   0x0031 // position
#define part_zlmg_mag_0           0x002a // toggle
#define part_zlmg_mag_1           0x002b // toggle
#define part_rmine_002a           0x002a // position
#define part_rmine_detonator      0x0029 // toggle
#define part_rmine_mine           0x0028 // toggle
#define part_robot_0000           0x0000 // position
#define part_robot_0001           0x0001 // position
#define part_robot_0004           0x0004 // toggle
#define part_robot_lgunfire       0x0003 // gunfire
#define part_robot_rgunfire       0x0002 // gunfire
#define part_rocket_0042          0x0042 // toggle
#define part_rocket_rocket        0x0028 // toggle
#define part_shotgun_0042         0x0042 // toggle
#define part_shotgun_0050         0x0050 // position
#define part_shotgun_cart         0x002b // toggle
#define part_skedar_0000          0x0000 // position
#define part_skedar_0001          0x0001 // position
#define part_skedar_eyesclosed    0x0005 // toggle
#define part_skedar_eyesopen      0x0004 // toggle
#define part_skedar_lefthand      0x0003 // position
#define part_skedar_righthand     0x0002 // position
#define part_skshuttle_gangway    0x00b7 // toggle
#define part_zrocketrocket_0042    0x0042 // toggle
#define part_sniper_0042          0x0042 // toggle
#define part_sniper_mag_0         0x0028 // toggle
#define part_sniper_mag_1         0x0029 // toggle
#define part_sniper_scope1        0x002a // position
#define part_sniper_scope2        0x002b // position
#define part_sniper_scope3        0x002c // position
#define part_sniper_scope4        0x002d // position
#define part_xg36_0042            0x0042 // toggle
#define part_xg36_0050            0x0050 // position
#define part_xg36_0051            0x0051 // position
#define part_xg36_0052            0x0052 // position
#define part_xg36_mag_0           0x0028 // toggle
#define part_xg36_mag_1           0x0029 // toggle
#define part_xg36_mag_2           0x002a // toggle
#define part_xg36_mag_3           0x002b // toggle
#define part_terminal_0000        0x0000 // dl
#define part_tranq_002b           0x002b // position
#define part_tranq_0042           0x0042 // toggle
#define part_tranq_mag_0          0x0028 // toggle
#define part_tranq_mag_1          0x0029 // toggle
#define part_tranq_mag_2          0x002a // toggle
#define part_truck_0005           0x0005 // ?
#define part_uzi_0050             0x0050 // position
#define part_uzi_0051             0x0051 // position
#define part_windoweddoor_0000    0x0000 // bbox
#define part_windoweddoor_0001    0x0001 // toggle
#define part_windoweddoor_0002    0x0002 // bbox
#define part_windoweddoor_0003    0x0003 // dl

// part for unknown model type

#define part_0000 0x0000
#define part_0001 0x0001
#define part_0002 0x0002
#define part_0003 0x0003
#define part_0010 0x0010
#define part_0011 0x0011
#define part_0042 0x0042
#define part_0065 0x0065
#define part_0066 0x0066
#define part_0067 0x0067

struct modelrodata_chrinfo { // type 0x01
	uint16_t animpart;
	int16_t mtxindex;
	float unk04;
	uint16_t rwdataindex;
};

struct modelrodata_position { // type 0x02
	float3 pos;
	uint16_t part;
	union {
		int16_t mtxindexes[3];
		struct {
			int16_t mtxindex0;
			int16_t mtxindex1;
			int16_t mtxindex2;
		};
	};
	float drawdist;
};

struct modelrodata_gundl { // type 0x04
	gfx_t *opagdl;
	gfx_t *xlugdl;
	void *baseaddr;
	vtx *vertices;
	int16_t numvertices;
	int16_t unk12;
};

struct modelrodata_distance { // type 0x08
	float near;
	float far;
	struct modelnode *target;
	uint16_t rwdataindex;
};

struct modelrodata_reorder { // type 0x09
	float unk00;
	float unk04;
	float unk08;
	float unk0c[3];
	struct modelnode *unk18;
	struct modelnode *unk1c;
	int16_t side;
	uint16_t rwdataindex;
};

struct modelrodata_bbox { // type 0x0a
	int hitpart;
	float xmin;
	float xmax;
	float ymin;
	float ymax;
	float zmin;
	float zmax;
};

struct modelrodata_type0b { // type 0x0b
	uint32_t unk00;
	uint32_t unk04;
	uint32_t unk08;
	uint32_t unk0c;
	uint32_t unk10;
	uint32_t unk14;
	uint32_t unk18;
	uint32_t unk1c;
	uint32_t unk20;
	uint32_t unk24;
	uint32_t unk28;
	uint32_t unk2c;
	uint32_t unk30;
	uint32_t unk34;
	uint32_t unk38;
	void *unk3c;
	uint32_t unk40;
	uint16_t rwdataindex;
	void *baseaddr;
};

struct modelrodata_chrgunfire { // type 0x0c
	float3 pos;
	float3 dim;
	struct textureconfig *texture;
	float unk1c;
	uint16_t rwdataindex;
	void *baseaddr;
};

struct modelrodata_type0d { // type 0x0d
	uint32_t unk00;
	uint32_t unk04;
	uint32_t unk08;
	uint32_t unk0c;
	void *unk10;
	void *unk14;
	uint32_t unk18;
	void *baseaddr;
};

struct modelrodata_type11 { // type 0x11
	uint32_t unk00;
	uint32_t unk04;
	uint32_t unk08;
	uint32_t unk0c;
	uint32_t unk10;
	void *unk14;
};

struct modelrodata_toggle { // type 0x12
	struct modelnode *target;
	uint16_t rwdataindex;
};

struct modelrodata_positionheld { // type 0x15
	float3 pos;
	int16_t mtxindex;
};

struct modelrodata_stargunfire { // type 0x16
	int unk00;
	vtx *vertices;
	gfx_t *gdl;
	void *baseaddr;
};

struct modelrodata_headspot { // type 0x17
	uint16_t rwdataindex;
};

struct modelrodata_dl { // type 0x18
	/*0x00*/ gfx_t *opagdl;
	/*0x04*/ gfx_t *xlugdl;
	/*0x08*/ col_t *colors;
	/*0x0c*/ vtx *vertices; // colors follow this array
	/*0x10*/ int16_t numvertices;
	/*0x12*/ int16_t mcount;
	/*0x14*/ uint16_t rwdataindex;
	/*0x16*/ uint16_t numcolors;
};

struct modelrodata_type19 { // type 0x19
	/*0x00*/ int numvertices;
	/*0x04*/ float3 vertices[4];
};

union modelrodata {
	struct modelrodata_chrinfo chrinfo;
	struct modelrodata_position position;
	struct modelrodata_gundl gundl;
	struct modelrodata_distance distance;
	struct modelrodata_reorder reorder;
	struct modelrodata_bbox bbox;
	struct modelrodata_type0b type0b;
	struct modelrodata_chrgunfire chrgunfire;
	struct modelrodata_type0d type0d;
	struct modelrodata_type11 type11;
	struct modelrodata_toggle toggle;
	struct modelrodata_positionheld positionheld;
	struct modelrodata_stargunfire stargunfire;
	struct modelrodata_headspot headspot;
	struct modelrodata_dl dl;
	struct modelrodata_type19 type19;
};

struct modelnode {
	/*0x00*/ uint16_t type;
	/*0x04*/ union modelrodata *rodata;
	/*0x08*/ struct modelnode *parent;
	/*0x0c*/ struct modelnode *next;
	/*0x10*/ struct modelnode *prev;
	/*0x14*/ struct modelnode *child;
};

struct modeldef {
	struct modelnode *rootnode;
	struct skeleton *skel;

	// This is a pointer to a variable length array of pointers to modelnodes,
	// but the array is followed by an int16_t array of part numbers.
	struct modelnode **parts;

	int16_t numparts;
	int16_t nummatrices;
	float scale;
	int16_t rwdatalen; // in words
	int16_t numtexconfigs;
	struct textureconfig *texconfigs;
};

struct xmodel {
	/*0x00*/ uint8_t unk00;
	/*0x01*/ uint8_t unk01;
	/*0x02*/ int16_t rwdatalen; // in words
	/*0x04*/
	union {
		actor_t *chr;
		prop_base *obj;
	};
	/*0x08*/ struct modeldef *definition;
	/*0x0c*/ mtxf *matrices;
	/*0x10*/ uint32_t *rwdatas;
	/*0x14*/ float scale;
	/*0x18*/ struct model *attachedtomodel;
	/*0x1c*/ struct modelnode *attachedtonode;
	/*0x20*/ struct anim *anim;
};

struct modelrwdata_chrinfo { // type 0x01
	int8_t unk00;
	int8_t unk01;
	int8_t unk02;
	float  ground;
	float3 pos;
	float  yrot; // angle
	float  unk18;
	float  unk1c;
	float  unk20; // angle
	float3 unk24;
	float  unk30; // angle
	float3 unk34;
	float3 unk40; // "2" version of unk24
	float3 unk4c; // "2" version of unk34
	float  unk58;
	float  unk5c;
};

struct modelrwdata_05 { // type 0x05
	bool unk00;
};

struct modelrwdata_distance { // type 0x08
	bool visible;
};

struct modelrwdata_reorder { // type 0x09
	bool reverse;
};

struct modelrwdata_0b { // type 0x0b
	uint16_t unk00;
	uint16_t unk04;
};

struct modelrwdata_chrgunfire { // type 0x0c
	int16_t visible;
	uint16_t unk02;
};

struct modelrwdata_toggle { // type 0x12
	bool visible;
};

struct modelrwdata_headspot { // type 0x17
	struct modeldef *headmodeldef;
	void *rwdatas;
};

struct modelrwdata_dl { // type 0x18
	vtx *vertices;
	gfx_t *gdl;
	col_t *colors;
};

union modelrwdata {
	struct modelrwdata_chrinfo chrinfo;
	struct modelrwdata_05 type05;
	struct modelrwdata_distance distance;
	struct modelrwdata_reorder reorder;
	struct modelrwdata_0b type0b;
	struct modelrwdata_chrgunfire chrgunfire;
	struct modelrwdata_toggle toggle;
	struct modelrwdata_headspot headspot;
	struct modelrwdata_dl dl;
};

struct model_t {

};

int16_t model_get_anim_num( model_t &self );
