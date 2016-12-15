#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))    //permet de placer le curseur dans le terminal
#include "concat.c"

struct tm instant; // structure qui contiendra les valeurs des heures, minutes secondes
int decouperheures(struct tm instant); // structure qui va stocker dans les valeurs suivantes les valeurs des dizaines d'heures quelques part
int dizaineheure = 0;
int uniteheure = 0;
int dizaineminutes = 0;
int uniteminutes = 0;
int dizainesecondes = 0;
int unitesecondes = 0;
char tableau[11][30];  // tableau qui contient tout les tableaux contenant les caractères des chiffres

int j = 0;
char caractere;  // char qui va parcourir les fichiers PBM


int main(){


  const char *PBM2 = "EXIASAVER2_PBM"; // création du tableau de char contenant le nom de la variable d'envirronement
  char *PBm2;   // création du tableau de char qui va contenir le nom de la variable d'envirronement
  PBm2 = getenv(PBM2);  //affectation à PBm2 du contenu de PBM2



int u =1; // permet de faire uen boucle infinie
system("clear");  // nettoie la console
remplirtableau(PBm2); // remplit les lignes des tableaux avec le contenu des PBM

while(u == 1){  // boucle infinie



  time_t secondes;  // création de la variable secondes, de type time_t

  time(&secondes);   // affectation à secondes du nombres de secondes écoulées depuis le 1er janvier 1970

  instant=*localtime(&secondes);  // remplissage de la structure tm instant avec les données contenues dans secondes et converties grâce à localtime()


  int aa;       // compteur permettant de parcourir les tableaux
  int a = 9;    // position initiale du curseur quand on commence à afficher les chiffres
  int b = 14;
  int x = 18;   // position initiale du curseur quand on affiche que l'écran va s'actualiser
  int y = 15;

  decouperheures(instant);  // affecte aux valeurs précédemment citées les valeurs des dizaines d'heures etc


///////////////////////////////////////PEMIERE LIGNE

////////////////////////////////// DIZAINES HEURES
gotoxy(a,b);     // positionne le curseur dans le terminal

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
//fonction(int a;int b; int dizainesecondes);
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

        for (aa = 24; aa < 30 ; aa++)
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


///////////////////////////////////////////////////////// FIN DE L IMPRESSION DE L HEURE

int e;   // compteur
int refreshTime = 10;   // nombre de secondes entre chaque rafraichissement
gotoxy(x,y);            //  on place le curseur à cette position
printf("Cet écran va s'actualiser dans quelques secondes" );

for (e = 0; e < refreshTime; e++)  // on imprime un point toutes les secondes
{
sleep(1);
 gotoxy(x,y+48);

 printf(".\n");
 y++;  // on incrémente d'un les abscisses afin de placer un point à la droite du précédent
}
y=y-refreshTime;  // on replace le curseur à la fin de "cet écran..."
gotoxy(x, y+47);
printf("                                           ");


}

printf("\n");


return 0;

}

int decouperheures(struct tm instant) // remplit les différentes variables utilisées pour afficher l'heure
{

dizaineheure = (instant.tm_hour)/10 ;
uniteheure = (instant.tm_hour)-(dizaineheure*10);
dizaineminutes = (instant.tm_min)/10;
uniteminutes = (instant.tm_min)-(dizaineminutes*10);
dizainesecondes = (instant.tm_sec)/10;
unitesecondes = (instant.tm_sec)-(dizainesecondes*10);

}

