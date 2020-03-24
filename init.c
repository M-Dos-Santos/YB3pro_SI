/*
 * init.c
 *
 *  Created on: 27 janv. 2020
 *      Author: max
 */

#include "serial.h"
#include "vt100.h"
#include "init.h"

/*Simple initialisation, on initialise la vitesse de communication et nettoie l'écran*/
void init(void) {
	serial_init(115200);
//	push_button_init(); //(Je voulais essayer de lancer le jeu en appuyant sur le bouton)
	vt100_clear_screen();
}
