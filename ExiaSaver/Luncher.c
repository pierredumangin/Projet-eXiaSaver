#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "random.h"
#include "mode_static.c"
#include "mode_dynamique.c"
#include "mode_interactive.c"



//void srand(time(NULL));

//int nombre_aleatoire(void);


int main(void){

  system("cp eco /usr/bin ");
  system("clear");

  srand(time(NULL));
//  printf("%d\n ", nombre_aleatoire()%3+1);

   int number =nombre_aleatoire()%3+1;
  switch (number){

    case 1:
      srand(time(NULL));
      //nombre=nombre_aleatoir()%6+1;
      mode_static();
      //system("./mode_static")
      //printf("1\n");
      //printf("Launcher n°%d\n",number);
      //printf("Nombre %d\n", nombre);
    break;

    case 2:
      mode_dynamique();
      //printf("2\n");
      //printf("Launcher n°%d\n",number);
    break;

    case 3:
      mode_interactive();
      //printf("3\n");
      //printf("Launcher n°%d\n",number);
    break;

  }




  return (0);
}
