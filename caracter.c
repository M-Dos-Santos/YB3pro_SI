/*
 * caracter.c
 *
 *  Created on: 22 janv. 2020
 *      Author: max
 */
#include "caracter.h"




static int8_t chara[CAR_HEIGTH][CAR_WIDTH];


/*Fonction test d'affichage des ennemis*/
void taste(uint8_t x, uint8_t y, uint8_t s) {
	for (y = INIT_INVADER_MIN_Y; y < INIT_INVADER_MAX_Y; y += 1) {
			vt100_move((x = 0), (y));
		for (x = INIT_INVADER_MIN_Y; x < INIT_INVADER_MAX_X; x++) {
				vt100_move(x, y);
				serial_putchar(s);
			}
		vt100_move((x = (INIT_INVADER_MAX_X - 1)), (y += 1));
		for (x = (INIT_INVADER_MAX_X - 1); x >= INIT_INVADER_MIN_X; x--) {
				vt100_move(x, y);
				serial_putchar(s);
			}
		}
}



//Pour initialiser une ligne
void setMap(int8_t car[3][5],
		int8_t *word/*mettre le tableau de caractères*/,
		uint8_t y, uint8_t xmin,
		uint8_t xmax) {
	for (uint8_t i = xmin; i < xmin + sizeof(word); i++) {

		car[y][i] = word[i - xmin];
	}
}

/*Utilisation de la fonction appelée "setMap" pour affichager une chaîne de charactère précréée*/
void test(void) {
	setMap(chara, (int8_t *) "Bon", 2, 1, 4);
	int8_t tab[5];
	//Affiche la ligne
	for (uint8_t i = 0; i < 5; i++) {
		tab[i] = chara[2][i];
	}
	vt100_move(10, 10);

	serial_put(&tab[0]);
}

void caracter_init(const scaling caracter) {
	/*J'ai commencé par cette structure à la création de mon projet, afin de stocker de la même manière tous les charactères*/
	typedef struct {
		scaling *caracter;
		scaling laser;
		scaling explosion;
	} CHARACTER;

	CHARACTER Hero, Invader, Special;
	Hero.caracter = "-o-";
	Hero.laser = 'I';
	Hero.explosion = 'X';
	Invader.caracter = "-V-";
	Invader.laser = 'o';
	Invader.explosion = 'X';
	Special.caracter = "-Y-";
	Special.laser = 'W';
	Special.explosion = 'X';
}





