/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Launcher.c                                      __       __ __	          */
/*                                                  |    \  /   |       /\    */
/*   By: FlorianXeifer <florian.pfeifer@viacesi.fr> |__   \/    |      /  \   */
/*                                                  |     /\    |     /____\  */
/*   Created: 2016/12/08 by FlorianXeifer           |__  /  \ __|__  /      \ */
/*   Updated: 2016/12/14 by FlorianXeifer                                     */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include "random.h"
#include "historique.c"
#include "menu_stat.c"
#include "concat.c"


int main(int argc, char *argv[]){


  const char *HOME = "EXIASAVER_HOME";                       //Création des string contenant les variables d'environnement pour les exécutable avec la fonction concat.c
  char *Home;                                                //
  Home = getenv(HOME);                                       //     Pour créer les variables d'environnement aller dans la console, passer en root tapez ce qui suit:
  char* Mode_static = concat(Home, "/mode_static");          //           export leNomDeLaVariable=unevaleur ; puis export leNomDeLaVariable=leCheminDuDossier ;
  char* Mode_dynamique = concat(Home, "/mode_dynamique");    //   puis echo 'export leNomDeLaVariable=leCheminDuDossier' >> /home/user/.bashrc pour la rendre permanente!
  char* Mode_interactive = concat(Home, "/mode_interactive");//


  if(argc < 2)                       //Si le nombre de caractère est inférieure a 2
  {

  //system("PATH=$PATH:/home/ryuko/ExiaSaver ");
  system("clear");
  srand(time(NULL));
  number =nombre_aleatoire()%3+1 ;    //génération aléatoire du nombre qui déféni quel programme ce lance


    switch (number)
    {

    case 1:                           //lancement du programme écran satic
      execl(Mode_static,"mode_static",(char *)NULL);
    break;

    case 2:                           //lancement du programme écran dynamique
    historique();
      //system("./ExiaSaver_Home/mode_dynamique");//ExiaSaver_Home
      execl(Mode_dynamique,"mode_dynamique",(char *)NULL);
    break;

    case 3:                            //lancement du programme écran interactive
      historique();
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
      else                             //Si l'argument n'est pas reconue
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
  getchar ();
  return (0);
}
