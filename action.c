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

void action()
{
    rpl = 1;
    recherche_ia_action();

    switch(act)
    {
        case 0:
            arene[x][y] = tab_coor_ia[c];
            break;

        case 1:
            if(x - 1 < 0)
            {
                kill();
            }
            else if(arene[x - 1][y] == 2)
            {
                arene[x][y] = tab_coor_ia[c];
            }
            else if(arene[x - 1][y] == 4)
            {
                balle_ia();
            }
            else if(arene[x - 1][y] == 0)
            {
                arene[x - 1][y] = tab_coor_ia[c];
                arene[x][y] = 0;
            }
            /*else
            {
                void interaction_ia();
            }*/
            break;

        case 2:
            if(x + 1 > 20)
            {
                kill();
            }
            else if(arene[x + 1][y] == 2)
            {
                arene[x][y] = tab_coor_ia[c];
            }
            else if(arene[x + 1][y] == 4)
            {
                balle_ia();
            }
            else if(arene[x + 1][y] == 0)
            {
                arene[x + 1][y] = tab_coor_ia[c];
                arene[x][y] = 0;
            }
            /*else
            {
                void interaction_ia();
            }*/
            break;

        case 3:
            if(y - 1 < 0)
            {
                kill();
            }
            else if(arene[x][y - 1] == 2)
            {
                arene[x][y] = tab_coor_ia[c];
            }
            else if(arene[x][y - 1] == 4)
            {
                balle_ia();
            }
            else if(arene[x][y - 1] == 0)
            {
                arene[x][y - 1] = tab_coor_ia[c];
                arene[x][y] = 0;

            }
            /*else
            {
                void interaction_ia();
            }*/
            break;

        case 4:
            if(y + 1 > 20)
            {
                kill();
            }
            else if(arene[x][y + 1] == 2)
            {
                arene[x][y] = tab_coor_ia[c];
            }
            else if(arene[x][y + 1] == 4)
            {
                balle_ia();
            }
            else if(arene[x][y + 1] == 0)
            {
                arene[x][y + 1] = tab_coor_ia[c];
                arene[x][y] = 0;

            }
            /*else
            {
                void interaction_ia();
            }*/
            break;

        default:
            break;
    }
}

