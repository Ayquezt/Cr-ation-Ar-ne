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

void balle()
{
    arene[SIZE/2][SIZE/2] = BALLE;
}

void balle_ia(int act)
{
    switch(act)
    {
        case 1:
            arene[x - 1][y] = tab_coor_ia[c] + 12;
            tab_coor_ia[c] = arene[x - 1][y];
            arene[x][y] = 0;
            break;

        case 2:
            arene[x + 1][y] = tab_coor_ia[c] + 12;
            tab_coor_ia[c] = arene[x + 1][y];
            arene[x][y] = 0;
            break;

        case 3:
            arene[x][y - 1] = tab_coor_ia[c] + 12;
            tab_coor_ia[c] = arene[x][y - 1];
            arene[x][y] = 0;
            break;

        case 4:
            arene[x][y + 1] = tab_coor_ia[c] + 12;
            tab_coor_ia[c] = arene[x][y + 11];
            arene[x][y] = 0;
            break;
    }
}

/*void transfert_balle()
{
    switch(act)
    {
        case 1:
            if(tab_coor_ia[ci] == arene[xi][yi])
            {
                rpl = 0;
                tab_coor_ia[ci] = tab_coor_ia[ci] - 12;
                tab_coor_ia[c] = tab_coor_ia[c] + 12;
                repulse_ia();
            }
            else if(tab_coor_ia[c] == arene[x][y])
            {
                rpl = 1;
                tab_coor_ia[c] = tab_coor_ia[c] - 12;
                tab_coor_ia[ci] = tab_coor_ia[ci] + 12;
                repulse_ia();
            }
            break;

        case 2:
            if(tab_coor_ia[ci] == arene[xi][yi])
            {
                rpl = 0;
                tab_coor_ia[ci] = tab_coor_ia[ci] - 12;
                tab_coor_ia[c] = tab_coor_ia[c] + 12;
                repulse_ia();
            }
            else if(tab_coor_ia[c] == arene[x][y])
            {
                rpl = 1;
                tab_coor_ia[c] = tab_coor_ia[c] - 12;
                tab_coor_ia[ci] = tab_coor_ia[ci] + 12;
                repulse_ia();
            }
            break;

        case 3:
            if(tab_coor_ia[ci] == arene[xi][yi])
            {
                rpl = 0;
                tab_coor_ia[ci] = tab_coor_ia[ci] - 12;
                tab_coor_ia[c] = tab_coor_ia[c] + 12;
                repulse_ia();
            }
            else if(tab_coor_ia[c] == arene[x][y])
            {
                rpl = 1;
                tab_coor_ia[c] = tab_coor_ia[c] - 12;
                tab_coor_ia[ci] = tab_coor_ia[ci] + 12;
                repulse_ia();
            }
            break;

        case 4:
            if(tab_coor_ia[ci] == arene[xi][yi])
            {
                rpl = 0;
                tab_coor_ia[ci] = tab_coor_ia[ci] - 12;
                tab_coor_ia[c] = tab_coor_ia[c] + 12;
                repulse_ia();
            }
            else if(tab_coor_ia[c] == arene[x][y])
            {
                rpl = 1;
                tab_coor_ia[c] = tab_coor_ia[c] - 12;
                tab_coor_ia[ci] = tab_coor_ia[ci] + 12;
                repulse_ia();
            }
            break;
    }
}*/

