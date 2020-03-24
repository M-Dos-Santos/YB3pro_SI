/*
 * hero_shoot.c
 *
 *  Created on: 4 mars 2020
 *      Author: max
 */

#include "hero_shoot.h"

void h_shoot(uint8_t h_x, uint8_t h_y, uint8_t s, uint8_t p, int8_t touch) {
	uint8_t x, y;

	while (touch != PAUSE) {
		touch = serial_get_last_char();
		if (touch == ESPACE) {
			vt100_move(x = h_x, y = (h_y - 2));
			serial_putchar(s);
			/*for (y = h_y; y > 1; y--) {
			serial_putchar(p);
			vt100_move(x, y);
			serial_putchar(s);
			 }*/
		}
		else {
			/*Nothing To Do*/
		}
	}
}

