/* ************************************************************************** */
/*                               ___      __ __	  ____                        */
/*                              |    \  /   |    |    |                       */
/*       Launcher.c             |__   \/    |    |____|                       */
/*                              |     /\    |    |    |                       */
/*                              |___ /  \ __|__  |    |                       */
/*       By: FlorianXeifer <florian.pfeifer@viacesi.fr>                       */
/*                                                                            */
/*       Created: 2016/12/08 by FlorianXeifer                                 */
/*       Updated: 2016/12/15 by FlorianXeifer                                 */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include "random.h"
#include "historique.h"
#include "menu_stat.h"
#include "concat.h"


int main(int argc, char *argv[]){


  const char *HOME = "EXIASAVER_HOME";                       //Création des string contenant les variables d'environnement pour les exécutable avec la fonction concat.c
  char *Home;                                                //
  Home = getenv(HOME);                                       //     Pour créer les variables d'environnement aller dans la console, passer en root tapez ce qui suit:
  char* Mode_static = concat(Home, "/type_statique");          //           export leNomDeLaVariable=unevaleur ; puis export leNomDeLaVariable=leCheminDuDossier ;
  char* Mode_dynamique = concat(Home, "/type_dynamiquev3");    //   puis echo 'export leNomDeLaVariable=leCheminDuDossier' >> /home/user/.bashrc pour la rendre permanente!
  char* Mode_interactive = concat(Home, "/mode_interactive");//
  //char* Mode_static = concat("/home/ryuko/ExiaSaver", "/type_statique");
  int number;
  int nombre=0;
  int repeat=0;

  if(argc < 2)                       //Si le nombre de caractère est inférieure a 2
  {

  //system("PATH=$PATH:/home/ryuko/ExiaSaver ");
  system("clear");
  srand(time(NULL));
  number =nombre_aleatoire()%3+1 ;    //génération aléatoire du nombre qui déféni quel programme ce lance


    switch (number)
    {

    case 1:                           //lancement du programme écran satic
    /*srand(time(NULL));
    for(repeat=0; repeat<2; repeat++){
  nombre=nombre_aleatoire()%6+1;
}*/

    //system("./type_statique");
    execl(Mode_static,"type_statique",(char *)NULL);


      //printf("1");
    break;

    case 2:                           //lancement du programme écran dynamique
    historique(number, nombre);
    //printf("2");

      //system("./ExiaSaver_Home/mode_dynamique");//ExiaSaver_Home
      execl(Mode_dynamique,"type_dynamiquev3",(char *)NULL);
    break;

    case 3:                            //lancement du programme écran interactive
      historique(number, nombre);
      printf("3");
      printf("Launcher n°%d\n",number);//ExiaSaver_Home
    break;

      }
    }

else if(argc == 2)                     //Si le nombre d'arguments est égale a 2
  {
      if(strcmp(argv[1], "-stat") == 0)//Si le deuxième argument est égale a -stat
      {
      menu_stat(argc, argv);           //Ouvre la fonction qui contient le menu de statistique
      }
      else                             //Si l'argument n'est pas reconnu
      {
      printf("Obtion not found\n");

      }
  }
else                                   //Si le nombre d'arguments est suppérieur a 2
  {
  printf("To many arguments, kill the arguments\n");
  printf("Path Mode_static : %s", Mode_static);
  printf("Path Mode_dynamique : %s", Mode_dynamique);
  }
  //getchar ();
  return (0);
}
