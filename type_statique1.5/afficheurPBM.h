#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define gotoxy(x,y)printf("\033[%d;%dH",(x),(y))




int afficheurPBM(FILE* fichier)
{
int taile[2];
int X=5;
int Y=30;
char caractere;
int nbCaracteres;
int marge;
int i = 0;
int c = 0 ;
if (fichier != NULL) { // SI L'IMAGE EST BIEN RECUE
		fseek (fichier, 3, SEEK_SET);

		fscanf(fichier, "%d %d", &taile[0], &taile[1]);
		//printf("%d , %d\n", taile[0], taile[1]);
		
   		nbCaracteres = taile[0]*taile[1];
		//printf("%d\n",nbCaracteres);

		marge = (80 - taile[1])/2;
		//printf("la marge est de %d \n",marge);

    fseek (fichier, 8, SEEK_SET); // SKIP LES PREMIERS ELEMENTS POUR ALLER A L'IMAGE 0/1
    while (caractere != EOF) 
	{ // LONGUEUR DE L'IMAGE
      caractere = fgetc(fichier); // AFFECTE LA LIGNE DANS CHAINE
	
		
      if      (caractere == '0') {caractere = ' ';} // SI IL Y A UN 0 DANS LE FICHIER PBM -> LE REMPLACER PAR UN ESPACE
      else if (caractere == ' ') {caractere = ' ';}
      else if (caractere == '1') {caractere = 'X';} // SI IL Y A UN 1 DANS LE FICHIER PBM -> LE REMPLACER PAR UN X
	
	
      printf ("%c", caractere); // AFFICHE LA LIGNE
      if(i == taile[1])
		{
		 i = 0;
		}
		if(i == 0){for(c=0;c<marge;c++){printf(" ");}}
	i++;
	}

  fclose(fichier);
    
  }
  else { // SI L'IMAGE N'EST PAS RECUE
    printf("Le fichier ne peut pas être ouvert\n");
  }

  return 0;
}
