#include <stdio.h>
#include <stdlib.h>
#include "action.h"
#include "arene.h"
#include "balle.h"
#include "debut.h"
#include "ia.h"
#include "interaction.h"
#include "jeu.h"
#include "verfication.h"
#include "utilitaire.h"

void pause()
{
    system("pause");
}

void clearconsole()
{
    system("cls");
}

void affichage_jeu(int t)
{
    printf("Tour: %d\n", t);
}
