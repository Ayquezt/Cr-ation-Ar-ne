/*#include <stdio.h>
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

void interaction_ia()
{
    switch(act)
    {
        case 1:
            r = arene[x - 1][y];
            recherche_ia_interaction();
            if(arene[x - 1][y] == tab_coor_ia[ci])
            {
                choc();
            }
            else if(arene[x - 1][y] == r || arene[x][y] == tab_coor_ia[c])
            {
                transfert_balle();
            }
            break;

        case 2:
            r = arene[x + 1][y];
            recherche_ia_interaction();
            if(arene[x + 1][y] == tab_coor_ia[ci])
            {
                choc();
            }
            else if(arene[x + 1][y] == tab_coor_ia[ci] || arene[x][y] == tab_coor_ia[c])
            {
                transfert_balle();
            }
            break;

        case 3:
            r = arene[x][y - 1];
            recherche_ia_interaction();
            if(arene[x][y - 1] == tab_coor_ia[ci])
            {
                choc();
            }
            else if(arene[x][y - 1] == tab_coor_ia[ci] || arene[x][y] == tab_coor_ia[c])
            {
                transfert_balle();
            }
            break;

        case 4:
            r = arene[x][y + 1];
            recherche_ia_interaction();
            if(arene[x][y + 1] == tab_coor_ia[ci])
            {
                choc();
            }
            else if(arene[x][y + 1] == tab_coor_ia[ci] || arene[x][y] == tab_coor_ia[c])
            {
                transfert_balle();
            }
            break;
    }
}*/
