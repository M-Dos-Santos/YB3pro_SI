/*
 * hero_move.h
 *
 *  Created on: 4 mars 2020
 *      Author: max
 */

#ifndef HERO_MOVE_H_
#define HERO_MOVE_H_
#include <stdint.h>
#include "vt100.h"
#include "serial.h"

#define ESPACE (32)
#define LEFT (0x71)
#define RIGHT (0x64)
#define PAUSE (p)

void h_move(uint8_t x, uint8_t y, uint8_t s, uint8_t w, uint8_t p, int8_t touch);

#endif /* HERO_MOVE_H_ */
