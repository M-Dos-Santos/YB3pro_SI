/*Projet Space Invader*/
//Séquence d'échappement VT100


//Initialiser les variables :
/* Personnage, charactères, positions, tailles, variables (santé, tirs, pts)*/
// |-V-| \-V-\ /-V-/  |-Y-|
//                      U  
typedef struct character {
    char caracter="0";
    char laser ="0";
    char explosion ="#X#";
}

char world[][];
char player = '^-|-^';
char playerLaser = '^';
char enemy = '|-V-|';
char enemyShielded = '|-O-|';
char enemyLaser = 'U';
char explosion = '#X#';

int score = 0;
int victory = 1;
int laserReady = 1;
int enemyReady = 0;


//La fenêtre :
/*Dimensions, format, messages visibiles (t.sleep pour un affichage "dynamique")*/

//Le monde :
/*Initialisation, début de la partie;

Actualisation, mouvements;

Contrôle du joueur...

*/

