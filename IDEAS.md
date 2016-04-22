# ideas on Rayne the Rogue
Description
Rayne wants to be wealthy, but the dragons have all the gold. Rayne ponders and decides to take all of the dragons treausures.Navigate Rayne from cave to cave taking the dragons treasures, but avoid their attacks.

Objective:
Run around the cave and collect the treasures, avoid traps and dragon attacks and get to the exit

## SPRITES
| **SPRITE** | **SIZE** | **FRAMES** | **DIRECTIONS** | **Description** |
| ---        | ---      | ---        | ---       | ---             |
| **Player** | 16x16 | 4 | 4 | Rayne  |
| **Enemy** | ? | 4 | 1 | Dragon  |

## POWER-UP LIST (8) / ITEMS - activate on contact for a limited time
| **SPRITE** | **SIZE** | **FRAMES** | **TIMER** | **Description** |
| ---        | ---      | ---        | ---       | ---             |
| **magnet** | 12x12 | 1 | | player attracts all good treasure |
| **Fire resistance** | 12x12 | 1 | yes | absorb fire damage |
| **Cold resistance** | 12x12 | 1 | yes | absorb cold damage |
| **Invisibility** | 12x12 | 1 | yes | temporarily can not be seen by the dragons |
| **Luck** | 12x12 | 1 | yes | increase odds of finding valuable treasure in the next cave |
| **HP** | 12x12 | 1 | | live longer |
|  | 12x12 | 1 | |  |
|  | 12x12 | 1 | |  |

## POWER-DOWN LIST (8) / TRAPS - activate on contact
| **SPRITE** | **SIZE** | **FRAMES** | **TIMER** | **Description** |
| ---        | ---      | ---        | ---       | ---             |
| **poison trap** | 12x12 | 1 | yes | player walks slower |
| **stones** | 12x12 | 1 | | have no value, no room for treasure |
| **pit** | 12x12 | 1 | | you take a fall and lose treasure |
| **cold trap** | 12x12 | 1 | yes | temporarily frozen in place  |
| **spike trap** | 12x12 | 1 | yes | 1 point of damage |
| **fire trap** | 12x12 | 1 | yes | fireball shoots in from top of screen toward player, does 1 fire damage on hit  |
| | 12x12 | 1 | |  |
|  | 12x12 | 1 | |   |

## ABILITIES LIST (4) - permanent boosts to a player - can be purchased between games
| **SPRITE** | **SIZE** | **FRAMES** | **LEVELS** | **Description** |
| ---        | ---      | ---        | ---       | ---             |
| **Charisma** | 12x12 | 1 | 8 | increase all treasure value by a percent - 25%-50%-75%-100%-125%-150%-175% |
| **Heart** | 12x12 | 1 | 8 | amount of damage player can take before death -2-3-4-5-6-7-8 |
| **Resistance** | 12x12 | 1 | 8 | resistances last longer - 50%-100%-150%-200%-250%-300%-350% |
| **Sense & Disarm** | 12x12 | 1 | 8 | see and disarm traps - odds 20-30-40-50-60-70-80% - touch trap to disarm/activate |

## TREASURE LIST
| **SPRITE** | **SIZE** | **FRAMES** | **TIMER** | **Description** |
| ---        | ---      | ---        | ---       | ---             |
| **coin** | 12x12 | 1 | |  |
| **chest** | 12x12 | 1 | |  |
| **candleabra** | 12x12 | 1 | |  |
| **harp** | 12x12 | 1 | |  |
| **lamp** | 12x12 | 1 | |  |
| **diamond** | 12x12 | 1 | |  |

Dragons - can have 1-3 heads
-Young Ice Dragon 
--shoots ice bolt - fast speed - line - 16x2 - does 1 cold damage
-Young Fire Dragon 
-- shoots fireball - normal speed - ball - 8x8 - does 1 fire damage
-Ice Dragon 
--shoots ice bolt - fast speed - line - 16x2 - does 2 cold damage
-- breathes cone of cold - slow speed - expanding cone, half the screen - freezes player for 1 second
-Fire Dragon 
-- shoots fireball - normal speed - ball - 8x8 - does 1 fire damage
-- breathes cone of fire - slow speed - expanding cone, half the screen - does 2 fire damage
