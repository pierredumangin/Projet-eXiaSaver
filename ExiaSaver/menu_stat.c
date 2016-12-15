/* ************************************************************************** */
/*                               __       __ __	  _____                       */
/*                              |    \  /   |    |     |                      */
/*       menu_stat.c            |__   \/    |    |_____|                      */
/*                              |     /\    |    |     |                      */
/*                              |__  /  \ __|__  |     |                      */
/*       By: FlorianXeifer <florian.pfeifer@viacesi.fr>                       */
/*                                                                            */
/*       Created: 2016/12/13 by FlorianXeifer                                 */
/*       Updated: 2016/12/14 by FlorianXeifer                                 */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include "tri.c"

int menu_stat(int argc, char *argv[])
{

  FILE *f;
  int nombre1=0;
  int imagenum;
  char line[2000];
  int ret2;
  int ret;
  int choix;
  int* all = NULL;
  int allin = 0;
  int tmp_sum=0;
  int i = 0;
  char commande[256];
  /*all = malloc(allLignes * sizeof(int));
  if (all == NULL)
  {
    exit(0);
  }
   FILE *f;
    int i;

    char commande[256];
    int line = 0;
    int nomb = 3;
    int prog = 0;
    int ret = 0;
    int imagenum = 0;
     int* all = NULL;
     int allLignes = 0;

     all = malloc(allLignes * sizeof(int));*/
     while (strcmp(commande, "\n") != 0)//Temps que la touche entrer n'est pas prècer
     	{

    system("clear");

      printf("Choisissez le menu:\n1-Les probabiliter\n2-Historique d'exécution\n");//affichage menu
      scanf("%d", &choix);              //Le choix du menu
      printf("Choix : %d\n", choix);    //

      switch(choix)
      {
        case 1://ouverture du menu des probabilité

          if ((f = fopen ("Historique.txt","r")) == NULL)//ouverture du fichier Historique.txt
          return EXIT_FAILURE;


          int allLignes = 0;               //
          while ((ret2 = getc(f)) != EOF){ //Attribue le nombre de ligne du fichier a la variable allLignes
            if (ret2 == '\n')              //
                ++allLignes;               //



              }printf("Le nombre de ligne est égal à %d\n", allLignes);
              //printf("%d\n", all);

              rewind(f);//revenir au début du fichier



              int* all = NULL;                          //
              all = malloc(allLignes * sizeof(int));    //Attribue la valeur de allLignes a all en taille de tableau dynamique

              if (all == NULL)                          //
              {                                         //Renvoi une erreur si la taille du tableau n'est pas allouer
                printf("Fatal error!!");                //
                exit(0);                                //
              }

              for (i = 0 ; i < allLignes ; i++)         //
              {                                         //Lit le fichier ligne par ligne et remplis le tableau
                printf("i%d=", i);
                fscanf(f, "%i", &all[i]);               //
                printf("%d ", all[i]);
                printf(" %d \n", nombre1);
                if (all[i] == 1){nombre1++;}

              }
              printf("Nombre de 1 : %d ", nombre1);                          //
                printf("\n");                           //

              printf("Les nombre sont :\n");
              for (i = 0 ; i < allLignes ; i++)         //
              {                                         //Affiche le contenu du tableau all
                  printf("%i ", all[i]);                //
              }                                         //
              printf("\n");

              tri_insertion(all, i);                    //Tri le tableau

              printf("Les nombre apres le tri sont:\n");
              for (i = 0 ; i < allLignes ; i++)         //
              {                                         //Affiche le contenu du tableau après qu'il soit trié
                  printf("%i ", all[i]);                //
              }                                         //
              printf("\n");

        break;


        case 2:

              if ((f = fopen ("Historique.txt","r")) == NULL)
              return EXIT_FAILURE;

              while ((ret = fscanf (f,"%i | %i | %24c", &allin, &imagenum, line)) != EOF && ret != 0)
              {
                printf (" %i | %i | %s\n", allin, imagenum ,line);
              }
        break;

      }
    fgets(commande, 256, stdin);
    }

    return 0;
}
