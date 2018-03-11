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

void affichage_arene()
{
    printf("\n");

    for (x = 0; x <SIZE*2 +3; x++)
    {
        printf("X");
    }

    printf("\n");

    for (x=0; x<SIZE; x++)
    {
        printf("X ");
        for (y=0; y<SIZE; y++)
        {
            switch(arene[x][y])
            {
                case 0:
                    printf(". ");
                    break;
                case 1:
                    printf("x ");
                    break;
                case 2:
                    printf("O ");
                    break;
                case 4:
                    printf("B ");
                    break;
                case 5:
                    printf("J1");
                    break;
                case 6:
                    printf("J2");
                    break;
                case 7:
                    printf("J3");
                    break;
                case 8:
                    printf("J4");
                    break;
                case 9:
                    printf("J5");
                    break;
                case 10:
                    printf("J6");
                    break;
                case 11:
                    printf("J7");
                    break;
                case 12:
                    printf("J8");
                    break;
                case 13:
                    printf("J9");
                    break;
                case 14:
                    printf("JA");
                    break;
                case 15:
                    printf("JB");
                    break;
                case 16:
                    printf("JC");
                    break;
                case 17:
                    printf("B1");
                    break;
                case 18:
                    printf("B2");
                    break;
                case 19:
                    printf("B3");
                    break;
                case 20:
                    printf("B4");
                    break;
                case 21:
                    printf("B5");
                    break;
                case 22:
                    printf("B6");
                    break;
                case 23:
                    printf("B7");
                    break;
                case 24:
                    printf("B8");
                    break;
                case 25:
                    printf("B9");
                    break;
                case 26:
                    printf("BA");
                    break;
                case 27:
                    printf("BB");
                    break;
                case 28:
                    printf("BC");
                    break;
                default:
                    printf("FF");
                    break;
            }
        }
        printf("X\n");
    }

    for (x = 0; x<SIZE*2+3; x++)
    {
        printf("X");
    }

    printf("\n");
    pause();
    clearconsole();
}

void jeu()
{
    int t = 0;
    c = 0;

    while(t < TOURMAX)
    {
        while(c < IAMAX)
        {
            if(tab_coor_ia[c] != 0)
            {
                act = tab_ia[c];
                action();
                c++;
            }
            else
            {
                c++;
            }
        }
        c = 0;
        void affichage_jeu(t);
        affichage_arene();
        t++;
    }
}
