#include <time.h>
#include <stdio.h>
#include <stdlib.h>


struct tm instant;
int decouperheures(struct tm instant);
int dizaineheure = 0;
int uniteheure = 0;
int dizaineminutes = 0;
int uniteminutes = 0;
int dizainesecondes = 0;
int unitesecondes = 0;
int valeuractuelle = 0;
int main(void){


  time_t secondes;

  time(&secondes);
  instant=*localtime(&secondes);

  //printf("%d:%d:%d \n", instant. , instant.tm_min, instant.tm_sec);
  //sleep(1);

  decouperheures(instant);
  int i=0;
  int j = 0;

  for (i ; i < 8; i++)
  {
    if (i == 1)
    { valeuractuelle = dizaineheure;}
    else if (i == 2)
    { valeuractuelle = uniteheure;}
    else if (i == 3)
    { valeuractuelle = 29;}
    else if ( i == 4)
    { valeuractuelle = dizaineminutes;}
    else if ( i == 5)
    { valeuractuelle = uniteminutes;}
    else if (i == 6)
    { valeuractuelle = 29;}
    else if ( i == 7)
    { valeuractuelle = dizainesecondes;}
    else if ( i == 8)
    { valeuractuelle = unitesecondes;}

for (j; j < 8; j++)
{
  FILE* fichier = NULL;
  char  caractere;

  switch(valeuractuelle)
  {
  case 1 :
  fichier = fopen("/home/bantoine/Images/un.pbm", "r" ); //OUVRE LE FICHIER
  break;

  case 2 :
  fichier = fopen("/home/bantoine/Images/deux.pbm", "r" ); //OUVRE LE FICHIER
  break;

  case 3 :
  fichier = fopen("/home/bantoine/Images/trois.pbm", "r" ); //OUVRE LE FICHIER
  break;

  case 4 :
  fichier = fopen("/home/bantoine/Images/quatre.pbm", "r" ); //OUVRE LE FICHIER
  break;

  case 5 :
  fichier = fopen("/home/bantoine/Images/cinq.pbm", "r" ); //OUVRE LE FICHIER
  break;

  case 6 :
  fichier = fopen("/home/bantoine/Images/six.pbm", "r" ); //OUVRE LE FICHIER
  break;

  case 7 :
  fichier = fopen("/home/bantoine/Images/un.pbm", "r" ); //OUVRE LE FICHIER
  break;

  case 8 :
  fichier = fopen("/home/bantoine/Images/huit.pbm", "r" ); //OUVRE LE FICHIER
  break;

  case 9 :
  fichier = fopen("/home/bantoine/Images/neuf.pbm", "r" ); //OUVRE LE FICHIER
  break;

default :
  fichier = fopen("/home/bantoine/Images/doublepoint.pbm", "r" ); //OUVRE LE FICHIER
  break;
  }

if (fichier != NULL){
 //system("clear");
  fseek(fichier, 19, SEEK_SET);

  do{
    caractere = fgetc(fichier);
    if ( caractere == '0')
    {
      caractere = ' ';
    }
    else if ( caractere == ' ')
    {
      caractere = ' ';
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
    }
    printf("%c", caractere);
  }while(caractere != EOF);
  //fclose(fichier);
}
else {

  printf("Le fichier ne peut pas être ouvert \n");

}
fclose (fichier);
}
}
/*printf("Le nombre des unités des heures est %d \n", uniteheure);
printf("Le nombre de dizaine de minutes est %d \n", dizaineminutes);
printf("Le nombre des unités des minutes est %d \n", uniteminutes);
printf("Le nombre de  dizaine de secondes est %d \n", dizainesecondes);
printf("Le nombre des unités des secondes est %d \n", unitesecondes);
*/
return 0;
}

int decouperheures(struct tm instant)
{

dizaineheure = (instant.tm_hour)/10 ;
uniteheure = (instant.tm_hour)-(dizaineheure*10);
dizaineminutes = (instant.tm_min)/10;
uniteminutes = (instant.tm_min)-(dizaineminutes*10);
dizainesecondes = (instant.tm_sec)/10;
unitesecondes = (instant.tm_sec)-(dizainesecondes*10);

}
