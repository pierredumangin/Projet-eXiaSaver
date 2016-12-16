#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>






int afficheurPBM(FILE* fichier)
{
int taile[2];
char caractere;
int nbCaracteres;
int marge,margeH;
int i = 0, c = 0, t = 0, nb = 0;


if (fichier != NULL) { //SI L'IMAGE EST BIEN RECUE
		fseek (fichier, 3, SEEK_SET);//SKIP LES PREMIER CARACTERE

		fscanf(fichier, "%d %d", &taile[0], &taile[1]);// RECUPERATION DES PARAMETRES DE L'IMAGE
   		nbCaracteres = taile[0]*taile[1];//CALCULE DU NOMBRE TOTAL DE CARACTERE

		marge = (80 - taile[1])/2;//CALCULE DU CENTRAGE HORIZONTALE

		margeH = (24 - taile[0])/2;//CALCULE DU CENTRAGE VERTICALE

		for(t=0;t<margeH-1;t++){printf(" \n");}//CENTRAGE VERTICALE

    fseek (fichier, 8, SEEK_SET); //SKIP LES PREMIERS ELEMENTS POUR ALLER AU DEBUT DE L'IMAGE
    while (nb!=nbCaracteres)
	{
      caractere = fgetc(fichier); ////LECTURE DES CARACTERES

      if      (caractere == '0') {caractere = ' ';}//UN 0 DANS LE PBM ->EST REMPLACER PAR ESPACE
      else if (caractere == ' ') {caractere = ' ';}//UN ESPACE DANS LE PBM ->EST REMPLACER PAR ESPACE
      else if (caractere == '1') {caractere = 'X';}//UN 1 DANS LE PBM ->EST REMPLACER PAR UN X


      printf ("%c", caractere); //AFFICHE LE CARACTERE
      if(i == taile[1])						//
		{						//
		 i = 0;						//CENTRAGE HORIZONTALE
		}						//
		if(i == 0){for(c=0;c<marge;c++){printf(" ");}}  //
	i++;
	nb++;
	}

  fclose(fichier);//FERMETURE DU FICHIER APRES LECTURE

  }
  else { // SI L'IMAGE N'EST PAS RECUE
    printf("Le fichier ne peut pas être ouvert\n");
  }

  return 0;
}
