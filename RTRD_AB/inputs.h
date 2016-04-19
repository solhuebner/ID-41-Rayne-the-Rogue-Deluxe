#ifndef INPUTS_H
#define INPUTS_H

#include <Arduino.h>
#include "globals.h"
#include "player.h"

void checkInputs()
{
  if (buttons.pressed(DOWN_BUTTON) && (ryane.y < GAME_BOTTOM))
  {
    ryane.direction = FACING_SOUTH;
    ryane.y++;
  }
  if (buttons.pressed(LEFT_BUTTON) && (ryane.x > GAME_LEFT))
  {
    ryane.direction = FACING_WEST;
    ryane.x--;
  }
  if (buttons.pressed(UP_BUTTON) && (ryane.y > GAME_TOP))
  {
    ryane.direction = FACING_NORTH;
    ryane.y--;
  }
  if (buttons.pressed(RIGHT_BUTTON) && (ryane.x < GAME_RIGHT))
  {
    ryane.direction = FACING_EAST;
    ryane.x++;
  }

  if (buttons.justPressed(A_BUTTON)) gameState = STATE_GAME_PAUSE;
  if (buttons.justPressed(B_BUTTON));
}


#endif
