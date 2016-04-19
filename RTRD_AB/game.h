#ifndef GAME_H
#define GAME_H

#include <Arduino.h>
#include "globals.h"
#include "inputs.h"
#include "player.h"
#include "enemies.h"
#include "elements.h"


void stateGamePrepareLevel()
{
  gameState = STATE_GAME_NEXT_LEVEL;
};


void stateGameNextLevel()
{
  gameState = STATE_GAME_PLAYING;
};


void stateGamePlaying()
{
  checkInputs();
  drawPlayer();
};

void stateGamePause()
{
  
};

void stateGameOver()
{
  
};



#endif
