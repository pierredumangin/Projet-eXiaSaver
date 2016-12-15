#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "afficheurPBM.h"
#include <sys/wait.h>


#define TAILLE_MAX 1000;
#define LARGEUR_CONSOLE 80
void printf_center (const char* str);

int main(int argc, char *argv[]) 
{
system("clear");
  FILE* fichier = NULL;
  char caractere;
  int nbCaracteres;
  int i=0;
  int nombre_aleatoire(void);
  srand(time(NULL));
  int nombre=nombre_aleatoire()%6+1; 
  char commande[256];
  *commande = 0;




fichier = (FILE *)malloc(sizeof(FILE));
pid_t pid;
pid = fork();
	if(pid == 0)
	{
  
		if(nombre==1)
			{system("clear");
			fichier = fopen("chateau.pbm", "r"); // OUVRE LE FICHIER EN LECTURE
			afficheurPBM(   fichier);
			}
		if(nombre==2)
			{system("clear");
			fichier = fopen("fusee.pbm", "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
			}
		if(nombre==3)
			{system("clear");
			fichier = fopen("damier.pbm", "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
			}  
		if(nombre==4)
			{system("clear");
			fichier = fopen("groot.pbm", "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
			}  
		if(nombre==5)
			{system("clear");
			fichier = fopen("poro.pbm", "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
			}  
		if(nombre==6)
			{system("clear");
			fichier = fopen("triforce.pbm", "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
			}   














	}


	else
	{
	wait(NULL);
	getchar();
	}  

return 0;
}



int nombre_aleatoire(void){

	return (rand());
}





