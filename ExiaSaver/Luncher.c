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


  const char *HOME = "EXIASAVER_HOME";
  char *Home;
  Home = getenv(HOME);
  char* Mode_static = concat(Home, "/mode_static");
  char* Mode_dynamique = concat(Home, "/mode_dynamique");

  if(argc < 2)
  {

  //system("PATH=$PATH:/home/ryuko/ExiaSaver ");
  system("clear");
  srand(time(NULL));
  number =nombre_aleatoire()%3+1;





    switch (number)
    {

    case 1:
      //system("./ExiaSaver_Home/mode_static");//ExiaSaver_Home
      execl(Mode_static,"mode_static",(char *)NULL);
    break;

    case 2:
    historique();
      //system("./ExiaSaver_Home/mode_dynamique");//ExiaSaver_Home
      execl(Mode_dynamique,"mode_dynamique",(char *)NULL);
    break;

    case 3:
      historique();
      printf("Launcher n°%d\n",number);//ExiaSaver_Home
    break;

      }
    }

else if(argc == 2)
  {
      if(strcmp(argv[1], "-stat") == 0)
      {
      menu_stat(argc, argv);
      }
      else
      {
      printf("Obtion not found\n");

      }
  }
else
  {
  printf("To many arguments, kill the arguments\n");
  printf("Path Mode_static : %s", Mode_static);
  printf("Path Mode_dynamique : %s", Mode_dynamique);
  }
  return (0);
}
