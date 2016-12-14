#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include "random.h"
#include "historique.c"



#define TAILLE_MAX 1000;
#define LARGEUR_CONSOLE 80
void printf_center (const char* str);





int main()
{
  system("clear");
  FILE* fichier = NULL;
  char caractere;
  char commande[256];
  int longueur = 20;
  int hauteur = 20;
  int nbCaracteres = 2*(longueur*hauteur);
  int i=0;
  *commande = 0 ;

  int repeat=0;
  srand(time(NULL));
  for(repeat=0; repeat<2; repeat++){
  nombre=nombre_aleatoire()%3+1;

  //printf("nombre %d\n",nombre);
}

  while (strcmp(commande, "\n") != 0)
  	{

  //int nombre= 2;

if(nombre==1){fichier = fopen("ExiaSaver1_PBM/chateau.pbm", "r");number=1;historique();} // OUVRE LE FICHIER EN LECTURE
else if(nombre==2){fichier = fopen("ExiaSaver1_PBM/fusee.pbm", "r");number=1;historique();}
else if(nombre==3){fichier = fopen("ExiaSaver1_PBM/damier.pbm", "r");number=1;historique();}




  if (fichier != NULL) { // SI L'IMAGE EST BIEN RECUE
    //system("clear"); // EFFACE LE TERMINAL
    fseek (fichier, 14, SEEK_SET); // SKIP LES PREMIERS ELEMENTS POUR ALLER A L'IMAGE 0/1
    while (i<nbCaracteres) { // LONGUEUR DE L'IMAGE
      caractere = fgetc(fichier); // AFFECTE LA LIGNE DANS CHAINE
      if (caractere == '0') {caractere = ' ';} // SI IL Y A UN 0 DANS LE FICHIER PBM -> LE REMPLACER PAR UN ESPACE
      else if (caractere == ' ') {caractere = ' ';}
      else if (caractere == '1') {caractere = 'I';} // SI IL Y A UN 1 DANS LE FICHIER PBM -> LE REMPLACER PAR UN X
      printf ("%c", caractere); // AFFICHE LA LIGNE
      i++;

      }



    fclose(fichier);
    }
    else { // SI L'IMAGE N'EST PAS RECUE
    printf("Le fichier ne peut pas être ouvert\n");
    }
    fgets(commande, 256, stdin);
  }
system("clear");
  //return 0;
}
