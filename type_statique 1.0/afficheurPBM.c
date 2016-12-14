#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>






int afficheurPBM(int nbCaracteres,char caractere,int i,FILE* fichier)
{
int taile[2];


if (fichier != NULL) { // SI L'IMAGE EST BIEN RECUE
		fseek (fichier, 2, SEEK_SET);
		fscanf(fichier, "%d %d", &taile[0], &taile[1]);
		printf("%d , %d\n", taile[0], taile[1]);		
   		nbCaracteres = taile[0]*taile[1];
    fseek (fichier, 8, SEEK_SET); // SKIP LES PREMIERS ELEMENTS POUR ALLER A L'IMAGE 0/1
    while (i<nbCaracteres) { // LONGUEUR DE L'IMAGE
      caractere = fgetc(fichier); // AFFECTE LA LIGNE DANS CHAINE
      if (caractere == '0') {caractere = ' ';} // SI IL Y A UN 0 DANS LE FICHIER PBM -> LE REMPLACER PAR UN ESPACE
      else if (caractere == ' ') {caractere = ' ';}
      else if (caractere == '1') {caractere = 'X';} // SI IL Y A UN 1 DANS LE FICHIER PBM -> LE REMPLACER PAR UN X
      printf ("%c", caractere); // AFFICHE LA LIGNE
      i++;
    }

    fclose(fichier);
  }
  else { // SI L'IMAGE N'EST PAS RECUE
    printf("Le fichier ne peut pas être ouvert\n");
  }

  return 0;
}
