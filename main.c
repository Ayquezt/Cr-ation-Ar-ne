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

int main()
{
    tab_ia[4] = 1;
    balle();
    obstacle_fixe();
    placer_ia();
    affichage_arene();
    jeu();
    return 0;
}
