///On définie la taille de l'arène
#define SIZE 21

///On définie le nombre d'ia qui joue
#define IAMAX 12

///On définie le nombre de tour qui seront joués
#define TOURMAX 120

///On donne une valeur à la BALLE
#define BALLE 4

int x, y, xi, yi, c, ci, r, act, rpl;

///Création de l'arène
int arene[SIZE][SIZE];

///Création du tableau des ia
int tab_coor_ia[IAMAX];

///Création du tableau des actions des ia par tours
int tab_ia[IAMAX];