/*void choc()
{
    switch(act)
    {
        case 1:
            if(arene[xi - 1][yi] == 2 || arene[xi - 2][yi] == 2 || arene[xi - 3][yi] == 2 || xi - 1 < 0 || xi - 2 < 0 || xi - 3 < 0)
            {
                if(arene[xi - 1][yi] == 2 || xi - 1 < 0)
                {
                    if(arene[xi - 1][yi] == 2)
                    {
                        arene[xi][yi] = tab_coor_ia[ci];
                        arene[x][y] = tab_coor_ia[c];
                    }
                    else if(xi - 1 < 0)
                    {
                        kill();
                    }
                }
                else if(arene[xi - 2][yi] == 2 || xi - 2 < 0)
                {
                    if(arene[xi - 2][yi] == 2)
                    {
                        arene[xi - 1][yi] = tab_coor_ia[ci];
                        arene[x - 1][y] = tab_coor_ia[c];
                    }
                    else if(xi - 2 < 0)
                    {
                        kill();
                    }
                }
                else if(arene[xi - 3][yi] == 2 || xi - 3 < 0)
                {
                    if(arene[xi - 3][yi] == 2)
                    {
                        arene[xi - 2][yi] = tab_coor_ia[ci];
                        arene[x - 1][y] = tab_coor_ia[c];
                    }
                    else if(xi - 3 < 0)
                    {
                        kill();
                    }
                }
            }
            else
            {
                arene[xi - 3][yi] = tab_coor_ia[ci];
                arene[x - 1][y] = tab_coor_ia[c];
            }

            if(arene[x + 1][y] == 2 || arene[x + 2][y] == 2 || arene[x + 3][y] == 2 || x + 1 > 20 || x + 2 > 20 || x + 3 > 20)
            {
                if(arene[x + 1][y] == 2 || x + 1 > 20)
                {
                    if(arene[x + 1][y] == 2)
                    {
                        arene[x][y] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(x + 1 > 20)
                    {
                        kill();
                    }
                }
                else if(arene[x + 2][yi] == 2 || x - 2 > 20)
                {
                    if(arene[x + 2][y] == 2)
                    {
                        arene[x + 1][y] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(x + 2 > 20)
                    {
                        kill();
                    }
                }
                else if(arene[x + 3][y] == 2 || x + 3 > 20)
                {
                    if(arene[x + 3][y] == 2)
                    {
                        arene[x + 2][yi] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(x + 3 > 20)
                    {
                        kill();
                    }
                }
            }
            else
            {
                arene[x + 3][y] = tab_coor_ia[c];
                arene[x][y] = 0;
                arene[xi][yi] = tab_coor_ia[ci];
            }
            break;

        case 2:
            if(arene[xi + 1][yi] == 2 || arene[xi + 2][yi] == 2 || arene[xi + 3][yi] == 2 || xi + 1 > 20 || xi + 2 > 20 || xi + 3 > 20)
            {
                if(arene[xi + 1][yi] == 2 || xi + 1 > 20)
                {
                    if(arene[xi + 1][yi] == 2)
                    {
                        arene[xi][yi] = tab_coor_ia[ci];
                        arene[x][y] = tab_coor_ia[c];
                    }
                    else if(xi + 1 > 20)
                    {
                        kill();
                    }
                }
                else if(arene[xi + 2][yi] == 2 || xi + 2 > 20)
                {
                    if(arene[xi + 2][yi] == 2)
                    {
                        arene[xi + 1][yi] = tab_coor_ia[ci];
                        arene[x + 1][y] = tab_coor_ia[c];
                    }
                    else if(xi + 2 > 20)
                    {
                        kill();
                    }
                }
                else if(arene[xi + 3][yi] == 2 || xi + 3 > 20)
                {
                    if(arene[xi + 3][yi] == 2)
                    {
                        arene[xi + 2][yi] = tab_coor_ia[ci];
                        arene[x + 1][y] = tab_coor_ia[c];
                    }
                    else if(xi + 3 > 20)
                    {
                        kill();
                    }
                }
            }
            else
            {
                arene[xi + 3][yi] = tab_coor_ia[ci];
                arene[x + 1][y] = tab_coor_ia[c];
            }

            if(arene[x - 1][y] == 2 || arene[x - 2][y] == 2 || arene[x - 3][y] == 2 || x - 1 < 0 || xi - 2 < 0 || xi - 3 < 0)
            {
                if(arene[x - 1][y] == 2 || x - 1 < 0)
                {
                    if(arene[x - 1][y] == 2)
                    {
                        arene[x][y] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(x - 1 < 0)
                    {
                        kill();
                    }
                }
                else if(arene[x - 2][y] == 2 || x - 2 < 0)
                {
                    if(arene[x - 2][y] == 2)
                    {
                        arene[xi - 1][y] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(x - 2 < 0)
                    {
                        kill();
                    }
                }
                else if(arene[x - 3][y] == 2 || x - 3 < 0)
                {
                    if(arene[x - 3][y] == 2)
                    {
                        arene[x - 2][y] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(x - 3 < 0)
                    {
                        kill();
                    }
                }
            }
            else
            {
                arene[x - 3][y] = tab_coor_ia[c];
                arene[xi][yi] = tab_coor_ia[ci];
            }
            break;

        case 3:
            if(arene[xi][yi - 1] == 2 || arene[xi][yi - 2] == 2 || arene[xi][yi - 3] == 2 || yi - 1 < 0 || yi - 2 < 0 || yi - 3 < 0)
            {
                if(arene[xi][yi - 1] == 2 || yi - 1 < 0)
                {
                    if(arene[xi][yi - 1] == 2)
                    {
                        arene[xi][yi] = tab_coor_ia[ci];
                        arene[x][y] = tab_coor_ia[c];
                    }
                    else if(yi - 1 < 0)
                    {
                        kill();
                    }
                }
                else if(arene[xi][yi - 2] == 2 || yi - 2 < 0)
                {
                    if(arene[xi][yi - 2] == 2)
                    {
                        arene[xi][yi - 1] = tab_coor_ia[ci];
                        arene[x][y - 1] = tab_coor_ia[c];
                    }
                    else if(yi - 2 < 0)
                    {
                        kill();
                    }
                }
                else if(arene[xi][yi - 3] == 2 || yi - 3 < 0)
                {
                    if(arene[xi][yi - 3] == 2)
                    {
                        arene[xi][yi - 2] = tab_coor_ia[ci];
                        arene[x][y - 1] = tab_coor_ia[c];
                    }
                    else if(yi - 3 < 0)
                    {
                        kill();
                    }
                }
            }
            else
            {
                arene[xi][yi - 3] = tab_coor_ia[ci];
                arene[x][y - 1] = tab_coor_ia[c];
            }

            if(arene[x][y + 1] == 2 || arene[x][y + 2] == 2 || arene[x][y + 3] == 2 || y + 1 > 20 || y + 2 > 20 || y + 3 > 20)
            {
                if(arene[x][y + 1] == 2 || y + 1 > 20)
                {
                    if(arene[x][y + 1] == 2)
                    {
                        arene[x][y] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(y + 1 > 20)
                    {
                        kill();
                    }
                }
                else if(arene[x][y + 2] == 2 || y + 2 > 20)
                {
                    if(arene[x][y + 2] == 2)
                    {
                        arene[x][y + 1] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(y + 2 > 20)
                    {
                        kill();
                    }
                }
                else if(arene[x][y + 3] == 2 || y + 3 > 20)
                {
                    if(arene[x][y + 3] == 2)
                    {
                        arene[x][y + 2] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(y + 3 > 20)
                    {
                        kill();
                    }
                }
            }
            else
            {
                arene[x][y + 3] = tab_coor_ia[c];
                arene[xi][yi] = tab_coor_ia[ci];
            }
            break;
        case 4:
            if(arene[xi][yi + 1] == 2 || arene[xi][yi + 2] == 2 || arene[xi][yi + 3] == 2 || yi + 1 > 20 || yi + 2 > 20 || yi + 3 > 20)
            {
                if(arene[xi][yi + 1] == 2 || yi + 1 > 20)
                {
                    if(arene[xi][yi + 1] == 2)
                    {
                        arene[xi][yi] = tab_coor_ia[ci];
                        arene[x][y] = tab_coor_ia[c];
                    }
                    else if(yi + 1 > 20)
                    {
                        kill();
                    }
                }
                else if(arene[xi][yi + 2] == 2 || yi + 2 > 20)
                {
                    if(arene[xi][yi + 2] == 2)
                    {
                        arene[xi][yi + 1] = tab_coor_ia[ci];
                        arene[x][y + 1] = tab_coor_ia[c];
                    }
                    else if(yi + 2 > 20)
                    {
                        kill();
                    }
                }
                else if(arene[xi][yi + 3] ==  2|| yi + 3 > 20)
                {
                    if(arene[xi][yi + 3] == 2)
                    {
                        arene[xi][yi + 2] = tab_coor_ia[ci];
                        arene[x][y + 1] = tab_coor_ia[c];
                    }
                    else if(yi + 3 > 20)
                    {
                        kill();
                    }
                }
            }
            else
            {
                arene[xi][yi + 3] = tab_coor_ia[ci];
                arene[x][y + 1] = tab_coor_ia[c];
            }

            if(arene[x][y - 1] == 2 || arene[x][y - 2] == 2 || arene[x][y - 3] == 2 || y - 1 < 0 || y - 2 < 0 || y - 3 < 0)
            {
                if(arene[x][y - 1] == 2 || y - 1 < 0)
                {
                    if(arene[x][y - 1] == 2)
                    {
                        arene[x][y] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(y - 1 < 0)
                    {
                        kill();
                    }
                }
                else if(arene[x][y - 2] == 2 || y - 2 < 0)
                {
                    if(arene[x][y - 2] == 2)
                    {
                        arene[x][y - 1] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(y - 2 < 0)
                    {
                        kill();
                    }
                }
                else if(arene[x][y - 3] == 2 || y - 3 < 0)
                {
                    if(arene[x][y - 3] == 2)
                    {
                        arene[x][y - 2] = tab_coor_ia[c];
                        arene[xi][yi] = tab_coor_ia[ci];
                    }
                    else if(y - 3 < 0)
                    {
                        kill();
                    }
                }
            }
            else
            {
                arene[x][y - 3] = tab_coor_ia[c];
                arene[xi][yi] = tab_coor_ia[ci];
            }
            break;
    }
}*/
