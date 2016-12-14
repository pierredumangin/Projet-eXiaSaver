#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "afficheurPBM.c"
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
  int nombre=nombre_aleatoire()%3+1; 

pid_t pid;
pid = fork();
	if(pid==0)
	{printf("je suis le fils");
  
		if(nombre==1)
			{fichier = fopen("chateau.pbm", "r"); // OUVRE LE FICHIER EN LECTURE
			afficheurPBM( nbCaracteres, caractere, i, fichier);
			}
		if(nombre==2)
			{fichier = fopen("fusee.pbm", "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM( nbCaracteres, caractere, i,fichier);
			}
		if(nombre==3)
			{fichier = fopen("damier.pbm", "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM( nbCaracteres, caractere, i,fichier);
			}  

	}


	else
	{printf("je sui le pere" );
	wait(NULL);
	}  
}



int nombre_aleatoire(void){

	return (rand());
}





