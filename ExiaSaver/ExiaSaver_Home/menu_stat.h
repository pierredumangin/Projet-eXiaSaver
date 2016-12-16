/* ************************************************************************** */
/*                               ___      __ __	  ____                        */
/*                              |    \  /   |    |    |                       */
/*       menu_stat.c            |__   \/    |    |____|                       */
/*                              |     /\    |    |    |                       */
/*                              |___ /  \ __|__  |    |                       */
/*       By: FlorianXeifer <florian.pfeifer@viacesi.fr>                       */
/*                                                                            */
/*       Created: 2016/12/13 by FlorianXeifer                                 */
/*       Updated: 2016/12/15 by FlorianXeifer                                 */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include "tri.c"

int menu_stat(int argc, char *argv[])
{

  FILE *f;

  /*double result1;
  double result2;
  int result3 = 0;*/
  float nombre1=0;
  float nombre2=0;
  float nombre3=0;
  float image1=0;
  float image2=0;
  float image3=0;
  float image4=0;
  float image5=0;
  float image6=0;

  int choix3;
  int choix2;
  int imagenum;
  char line[5000];
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
     //while (strcmp(commande, "\n") != 0)//Temps que la touche entrer n'est pas prècer
     	//{

    system("clear");

      printf("/* ************************************************************************** */");
      printf("/*         ___      __ __   ____     ____   ____           ____  ____         */");
      printf("/*        |    \\  /   |    |    |   |      |    | \\      /|     |    |        */");
      printf("/*        |__   \\/    |    |____|   |____  |____|  \\    / |___  |____|        */");
      printf("/*        |     /\\    |    |    |        | |    |   \\  /  |     |   \\         */");
      printf("/*        |___ /  \\ __|__  |    |    ____| |    |    \\/   |____ |    \\        */");
      printf("/*           ____  __ __  ____  __ __ __ __ ____ __ __ __ __  _____           */");
      printf("/*          |        |   |    |   |     |  |       |     |   |                */");
      printf("/*          |____    |   |____|   |     |  |____   |     |   |                */");
      printf("/*               |   |   |    |   |     |       |  |     |   |                */");
      printf("/*           ____|   |   |    |   |   __|__ ____|  |   __|__ |_____           */");
      printf("/*                                                                            */");
      printf("/* ************************************************************************** */");
      printf("Choisissez le menu:\n1-Les probabilités\n2-Historique d'éxécution\n3-Effacer l'historique\n4-Quitter\n");//affichage menu

scanf("%d", &choix);
//printf("Choix : %d\n", choix);
                    //Le choix du menu


      switch(choix)
      {
        case 1://ouverture du menu des probabilité

        system("clear");

        printf("/* ************************************************************************** */");
        printf("/*           ____  __ __  ____  __ __ __ __ ____ __ __ __ __  _____           */");
        printf("/*          |        |   |    |   |     |  |       |     |   |                */");
        printf("/*          |____    |   |____|   |     |  |____   |     |   |                */");
        printf("/*               |   |   |    |   |     |       |  |     |   |                */");
        printf("/*           ____|   |   |    |   |   __|__ ____|  |   __|__ |_____           */");
        printf("/*                                                                            */");
        printf("/* ************************************************************************** */");


          printf("Choix : %d\n", choix);
          if ((f = fopen ("Historique.txt","r")) == NULL)//ouverture du fichier Historique.txt
          return EXIT_FAILURE;




          float allLignes;               //
          while ((ret2 = getc(f)) != EOF){ //Attribue le nombre de ligne du fichier a la variable allLignes
            if (ret2 == '\n')              //
                ++allLignes;               //
              }


printf("/* ************************************************************************** */\n");
              printf("Le nombre d'èxécution est à %.0f\n", allLignes);
              printf("Choisissez les statistique à afficher :\n1-Statistique des programmes\n2-Statistique des images\n");
              //printf("%d\n", all);

              rewind(f);//revenir au début du fichier



              int* all = NULL;                          //
              all = malloc(allLignes * sizeof(int));    //Attribue la valeur de allLignes a all en taille de tableau dynamique

              if (all == NULL)                          //
              {                                         //Renvoi une erreur si la taille du tableau n'est pas allouer
                printf("Fatal error!!");                //
                exit(0);                                //
              }

              int* allimages = NULL;
              allimages = malloc(allLignes * sizeof(int));

              if (allimages == NULL)                          //
              {                                         //Renvoi une erreur si la taille du tableau n'est pas allouer
                printf("Fatal error!!");                //
                exit(0);                                //
              }

              char** linetab=malloc (allLignes*sizeof(char*));
              for (int i =0; i < allLignes; i++)
              {
                linetab[i]=malloc(500*sizeof(char));

              }

              for (i = 0 ; i < allLignes-1 ; i++)         //
              {                                         //Lit le fichier ligne par ligne et remplis le tableau
                //printf("i%d=", i);
                fscanf(f, "%i | %i | %24c", &all[i], &allimages[i], line);               //
                //printf("%d ", all[i]);
                //printf(" %d \n", nombre1);
                if (all[i] == 1){nombre1++;}
                if (all[i] == 2){nombre2++;}
                if (all[i] == 3){nombre3++;}
sprintf(linetab[i], "%i | %i | %s", all[i], allimages[i], line);
                if (allimages[i] == 1){image1++;}
                if (allimages[i] == 2){image2++;}
                if (allimages[i] == 3){image3++;}
                if (allimages[i] == 4){image4++;}
                if (allimages[i] == 5){image5++;}
                if (allimages[i] == 6){image6++;}
              }

              /*for(int i=0; i<allLignes-1; i++){
                int x;
                int y;
                char txt[5000];
                sscanf(linetab[i], "%i | %i | %s", &x, &y, txt);
                if(x==1){printf("%s\n", linetab[i]);}
              }
              printf("\n");
              for(int i=0; i<allLignes-1; i++){
                int x;
                int y;
                char txt[5000];
                sscanf(linetab[i], "%i | %i | %s", &x, &y, txt);
                if(x==2){printf("%s\n", linetab[i]);}
              }
              printf("\n");
              for(int i=0; i<allLignes-1; i++){
                int x;
                int y;
                char txt[5000];
                sscanf(linetab[i], "%i | %i | %s", &x, &y, txt);
                if(x==3){printf("%s\n", linetab[i]);}
              }*/

                scanf("%d", &choix2);
          switch(choix2){
                    case 1:
system("clear");
                    printf("/* ************************************************************************** */");
                    printf("/*           ____  __ __  ____  __ __ __ __ ____ __ __ __ __  _____           */");
                    printf("/*          |        |   |    |   |     |  |       |     |   |                */");
                    printf("/*          |____    |   |____|   |     |  |____   |     |   |                */");
                    printf("/*               |   |   |    |   |     |       |  |     |   |                */");
                    printf("/*           ____|   |   |    |   |   __|__ ____|  |   __|__ |_____           */");
                    printf("/*                                                                            */");
                    printf("/* ************************************************************************** */");

              printf("/* ************************************************************************** */");
              printf("Mode static se lance %.0f fois \n", nombre1);
              printf("Mode dynamique se lance %.0f fois \n", nombre2);
              printf("Mode interactive se lance %.0f fois \n", nombre3);

printf("/* ************************************************************************** */");
              float result1 = nombre1/(allLignes-1)*100;//nombre1+allLignes/100;
              printf("Mode static à %.2f%% de probabilités  ", result1);
                                //
                printf("\n");

                float result2 = nombre2/(allLignes-1)*100;//nombre1+allLignes/100;
                printf("Mode dynamique à %.2f%% de probabilités  ", result2);                      //
                  printf("\n");

                  float result3 = nombre3/(allLignes-1)*100;//nombre1+allLignes/100;
                  printf("Mode interactive à %.2f%% de probabilités  ", result3);                      //
                    printf("\n");
                                        //
                      break;

                      case 2:
                      system("clear");
                      printf("/* ************************************************************************** */");
                      printf("/*           ____  __ __  ____  __ __ __ __ ____ __ __ __ __  _____           */");
                      printf("/*          |        |   |    |   |     |  |       |     |   |                */");
                      printf("/*          |____    |   |____|   |     |  |____   |     |   |                */");
                      printf("/*               |   |   |    |   |     |       |  |     |   |                */");
                      printf("/*           ____|   |   |    |   |   __|__ ____|  |   __|__ |_____           */");
                      printf("/*                                                                            */");
                      printf("/* ************************************************************************** */");

                      printf("/* ************************************************************************** */");
                      printf("L'image 1 s'affiche %.0f fois \n", image1);
                      printf("L'image 2 s'affiche %.0f fois \n", image2);
                      printf("L'image 3 s'affiche %.0f fois \n", image3);
                      printf("L'image 4 s'affiche %.0f fois \n", image4);
                      printf("L'image 5 s'affiche %.0f fois \n", image5);
                      printf("L'image 6 s'affiche %.0f fois \n", image6);


                      printf("/* ************************************************************************** */");
                        //printf("nombre1=%.0f", nombre1);
                                    float resultimage1 = image1/nombre1*100;//nombre1+allLignes/100;
                                    printf("Image 1 à %.2f%% de probabilités  ", resultimage1);
                                      printf("\n");

                                      float resultimage2 = image2/nombre1*100;//nombre1+allLignes/100;
                                      printf("Image 2 à %.2f%% de probabilités  ", resultimage2);                      //
                                        printf("\n");

                                        float resultimage3 = image3/nombre1*100;//nombre1+allLignes/100;
                                        printf("Image 3 à %.2f%% de probabilités  ", resultimage3);                      //
                                          printf("\n");


                                          float resultimage4 = image4/nombre1*100;//nombre1+allLignes/100;
                                          printf("Image 4 à %.2f%% de probabilités  ", resultimage4);                      //
                                            printf("\n");

                                            float resultimage5 = image5/nombre1*100;//nombre1+allLignes/100;
                                            printf("Image 5 à %.2f%% de probabilités  ", resultimage5);                      //
                                              printf("\n");

                                              float resultimage6 = image6/nombre1*100;//nombre1+allLignes/100;
                                              printf("Image 6 à %.2f%% de probabilités  ", resultimage6);                      //
                                                printf("\n");

                        break;
}




              /*printf("Les nombre sont :\n");
              for (i = 0 ; i < allLignes ; i++)         //
              {                                         //Affiche le contenu du tableau all
                    printf (" %.0f | %.0f | %24c\n", all[i], allimages[i] ,line);                //
              }                                         //
              printf("\n");


              tri_insertion(all, i);                    //Tri le tableau

              printf("Les nombre apres le tri sont:\n");
              for (i = 0 ; i < allLignes ; i++)         //
              {                                         //Affiche le contenu du tableau après qu'il soit trié
                  printf("%.0f | %.0f", all[i]), allimages[i];                //
              }                                         //
              printf("\n");*/
getchar();
        break;


        case 2:


printf("1 non tri\n2 tri");
scanf("%d", &choix3);
 switch(choix3){


   case 1:
              if ((f = fopen ("Historique.txt","r")) == NULL)
              return EXIT_FAILURE;


                             //

              while ((ret = fscanf (f,"%i | %i | %24c", &allin, &imagenum, line)) != EOF && ret != 0)
              {
                printf (" %i | %i | %s\n", allin, imagenum ,line);
              }

              rewind(f);

              while ((ret2 = getc(f)) != EOF){ //Attribue le nombre de ligne du fichier a la variable allLignes
                if (ret2 == '\n')              //
                    ++allLignes;               //
                  }


                printf("Le nombre d'èxécution est à %.0f\n", allLignes);
                getchar();
                break;

                case 2:
                if ((f = fopen ("Historique.txt","r")) == NULL)//ouverture du fichier Historique.txt
                return EXIT_FAILURE;
                                            float allLignes;
                                            while ((ret2 = getc(f)) != EOF){ //Attribue le nombre de ligne du fichier a la variable allLignes
                                              if (ret2 == '\n')              //
                                                  ++allLignes;               //
                                                }

                                                rewind(f);

                                            int* all = NULL;                          //
                                            all = malloc(allLignes * sizeof(int));    //Attribue la valeur de allLignes a all en taille de tableau dynamique

                                            if (all == NULL)                          //
                                            {                                         //Renvoi une erreur si la taille du tableau n'est pas allouer
                                              printf("Fatal error!!");                //
                                              exit(0);                                //
                                            }

                                            int* allimages = NULL;
                                            allimages = malloc(allLignes * sizeof(int));

                                            if (allimages == NULL)                          //
                                            {                                         //Renvoi une erreur si la taille du tableau n'est pas allouer
                                              printf("Fatal error!!");                //
                                              exit(0);                                //
                                            }

                                            char** linetab=malloc (allLignes*sizeof(char*));
                                            for (int i =0; i < allLignes; i++)
                                            {
                                              linetab[i]=malloc(500*sizeof(char));

                                            }

                                            for (i = 0 ; i < allLignes-1 ; i++)         //
                                            {                                         //Lit le fichier ligne par ligne et remplis le tableau
                                              //printf("i%d=", i);
                                              fscanf(f, "%i | %i | %24c", &all[i], &allimages[i], line);               //
                                              //printf("%d ", all[i]);
                                              //printf(" %d \n", nombre1);
                                              if (all[i] == 1){nombre1++;}
                                              if (all[i] == 2){nombre2++;}
                                              if (all[i] == 3){nombre3++;}
                                          sprintf(linetab[i], "%i | %i | %s", all[i], allimages[i], line);

                                            }

                                            for(int i=0; i<allLignes-1; i++){
                                              int x;
                                              int y;
                                              char txt[5000];
                                              sscanf(linetab[i], "%i | %i | %s", &x, &y, txt);
                                              if(x==1){printf("%s\n", linetab[i]);}
                                            }
                                            printf("\n");
                                            for(int i=0; i<allLignes-1; i++){
                                              int x;
                                              int y;
                                              char txt[5000];
                                              sscanf(linetab[i], "%i | %i | %s", &x, &y, txt);
                                              if(x==2){printf("%s\n", linetab[i]);}
                                            }
                                            printf("\n");
                                            for(int i=0; i<allLignes-1; i++){
                                              int x;
                                              int y;
                                              char txt[5000];
                                              sscanf(linetab[i], "%i | %i | %s", &x, &y, txt);
                                              if(x==3){printf("%s\n", linetab[i]);}
                                            }

                              break;
              }
        break;

        case 3:

        if ((f = fopen ("Historique.txt","w")) != NULL)//ouverture du fichier Historique.txt
        return 0;

        case 4:

          exit(0);

        break;

      }
    //fgets(commande, 256, stdin);
    //}


    return 0;
}
