#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include "Arglib.h"
#include "bitmaps.h"

//define menu states (on main menu)
#define STATE_MENU_INTRO             0
#define STATE_MENU_MAIN              1
#define STATE_MENU_HELP              2
#define STATE_MENU_LOAD_OR_NEW       3
#define STATE_MENU_INFO              4
#define STATE_MENU_SOUNDFX           5
#define STATE_MENU_EASY_NORMAL_HARD  6

//define game states (on main menu)
#define STATE_GAME_PREPARE_LEVEL     7
#define STATE_GAME_NEXT_LEVEL        8
#define STATE_GAME_PLAYING           9
#define STATE_GAME_PAUSE             10
#define STATE_GAME_OVER              11

#define GAME_LEVEL_EASY              1
#define GAME_LEVEL_NORMAL            2
#define GAME_LEVEL_HARD              3

#define GAME_TOP                     0
#define GAME_BOTTOM                  48
#define GAME_LEFT                    0
#define GAME_RIGHT                   112

#define FACING_SOUTH                 0
#define FACING_WEST                  1
#define FACING_NORTH                 2
#define FACING_EAST                  3



Arduboy arduboy;
Sprites sprites(arduboy);
SimpleButtons buttons (arduboy);

unsigned char gameState;
boolean soundYesNo;
boolean loadYesNo;
int menuSelection;
byte counter = 0;
byte level;
byte gameLevel;
unsigned long scorePlayer; 

#endif
