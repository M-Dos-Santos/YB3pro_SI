/*
 * hero_shoot.h
 *
 *  Created on: 4 mars 2020
 *      Author: max
 */



#ifndef HERO_SHOOT_H_
#define HERO_SHOOT_H_

#include <stdint.h>
#include "serial.h"
#include "vt100.h"

#define PAUSE (p)
#define ESPACE (32)

void h_shoot(uint8_t h_x, uint8_t h_y, uint8_t s,
		uint8_t p, int8_t touch);


#endif /* HERO_SHOOT_H_ */
