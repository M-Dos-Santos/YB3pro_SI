/*
 * caracter.h
 *
 *  Created on: 22 janv. 2020
 *      Author: max
 */


#ifndef CARACTER_H_
#define CARACTER_H_

#include <stdint.h>
#include "vt100.h"
#include "serial.h"

#define CAR_HEIGTH (3)
#define CAR_WIDTH (5)
#define INVADER (0)
#define INIT_INVADER_MIN_Y (2)
#define INIT_INVADER_MIN_X (10)
#define INIT_INVADER_MAX_Y (20)
#define INIT_INVADER_MAX_X (71)

/*Création d'un typedef en cas de changement de valeurs de mes variables communes character*/
typedef uint8_t scaling;

void setMap(int8_t car[3][5], int8_t *word, uint8_t y, uint8_t xmin,
		uint8_t xmax);

void test(void);

void caracter_init(const scaling caracter);
void taste(uint8_t x, uint8_t y, uint8_t s);





#endif /* CARACTER_H_ */
