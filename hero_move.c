/*
 * hero_move.c
 *
 *  Created on: 4 mars 2020
 *      Author: max
 */

#include "hero_move.h"
#include "fenetre.h"

/*Meanings :
 * x= position x;
 * y= position y;
 * s= skin;
 * w= weapon;
 * p= dash (trainée);
 * touch= pressed button;
 */

void h_move(uint8_t x, uint8_t y, uint8_t s, uint8_t w, uint8_t p,
		int8_t touch) {
	vt100_move(x, y);
	serial_putchar(s);
	/*w_y=weapon y, la position en y du tir du joueur*/
	uint8_t w_y = y - 1;
	while (touch != PAUSE) {
		touch = serial_get_last_char();
	vt100_move(x, y);
	serial_putchar(s);
		if (touch == RIGHT && x < (VT100_SCREEN_XMAX - 10)) {
			vt100_move(x, y);
		serial_putchar(p);
			x += 1;
		vt100_move(x, y);
		serial_putchar(s);
		}
	else if (touch == LEFT && x > (VT100_SCREEN_XMIN + 9)) {
			vt100_move(x, y);
			serial_putchar(p);
			x -= 1;
			vt100_move(x, y);
			serial_putchar(s);
		}
	else if (touch == ESPACE) {
			vt100_move(x, w_y);
			serial_putchar(w);
			/*if (w_y > 0) {
				vt100_move(x, w_y);
				serial_putchar(p);
				w_y -= 1;
				vt100_move(x, w_y);
				serial_putchar(w);
			 }*/
			for (w_y = (y - 1); w_y > 0; --w_y) {
				vt100_move(x, w_y + 1);
				serial_putchar(p);
				vt100_move(x, w_y);
				serial_putchar(w);
				//clear_line(x, x, 0, w_y);
			}
			vt100_move(x, w_y);
			serial_putchar(p);
		}
	else {
			/*Nothing to do*/

		}

	}


}
