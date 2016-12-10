#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAILLE_MAX 1000;
#define LARGEUR_CONSOLE 80
void printf_center (const char* str);

int main(int argc, char *argv[]) 
{
system("clear");
  FILE* fichier = NULL;
  char caractere;
  int longueur = 20;
  int hauteur = 20;
  int nbCaracteres = 2*(longueur*hauteur);
  int i=0;
  int nombre_aleatoire(void);
  srand(time(NULL));
  int nombre=nombre_aleatoire()%3+1; 

  
if(nombre==1){fichier = fopen("chateau.pbm", "r");} // OUVRE LE FICHIER EN LECTURE
if(nombre==2){fichier = fopen("fusee.pbm", "r");}
if(nombre==3){fichier = fopen("damier.pbm", "r");}  

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

  return 0;
}



int nombre_aleatoire(void){

	return (rand());
}








/*void printf_center (const char* caractere)
{
    unsigned int n;
    for (n = 0; n < (LARGEUR_CONSOLE-strlen(str)) / 2; n++)
    {
        putchar(' ');
    }
if (caractere == '0') {caractere = ' ';} // SI IL Y A UN 0 DANS LE FICHIER PBM -> LE REMPLACER PAR UN ESPACE
      else if (caractere == ' ') {caractere = ' ';}
      else if (caractere == '1') {caractere = 'I';} // SI IL Y A UN 1 DANS LE FICHIER PBM -> LE REMPLACER PAR UN X
    printf("%c", caractere);
}*/

// CENTRER : WIDTH / 2 - (LONGUEUR / 2)
