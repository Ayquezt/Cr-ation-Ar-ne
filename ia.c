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

void recherche_ia_action()
{
    for(x=0; x<SIZE; x++)
    {
        for(y=0; y<SIZE; y++)
        {
            if(arene[x][y] == tab_coor_ia[c])
            {
                break;
            }
        }

        if(arene[x][y] == tab_coor_ia[c])
        {
            break;
        }
    }

    if(y > 20)
    {
        x++;
        y = 0;
    }
}

void recherche_ia_interaction()
{
    for(xi=0; xi<SIZE; xi++)
    {
        for(yi=0; yi<SIZE; yi++)
        {
            if(arene[xi][yi] == r)
            {
                break;
            }
        }

        if(arene[xi][yi] == r)
        {
            break;
        }
    }

    if(yi > 20)
    {
        xi++;
        yi = 0;
    }

    for(ci = 0; ci<IAMAX; ci++)
    {
        if(tab_coor_ia[ci] == r)
        {
            break;
        }
    }
}
