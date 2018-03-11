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

void obstacle_fixe()
{
    int obstaclef = 2;

    arene[1][1] = obstaclef;
    arene[2][1] = obstaclef;
    arene[3][1] = obstaclef;
    arene[4][1] = obstaclef;
    arene[1][2] = obstaclef;
    arene[1][3] = obstaclef;
    arene[1][4] = obstaclef;
    arene[1][6] = obstaclef;
    arene[1][7] = obstaclef;
    arene[1][8] = obstaclef;
    arene[1][9] = obstaclef;
    arene[6][1] = obstaclef;
    arene[7][1] = obstaclef;
    arene[8][1] = obstaclef;
    arene[9][1] = obstaclef;
    arene[3][3] = obstaclef;
    arene[3][5] = obstaclef;
    arene[3][6] = obstaclef;
    arene[3][7] = obstaclef;
    arene[5][3] = obstaclef;
    arene[6][3] = obstaclef;
    arene[7][3] = obstaclef;
    arene[5][5] = obstaclef;
    arene[5][7] = obstaclef;
    arene[6][7] = obstaclef;
    arene[7][6] = obstaclef;
    arene[7][5] = obstaclef;
    arene[7][4] = obstaclef;
    arene[2][9] = obstaclef;
    arene[9][2] = obstaclef;
    arene[9][4] = obstaclef;
    arene[9][6] = obstaclef;
    arene[9][7] = obstaclef;
    arene[9][8] = obstaclef;
    arene[8][8] = obstaclef;
    arene[8][9] = obstaclef;
    arene[6][8] = obstaclef;
    arene[6][9] = obstaclef;
    arene[6][10] = obstaclef;
    arene[6][11] = obstaclef;
    arene[4][9] = obstaclef;
    arene[4][10] = obstaclef;
    arene[4][11] = obstaclef;
    arene[1][11] = obstaclef;
    arene[2][11] = obstaclef;
    arene[1][12] = obstaclef;
    arene[1][13] = obstaclef;
    arene[1][14] = obstaclef;
    arene[1][16] = obstaclef;
    arene[1][17] = obstaclef;
    arene[1][18] = obstaclef;
    arene[1][19] = obstaclef;
    arene[2][19] = obstaclef;
    arene[3][19] = obstaclef;
    arene[4][19] = obstaclef;
    arene[6][19] = obstaclef;
    arene[7][19] = obstaclef;
    arene[8][19] = obstaclef;
    arene[9][19] = obstaclef;
    arene[9][18] = obstaclef;
    arene[11][18] = obstaclef;
    arene[11][19] = obstaclef;
    arene[12][19] = obstaclef;
    arene[13][19] = obstaclef;
    arene[14][19] = obstaclef;
    arene[16][19] = obstaclef;
    arene[17][19] = obstaclef;
    arene[18][19] = obstaclef;
    arene[19][19] = obstaclef;
    arene[19][18] = obstaclef;
    arene[19][17] = obstaclef;
    arene[19][16] = obstaclef;
    arene[19][14] = obstaclef;
    arene[19][13] = obstaclef;
    arene[19][12] = obstaclef;
    arene[19][11] = obstaclef;
    arene[18][11] = obstaclef;
    arene[18][9] = obstaclef;
    arene[19][9] = obstaclef;
    arene[19][8] = obstaclef;
    arene[19][7] = obstaclef;
    arene[19][6] = obstaclef;
    arene[19][4] = obstaclef;
    arene[19][3] = obstaclef;
    arene[19][2] = obstaclef;
    arene[19][1] = obstaclef;
    arene[18][1] = obstaclef;
    arene[17][1] = obstaclef;
    arene[16][1] = obstaclef;
    arene[14][1] = obstaclef;
    arene[13][1] = obstaclef;
    arene[12][1] = obstaclef;
    arene[11][1] = obstaclef;
    arene[11][2] = obstaclef;
    arene[8][11] = obstaclef;
    arene[8][12] = obstaclef;
    arene[9][12] = obstaclef;
    arene[11][12] = obstaclef;
    arene[12][12] = obstaclef;
    arene[12][11] = obstaclef;
    arene[12][9] = obstaclef;
    arene[12][8] = obstaclef;
    arene[11][8] = obstaclef;
    arene[3][17] = obstaclef;
    arene[17][17] = obstaclef;
    arene[17][3] = obstaclef;
    arene[17][5] = obstaclef;
    arene[17][6] = obstaclef;
    arene[17][7] = obstaclef;
    arene[10][4] = obstaclef;
    arene[11][4] = obstaclef;
    arene[15][3] = obstaclef;
    arene[14][3] = obstaclef;
    arene[13][3] = obstaclef;
    arene[13][4] = obstaclef;
    arene[13][5] = obstaclef;
    arene[13][6] = obstaclef;
    arene[12][6] = obstaclef;
    arene[11][6] = obstaclef;
    arene[10][6] = obstaclef;
    arene[15][5] = obstaclef;
    arene[15][7] = obstaclef;
    arene[14][7] = obstaclef;
    arene[16][9] = obstaclef;
    arene[16][10] = obstaclef;
    arene[16][11] = obstaclef;
    arene[13][9] = obstaclef;
    arene[14][9] = obstaclef;
    arene[14][10] = obstaclef;
    arene[14][11] = obstaclef;
    arene[14][12] = obstaclef;
    arene[14][13] = obstaclef;
    arene[15][13] = obstaclef;
    arene[17][13] = obstaclef;
    arene[17][14] = obstaclef;
    arene[17][15] = obstaclef;
    arene[15][15] = obstaclef;
    arene[15][17] = obstaclef;
    arene[14][17] = obstaclef;
    arene[13][17] = obstaclef;
    arene[13][16] = obstaclef;
    arene[13][15] = obstaclef;
    arene[13][14] = obstaclef;
    arene[11][13] = obstaclef;
    arene[11][14] = obstaclef;
    arene[10][14] = obstaclef;
    arene[9][14] = obstaclef;
    arene[8][14] = obstaclef;
    arene[11][16] = obstaclef;
    arene[10][16] = obstaclef;
    arene[9][16] = obstaclef;
    arene[5][17] = obstaclef;
    arene[6][17] = obstaclef;
    arene[7][17] = obstaclef;
    arene[7][16] = obstaclef;
    arene[7][15] = obstaclef;
    arene[7][14] = obstaclef;
    arene[5][13] = obstaclef;
    arene[6][13] = obstaclef;
    arene[5][15] = obstaclef;
    arene[3][15] = obstaclef;
    arene[3][14] = obstaclef;
    arene[3][13] = obstaclef;
    arene[7][11] = obstaclef;
}

void placer_ia()
{
    c = 0;
    int z = 0;
    int v = 1;

    while(c < IAMAX)
    {
        switch(z)
        {
            case 0:
                while (v == 1)
                {
                    x = rand() % 2;

                    if(x == 1)
                    {
                        x = 20;
                    }

                    y = rand() % 21;

                    if(arene[x][y] == 0)
                    {
                        arene[x][y] = c + 5;
                        v = 0;
                    }
                    else
                    {
                        v = 1;
                    }
                }
                z++;
                break;

            case 1:
                while (v == 1)
                {
                    y = rand() % 2;

                    if(y == 1)
                    {
                        y = 20;
                    }

                    x = rand() % 21;

                    if(arene[x][y] == 0)
                    {
                        arene[x][y] = c + 5;
                        v = 0;
                    }
                    else
                    {
                        v = 1;
                    }
                }
                z--;
                break;

            default:
                break;
        }
        tab_coor_ia[c] = arene[x][y];
        v = 1;
        c++;
    }
}
