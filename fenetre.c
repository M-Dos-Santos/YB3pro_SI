/*
 * fenetre.c
 *
 *  Created on: 22 janv. 2020
 *      Author: max
 */
#include "fenetre.h"
#include "serial.h"
#include "vt100.h"



void start_menu(void) {
	char start_game;
	/*Boucles de design de l'écran*/
	for (int i = 3; i < (WIN_WIDTH - 2); i = i + 4) {
		vt100_move(i, 0);
		serial_puts("Io-");
		vt100_move(i, WIN_HEIGHT);
		serial_puts("-oI");
	}
	for (int i = 2; i < WIN_HEIGHT; i++) {
		vt100_move(0, i);
		serial_puts("[");
		vt100_move(WIN_WIDTH, i);
		serial_puts("]");
	}

	/*En attente de lancement de partie*/
	while (start_game != 32) {

		vt100_move(35, 2);
		serial_puts("INVADERS");
		vt100_move(30, 3);
		serial_puts("An easy unsolved game");
		vt100_move(29, 22);
		serial_puts("Press Space to begin");
		start_game = serial_get_last_char();

		if (start_game == 32) {

			vt100_clear_screen();
//		test();
		}
	}
}

/*Fonction en prévision de devoir clear une ligne entière lors du déplacement des ennemis*/
void clear_line(uint8_t xmin, uint8_t xmax, uint8_t ymin, uint8_t ymax) {
	static uint8_t x, y;
	for ((x = xmin); (x = xmax); x++) {
		vt100_move(x, y);
		serial_putchar(' ');
		for ((y = ymax); (y = ymin); y--) {
			vt100_move(x, y);
			serial_putchar(' ');

		}
	}
}
