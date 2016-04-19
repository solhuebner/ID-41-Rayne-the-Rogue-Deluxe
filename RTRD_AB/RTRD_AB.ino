/*
  Rayne the Rogue Deluxe: http://www.team-arg.org/rtrd-manual.html

  Arduboy version 0.1:  http://www.team-arg.org/rtrd-downloads.html

  MADE by TEAM a.r.g. : http://www.team-arg.org/more-about.html

  2016 ShdwWzrd - JO3RI

  License: MIT : https://opensource.org/licenses/MIT

*/

//determine the game
#define GAME_ID 41

#include "Arglib.h"
#include "globals.h"
#include "menu.h"
#include "game.h"
#include "inputs.h"
#include "player.h"
#include "elements.h"
#include "enemies.h"

typedef void (*FunctionPointer) ();
FunctionPointer mainGameLoop[] = {
  stateMenuIntro,
  stateMenuMain,
  stateMenuHelp,
  stateMenuPlay,
  stateMenuInfo,
  stateMenuSoundfx,
  stateGamePrepareLevel,
  stateGameNextLevel,
  stateGamePlaying,
  stateGamePause,
  stateGameOver,
};

void setup()
{
  arduboy.start();
  arduboy.setFrameRate(60);
  gameState = STATE_MENU_INTRO;
  menuSelection = STATE_MENU_PLAY;
  if (EEPROM.read(EEPROM_AUDIO_ON_OFF)) soundYesNo = true;
  arduboy.initRandomSeed();
}

void loop()
{
  if (!(arduboy.nextFrame())) return;
  buttons.poll();
  if (soundYesNo == true) arduboy.audio.on();
  else arduboy.audio.off();
  arduboy.clearDisplay();
  mainGameLoop[gameState]();
  arduboy.display();
}

