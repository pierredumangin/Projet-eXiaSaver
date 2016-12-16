#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "afficheurPBM.h"
#include <sys/wait.h>
#include "concat.h"
#include "random.h"
#include "historique.h"
//#include "ExiaSaver/historique.c"


#define TAILLE_MAX 1000;
#define LARGEUR_CONSOLE 80


int main(int argc, char *argv[])
{
system("clear");
  FILE* fichier = NULL;
  char caractere;
  int nbCaracteres;
  char commande[256];
  *commande = 0;
  //int nombre_aleatoire(void);
  int number = 0;
  int nombre;
  int repeat=0;
  srand(time(NULL));
  for(repeat=0; repeat<2; repeat++){
  nombre=nombre_aleatoire()%6+1;
}



  /*const char *ORIGINE = "EXIASAVER";
  char *Origine;
  Origine = getenv(ORIGINE);
  char* Historique = concat(Origine, "/historique.c");
  printf("Historique = %s", Historique);*/

  const char *PBM = "EXIASAVER1_PBM";
  char *Pbm;
  Pbm = getenv(PBM);
  char* Pbm1 = concat(Pbm, "/chateau.pbm");
  char* Pbm2 = concat(Pbm, "/fusee.pbm");
  char* Pbm3 = concat(Pbm, "/damier.pbm");
  char* Pbm4 = concat(Pbm, "/groot.pbm");
  char* Pbm5 = concat(Pbm, "/poro.pbm");
  char* Pbm6 = concat(Pbm, "/triforce.pbm");
//printf("Pbm1 = %s", Pbm1);

fichier = (FILE *)malloc(sizeof(FILE));//CREE UN ESPACE MEMOIRE DE LA TAILLE DE "FILE"
pid_t pid;
pid = fork();//DUPLIQUER LE PROCESSUS APPELANT
	if(pid == 0)//VERIFICATION DU PROCESSUS FILS
	{

		if(nombre==1)

			{system("clear");
			fichier = fopen(Pbm1, "r"); // OUVRE LE FICHIER EN LECTURE
			afficheurPBM(   fichier);
      int number = 1;
      historique(number, nombre);

			}
		if(nombre==2)

			{system("clear");
			fichier = fopen(Pbm2, "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
      int number = 1;
      historique(number, nombre);

			}
		if(nombre==3)
			{system("clear");
			fichier = fopen(Pbm3, "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
        int number = 1;
      historique(number, nombre);

			}
		if(nombre==4)

			{system("clear");
			fichier = fopen(Pbm4, "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
        int number = 1;
      historique(number, nombre);

			}
		if(nombre==5)

			{system("clear");
			fichier = fopen(Pbm5, "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
        int number = 1;
      historique(number, nombre);

			}
		if(nombre==6)

			{system("clear");
			fichier = fopen(Pbm6, "r");// OUVRE LE FICHIER EN LECTURE
			afficheurPBM(  fichier);
        int number = 1;
      historique(number, nombre);

			}














	}


	else//VERIFICATION DU PRCESSUS PERE
	{
	wait(NULL);//ATTENTE DE L'EXECUTION DU FILS
printf("père");
	getchar();// TERMINER LE PROCESSUS AVEC LA TOUCHE ENTRER
	}

return nombre;
}



/*int nombre_aleatoire(void)//GENERATION D'UN NOBRE ALEATOIRE
{

	return (rand());
}*/
