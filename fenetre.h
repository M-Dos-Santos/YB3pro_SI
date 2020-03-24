/*
 * fenetre.h
 *
 *  Created on: 22 janv. 2020
 *      Author: max
 */

#ifndef FENETRE_H_
#define FENETRE_H_

#include "caracter.h"

#define WIN_WIDTH (80)
#define WIN_HEIGHT (24)
#define BG_WIDTH (4)
#define START_BUTTON (32)

void start_menu(void);
void clear_line(uint8_t xmin, uint8_t xmax, uint8_t ymin, uint8_t ymax);

#endif /* FENETRE_H_ */

