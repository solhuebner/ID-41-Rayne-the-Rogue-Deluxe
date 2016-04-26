#ifndef MENU_H
#define MENU_H

#include <Arduino.h>
#include "globals.h"

void stateMenuIntro()
{
  counter++;
  arduboy.drawBitmap(0, 8, TEAMarg, 128, 48, WHITE);
  if (counter > 180) gameState = STATE_MENU_MAIN;
}

void stateMenuMain()
{
  arduboy.drawBitmap(0, 0, titleScreen, 128, 64, WHITE);
  if (buttons.justPressed(RIGHT_BUTTON) && (menuSelection < 5)) menuSelection++;
  if (buttons.justPressed(LEFT_BUTTON) && (menuSelection > 2)) menuSelection--;
  if (buttons.justPressed(B_BUTTON)) gameState = menuSelection;
}

void stateMenuHelp()
{
  arduboy.drawBitmap(32, 0, qrcode, 64, 64, WHITE);
  if (buttons.justPressed(A_BUTTON | B_BUTTON)) gameState = STATE_MENU_MAIN;
}


void stateMenuInfo()
{
  arduboy.drawBitmap(16, 20, info, 96, 24, WHITE);
  if (buttons.justPressed(A_BUTTON | B_BUTTON)) gameState = STATE_MENU_MAIN;
}

void stateMenuSoundfx()
{
  if (buttons.justPressed(DOWN_BUTTON)) soundYesNo = true;
  if (buttons.justPressed(UP_BUTTON)) soundYesNo = false;
  if (buttons.justPressed(A_BUTTON | B_BUTTON))
  {
    arduboy.audio.saveOnOff();
    gameState = STATE_MENU_MAIN;
  }
  if (soundYesNo == true) arduboy.audio.on();
  else arduboy.audio.off();
}

void loadPreviousGame()
{
  //all code needed for loading from EEPROM
}

void stateMenuLoadOrNew()
{
  arduboy.drawRect(74 - (loadYesNo * 54), 15, 34, 34, WHITE);
  arduboy.drawRect(73 - (loadYesNo * 54), 14, 36, 36, WHITE);
  sprites.drawSelfMasked(21, 16, icons, 0);
  sprites.drawSelfMasked(75, 16, icons, 1);
  if (buttons.justPressed(RIGHT_BUTTON)) loadYesNo = false;
  if (buttons.justPressed(LEFT_BUTTON)) loadYesNo = true;
  if (buttons.justPressed(B_BUTTON) && !loadYesNo) gameState = STATE_MENU_EASY_NORMAL_HARD;
  if (buttons.justPressed(B_BUTTON) && loadYesNo)
  {
    loadPreviousGame();
    gameState = STATE_GAME_NEXT_LEVEL;
  }
  if (buttons.justPressed(A_BUTTON)) gameState = STATE_MENU_MAIN;
}

void stateMenuEasyNormalHard()
{
  sprites.drawSelfMasked(2, 16, icons, 2);
  sprites.drawSelfMasked(46, 16, icons, 3);
  sprites.drawSelfMasked(90, 16, icons, 4);
  arduboy.drawRect(1+((gameLevel-1) * 44), 15, 34, 34, WHITE);
  arduboy.drawRect(((gameLevel-1) * 44), 14, 36, 36, WHITE);
  if (buttons.justPressed(RIGHT_BUTTON) && (gameLevel < 3)) gameLevel++;
  if (buttons.justPressed(LEFT_BUTTON) && (gameLevel > 1)) gameLevel--;
  if (buttons.justPressed(B_BUTTON))
  {
    level = 0;
    scorePlayer = 0;
    gameState = STATE_GAME_PREPARE_LEVEL;
  }
  if (buttons.justPressed(A_BUTTON)) gameState = STATE_MENU_LOAD_OR_NEW;
}


#endif
