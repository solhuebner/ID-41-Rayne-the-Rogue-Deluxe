#ifndef PLAYER_H
#define PLAYER_H

#include <Arduino.h>
#include "globals.h"

byte ryaneFrame = 0;

struct Player
{
  public:
    boolean walking;
    byte direction;
    int x = 20;
    int y = 20;
};

Player ryane;

void drawPlayer()
{
  if (arduboy.everyXFrames(6)) ryaneFrame++;
  if (ryaneFrame > 3 ) ryaneFrame = 0;
  sprites.drawPlusMask(ryane.x, ryane.y, player_plus_mask, ryaneFrame + 4 * ryane.direction);
}

#endif
