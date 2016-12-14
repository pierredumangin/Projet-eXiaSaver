#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

struct tm instant;
int decouperheures(struct tm instant);
int dizaineheure = 0;
int uniteheure = 0;
int dizaineminutes = 0;
int uniteminutes = 0;
int dizainesecondes = 0;
int unitesecondes = 0;


char tableau[11][30];
void remplirtableau();
int j = 0;
char  caractere;

int main(void){

int u =1;
system("clear");
remplirtableau();

while(u == 1){

  int i = 0;

  time_t secondes;

  time(&secondes);

  instant=*localtime(&secondes);
  int aa;
  int a = 9;
  int b = 15;
  int x = 18;
  int y = 15;



  decouperheures(instant);


///////////////////////////////////////PEMIERE LIGNE



////////////////////////////////// DIZAINES HEURES
gotoxy(a,b);

        for (aa = 0; aa < 6 ; aa++) // on parcours les premiers caractères de l'image correspondant au
        // chiffre des dizaine d'heures
        {
          printf("%c", tableau[dizaineheure][aa]); //on imprime les caractères
        }

printf(" "); // on ajoute un espace pour espacer les chiffres


////////////////////////////////////// UNITES HEURES


        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau[uniteheure][aa]);
        }


      printf(" ");

/////////////////////////////////////////// DOUBLE POINT

      for (aa = 0; aa < 6; aa++)
      {
        printf("%c", tableau[10][aa]);
      }
      printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES


  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau[dizaineminutes][aa]);
  }



printf(" ");
/////////////////////////////////// UNITES MINUTES

//if (uniteminutes == 0)
///{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau[uniteminutes][aa]);
  }



printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 0; aa < 6; aa++)
{
  printf("%c", tableau[10][aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes


  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau[dizainesecondes][aa]);
  }



printf(" ");

///////////////////////////////////////////////// UNITES SECONDES



  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau[unitesecondes][aa]);
  }


printf(" ");


//////////////////////////////////////////// DEUXIEME LIGNE


///////////////////////////////////////////// DIZAINE HEURES
//printf("\n");


gotoxy(a+1,b);

  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau[dizaineheure][aa]);
  }

printf(" ");


////////////////////////////////////// UNITES HEURES


  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau[uniteheure][aa]);
  }


printf(" ");

/////////////////////////////////////////// DOUBLE POINT

for (aa = 6; aa < 12; aa++)
{
  printf("%c", tableau[10][aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES

//if (dizaineminutes == 0)
//{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau[dizaineminutes][aa]);
}


printf(" ");
/////////////////////////////////// UNITES MINUTES

//if (uniteminutes == 0)
//
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau[uniteminutes][aa]);
}


printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 6; aa < 12; aa++)
{
printf("%c", tableau[10][aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes


for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau[dizainesecondes][aa]);
}



printf(" ");

///////////////////////////////////////////////// UNITES SECONDES



for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau[unitesecondes][aa]);
}



printf(" ");


////////////////////////////////////////////////  TROISIEME LIGNE

////////////////////////////////////////////////  DIZAINE HEURES
gotoxy(a+2,b);



  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau[dizaineheure][aa]);
  }

printf(" ");


////////////////////////////////////// UNITES HEURES


  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau[uniteheure][aa]);
  }

printf(" ");

/////////////////////////////////////////// DOUBLE POINT

for (aa = 12; aa < 18; aa++)
{
  printf("%c", tableau[10][aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES


for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau[dizaineminutes][aa]);
}



printf(" ");
/////////////////////////////////// UNITES MINUTES


for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau[uniteminutes][aa]);
}


printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 12; aa < 18; aa++)
{
printf("%c", tableau[10][aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes


for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau[dizainesecondes][aa]);
}


printf(" ");

///////////////////////////////////////////////// UNITES SECONDES



for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau[unitesecondes][aa]);
}



printf(" ");

////////////////////////////////////////// QUATRIEME LIGNE

////////////////////////////////////////////// DIZAINE HEURES

gotoxy(a+3,b);


  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau[dizaineheure][aa]);
  }

printf(" ");


////////////////////////////////////// UNITES HEURES


  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau[uniteheure][aa]);
  }


printf(" ");

/////////////////////////////////////////// DOUBLE POINT

for (aa = 18; aa < 24 ; aa++)
{
  printf("%c", tableau[10][aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES


for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau[dizaineminutes][aa]);
}



printf(" ");
/////////////////////////////////// UNITES MINUTES


for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau[uniteminutes][aa]);
}



printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau[10][aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes


for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau[dizainesecondes][aa]);
}


printf(" ");

///////////////////////////////////////////////// UNITES SECONDES



for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau[unitesecondes][aa]);
}



printf(" ");

///////////////////////////////////////////// CINQUIEME LIGNE

///////////////////////////////// DIZAINES HEURES


gotoxy(a+4,b);
printf(" ");


        for (aa = 25; aa < 30 ; aa++)
        {
          printf("%c", tableau[dizaineheure][aa]);
        }

printf(" ");


////////////////////////////////////// UNITES HEURES


        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau[uniteheure][aa]);
        }


      printf(" ");

/////////////////////////////////////////// DOUBLE POINT

      for (aa = 24; aa < 30 ; aa++)
      {
        printf("%c", tableau[10][aa]);
      }
      printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES


  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau[dizaineminutes][aa]);
  }





printf(" ");
/////////////////////////////////// UNITES MINUTES


  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau[uniteminutes][aa]);
  }



printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 24; aa < 30 ; aa++)
{
  printf("%c", tableau[10][aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes


  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau[dizainesecondes][aa]);
  }




printf(" ");

///////////////////////////////////////////////// UNITES SECONDES



for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau[unitesecondes][aa]);
  }



printf(" ");
int e;
int refreshTime = 1;
gotoxy(x,y);
printf("Cet écran va s'actualiser dans quelques secondes" );

for (e = 0; e < refreshTime; e++)
{
sleep(1);
 gotoxy(x,y+48);

 printf(".\n");
 y++;
}
y=y-refreshTime;
gotoxy(x, y+47);
printf("                                           ");

}


printf("\n");
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






void remplirtableau()
{
///////////////////////////////////////////////////   NUMERO 0
FILE* fichier0 = NULL;
fichier0 = fopen("/home/bantoine/Images/0.pbm", "r") ;
int g =0;
if (fichier0 != NULL){

  fseek(fichier0, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
 g = 0;
  do{

    caractere = fgetc(fichier0);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau[g][j] = caractere;
      j++;
    }
   else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }



  }while(caractere != EOF);
}
  else {

   printf("Le fichier ne peut pas être ouvert \n");

  }
  fclose(fichier0);

//////////////////////////////////////////   NUMERO 1
  g++;
  FILE* fichier1 = NULL;
  fichier1 = fopen("/home/bantoine/Images/1.pbm", "r") ;
  if (fichier1 != NULL){

    fseek(fichier1, 18, SEEK_SET);
  //  gotoxy(a,b);
   j = 0;
    do{

      caractere = fgetc(fichier1);
      if ( caractere == '0')
      {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
      }
     else if ( caractere == ' ')
      {
        caractere = ' ';
        tableau[g][j] = caractere;
        j++;
      }
      else if ( caractere == '1')
      {
        caractere = 'X';
        tableau[g][j] = caractere;
        j++;
      }
      else if ( caractere == '\n')
      {
        caractere = ' ';
        tableau[g][j] = caractere;
        j++;

      }



    }while(caractere != EOF);
  }
    else {

    printf("Le fichier ne peut pas être ouvert \n");

    }
fclose(fichier1);
////////////////////////////////////////////////////////// NUMERO 2

g++;
FILE* fichier2 = NULL;
fichier2 = fopen("/home/bantoine/Images/2.pbm", "r") ;
if (fichier2 != NULL){

  fseek(fichier2, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier2);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }



  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }
fclose(fichier2);
 ///////////////////////////////////////////////////// NUMERO 3
g++;
 FILE* fichier3 = NULL;
 fichier3 = fopen("/home/bantoine/Images/3.pbm", "r") ;
 if (fichier3 != NULL){

   fseek(fichier3, 18, SEEK_SET);

  j = 0;
   do{

     caractere = fgetc(fichier3);
     if ( caractere == '0')
     {
     caractere = ' ';
     tableau[g][j] = caractere;
     j++;
     }
    else if ( caractere == ' ')
     {
       caractere = ' ';
       tableau[g][j] = caractere;
       j++;
     }
     else if ( caractere == '1')
     {
       caractere = 'X';
       tableau[g][j] = caractere;
       j++;
     }
     else if ( caractere == '\n')
     {
       caractere = ' ';
       tableau[g][j] = caractere;
       j++;

     }


   }while(caractere != EOF);
 }
   else {

     printf("Le fichier ne peut pas être ouvert \n");

   }
fclose(fichier3);
///////////////////////////////////////////////////////// NUMERO 4
g++;
FILE* fichier4 = NULL;
fichier4 = fopen("/home/bantoine/Images/4.pbm", "r") ;
if (fichier4 != NULL){

  fseek(fichier4, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier4);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }



  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }

fclose(fichier4);
//////////////////////////////////////////////////////// NUMERO 5
g++;
FILE* fichier5 = NULL;
fichier5 = fopen("/home/bantoine/Images/5.pbm", "r") ;
if (fichier5 != NULL){

  fseek(fichier5, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier5);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
    tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }


  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }
fclose(fichier5);
/////////////////////////////////////////// NUMERO 6
g++;
FILE* fichier6 = NULL;
fichier6 = fopen("/home/bantoine/Images/6.pbm", "r") ;
if (fichier6 != NULL){

  fseek(fichier6, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier6);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }


  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }
fclose(fichier6);

//////////////////////////////////////////////// Numero 7
g++;
FILE* fichier7 = NULL;
fichier7 = fopen("/home/bantoine/Images/7.pbm", "r") ;
if (fichier7 != NULL){

  fseek(fichier7, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier7);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }



  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }
fclose(fichier7);
///////////////////////////////////////////////////////// NUMERO 8
g++;
FILE* fichier8 = NULL;
fichier8 = fopen("/home/bantoine/Images/8.pbm", "r") ;
if (fichier8 != NULL){

  fseek(fichier8, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier8);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }



  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }
fclose(fichier8);
////////////////////////////////////////////// NUMERO 9


g++;
FILE* fichier9 = NULL;
fichier9 = fopen("/home/bantoine/Images/9.pbm", "r") ;
if (fichier9 != NULL){

  fseek(fichier9, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier9);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau[g][j] = caractere;
      j++;
    }
   else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }



  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }
fclose(fichier9);
///////////////////////////////////////////////////////////////////////// DOUBLE POINT

g = 10;
FILE* fichier10 = NULL;
fichier10 = fopen("/home/bantoine/Images/11.pbm", "r") ;
if (fichier10 != NULL){

  fseek(fichier10, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier10);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau[g][j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau[g][j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau[g][j] = caractere;
      j++;

    }



  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }

fclose (fichier10);
}