remplirtableau(char* PBm2)
{

  // complète chaque char avec la variable d'envirronement + le chemin vers les différentes images
  char* Pbm0 = concat(PBm2, "/0.pbm");
  char* Pbm1 = concat(PBm2, "/1.pbm");
  char* Pbm2 = concat(PBm2, "/2.pbm");
  char* Pbm3 = concat(PBm2, "/3.pbm");
  char* Pbm4 = concat(PBm2, "/4.pbm");
  char* Pbm5 = concat(PBm2, "/5.pbm");
  char* Pbm6 = concat(PBm2, "/6.pbm");
  char* Pbm7 = concat(PBm2, "/7.pbm");
  char* Pbm8 = concat(PBm2, "/8.pbm");
  char* Pbm9 = concat(PBm2, "/9.pbm");
  char* Pbmpoint = concat(PBm2, "/10.pbm");

// complète le tableau à deux dimensions afin que les lignes contiennent les caracteres qui composent les chiffres
///////////////////////////////////////////////////   NUMERO 0
FILE* fichier0 = NULL;  // initialise le pointeur fichier0 à NULL

fichier0 = fopen(Pbm0, "r") ; // ouvre le fichier

int g; //  variable qui permet de se déplacer entres les différentes lignes
if (fichier0 != NULL){        // on vérifie que le fichier a été ouvert


  fseek(fichier0, 18, SEEK_SET); // on se place au 18eme caractere afin de ne pas lire les dimensions de l'image et commencer directement à la série de 0 et de 1

 j = 0;   // on initialise la colonne à 0
 g = 0;  // on initialise la ligne à 0 pour remplir la première ligne du tableau, ici avec le chiffre 0
  do{

    caractere = fgetc(fichier0); // on replit le char caractere avec le caractere lu dans le fichier
    if ( caractere == '0')  // si le caractère est un 0,
    {

    tableau[g][j] = ' ';  // on place un espace dans le tableau
    j++; // on passe à la colonne suivante
    }
   else if ( caractere == ' ')  // si le caractère est un espace
    {

      tableau[g][j] = ' '; // on place un espace dans le tableau
      j++;
    }
    else if ( caractere == '1')  // si le caractère est un 1
    {

      tableau[g][j] = 'X';  // on place un X dans le tableau
      j++;
    }
   else if ( caractere == '\n')  // si on a un retour à la ligne,
    {

      tableau[g][j] = ' '; // on place un espace dans le tableau
      j++;

    }
  }while(caractere != EOF);   // on parcourt le fichier jusqu'à sa fin
}
  else {

   printf("Le fichier ne peut pas être ouvert \n"); // si le fichier n'a pas pu être ouvert, on affiche le message d'erreur

  }
  fclose(fichier0);  // on ferme le fichier ouvert précédemment

//////////////////////////////////////////   NUMERO 1
  g++; // on change de ligne

  // on répète l'opération précédemment faite pour chaque chiffre
  FILE* fichier1 = NULL;
  fichier1 = fopen(Pbm1, "r") ;
  if (fichier1 != NULL){

    fseek(fichier1, 18, SEEK_SET);

   j = 0;
    do{

      caractere = fgetc(fichier1);
      if ( caractere == '0')
      {

      tableau[g][j] = ' ';
      j++;
      }
     else if ( caractere == ' ')
      {

        tableau[g][j] = ' ';
        j++;
      }
      else if ( caractere == '1')
      {

        tableau[g][j] = 'X';
        j++;
      }
     else if ( caractere == '\n')
      {

        tableau[g][j] = ' ';
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
fichier2 = fopen(Pbm2, "r") ;
if (fichier2 != NULL){

  fseek(fichier2, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier2);
    if ( caractere == '0')
    {

    tableau[g][j] = ' ';
    j++;
    }
   else if ( caractere == ' ')
    {

      tableau[g][j] = ' ';
      j++;
    }
    else if ( caractere == '1')
    {

      tableau[g][j] = 'X';
      j++;
    }
   else if ( caractere == '\n')
    {

      tableau[g][j] = ' ';
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
 fichier3 = fopen(Pbm3, "r") ;
 if (fichier3 != NULL){

   fseek(fichier3, 18, SEEK_SET);

  j = 0;
   do{

     caractere = fgetc(fichier3);
     if ( caractere == '0')
     {

     tableau[g][j] = ' ';
     j++;
     }
    else if ( caractere == ' ')
     {

       tableau[g][j] = ' ';
       j++;
     }
     else if ( caractere == '1')
     {

       tableau[g][j] = 'X';
       j++;
     }
    else if ( caractere == '\n')
     {

       tableau[g][j] = ' ';
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
fichier4 = fopen(Pbm4, "r") ;
if (fichier4 != NULL){

  fseek(fichier4, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier4);
    if ( caractere == '0')
    {

    tableau[g][j] = ' ';
    j++;
    }
   else if ( caractere == ' ')
    {

      tableau[g][j] = ' ';
      j++;
    }
    else if ( caractere == '1')
    {

      tableau[g][j] = 'X';
      j++;
    }
   else if ( caractere == '\n')
    {

      tableau[g][j] = ' ';
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
fichier5 = fopen(Pbm5, "r") ;
if (fichier5 != NULL){

  fseek(fichier5, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier5);
    if ( caractere == '0')
    {

    tableau[g][j] = ' ';
    j++;
    }
   else if ( caractere == ' ')
    {

      tableau[g][j] = ' ';
      j++;
    }
    else if ( caractere == '1')
    {

      tableau[g][j] = 'X';
      j++;
    }
   else if ( caractere == '\n')
    {

      tableau[g][j] = ' ';
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
fichier6 = fopen(Pbm6, "r") ;
if (fichier6 != NULL){

  fseek(fichier6, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier6);
    if ( caractere == '0')
    {
    tableau[g][j] = ' ';
    j++;
    }
   else if ( caractere == ' ')
    {
      tableau[g][j] = ' ';
      j++;
    }
    else if ( caractere == '1')
    {
      tableau[g][j] = 'X';
      j++;
    }
   else if ( caractere == '\n')
    {
      tableau[g][j] = ' ';
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
fichier7 = fopen(Pbm7, "r") ;
if (fichier7 != NULL){

  fseek(fichier7, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier7);
    if ( caractere == '0')
    {

    tableau[g][j] = ' ';
    j++;
    }
   else if ( caractere == ' ')
    {

      tableau[g][j] = ' ';
      j++;
    }
    else if ( caractere == '1')
    {

      tableau[g][j] = 'X';
      j++;
    }
   else if ( caractere == '\n')
    {

      tableau[g][j] = ' ';
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
fichier8 = fopen(Pbm8, "r") ;
if (fichier8 != NULL){

  fseek(fichier8, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier8);
    if ( caractere == '0')
    {

    tableau[g][j] = ' ';
    j++;
    }
   else if ( caractere == ' ')
    {

      tableau[g][j] = ' ';
      j++;
    }
    else if ( caractere == '1')
    {

      tableau[g][j] = 'X';
      j++;
    }
   else if ( caractere == '\n')
    {

      tableau[g][j] = ' ';
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
fichier9 = fopen(Pbm9, "r") ;
if (fichier9 != NULL){

  fseek(fichier9, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier9);
    if ( caractere == '0')
    {

    tableau[g][j] = ' ';
    j++;
    }
   else if ( caractere == ' ')
    {

      tableau[g][j] = ' ';
      j++;
    }
    else if ( caractere == '1')
    {

      tableau[g][j] = 'X';
      j++;
    }
   else if ( caractere == '\n')
    {

      tableau[g][j] = ' ';
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
fichier10 = fopen(Pbmpoint, "r") ;
if (fichier10 != NULL){

  fseek(fichier10, 18, SEEK_SET);

 j = 0;
  do{

    caractere = fgetc(fichier10);
    if ( caractere == '0')
    {

    tableau[g][j] = ' ';
    j++;
    }
   else if ( caractere == ' ')
    {

      tableau[g][j] = ' ';
      j++;
    }
    else if ( caractere == '1')
    {

      tableau[g][j] = 'X';
      j++;
    }
   else if ( caractere == '\n')
    {

      tableau[g][j] = ' ';
      j++;

    }
  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }

fclose (fichier10);
}
