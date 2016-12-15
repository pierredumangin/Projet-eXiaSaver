/* ************************************************************************** */
/*                               __       __ __	  _____                       */
/*                              |    \  /   |    |     |                      */
/*       tri.c                  |__   \/    |    |_____|                      */
/*                              |     /\    |    |     |                      */
/*                              |__  /  \ __|__  |     |                      */
/*       By: FlorianXeifer <florian.pfeifer@viacesi.fr>                       */
/*                                                                            */
/*       Created: 2016/12/14 by FlorianXeifer                                 */
/*       Updated: 2016/12/14 by FlorianXeifer                                 */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void tri_insertion(int tab[], int taille)
{
   int i, j;
   for (i = 1; i < taille; ++i) {//parcour le tableau
       int elem = tab[i];
       for (j = i; j > 0 && tab[j-1] > elem; j--)   //tri le tableau
           tab[j] = tab[j-1];                       //
       tab[j] = elem;
   }
}

/*int main(void)
{
    int i;
    int tableau[10] = {9, 8, 6, 7, 5, 2, 4, 1, 3, 0};

    printf("avant le tri : ");
    for(i = 0; i < 10; i++) printf("%d ", tableau[i]);
    printf("\n");

    tri_insertion(tableau, 10);

    printf("apres le tri : ");
    for(i = 0; i < 10; i++) printf("%d ", tableau[i]);
    printf("\n");

    return 0;
}*/
