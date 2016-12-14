#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

struct tm instant;
int decouperheures(struct tm instant);
int dizaineheure = 0;
int uniteheure = 0;
int dizaineminutes = 0;
int uniteminutes = 0;
int dizainesecondes = 0;
int unitesecondes = 0;
int valeuractuelle = 0;
char tableau[30];
char tableau1[30];
char tableau2[30];
char tableau3[30];
char tableau4[30];
char tableau5[30];
char tableau6[30];
char tableau7[30];
char tableau8[30];
char tableau9[30];
char tableau0[30];
char tableau10[30];
void remplirtableau();
int j = 0;
char  caractere;

int main(void){

  system("clear");
  int i = 0;

  time_t secondes;

  time(&secondes);

  instant=*localtime(&secondes);
  int aa;
  int a = 9;
  int b = 15;
  int x = 14;
  int y = 15;
  //printf("%d:%d:%d \n", instant.tm_hour , instant.tm_min, instant.tm_sec);
  //sleep(1);

  decouperheures(instant);
  remplirtableau();

///////////////////////////////////////PEMIERE LIGNE


gotoxy(a,b);
////////////////////////////////// DIZAINES HEURES
      if (dizaineheure == 0)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau0[aa]);
        }
      }
     else if (dizaineheure == 1)
        {
          for (aa = 0; aa < 6 ; aa++)
          {
          printf("%c", tableau1[aa]);
          }
        }
      else if (dizaineheure == 2)
        {
          for (aa = 0; aa < 6 ; aa++)
          {
          printf("%c", tableau2[aa]);
          }
        }
printf(" ");


////////////////////////////////////// UNITES HEURES

      if (uniteheure == 0)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau0[aa]);
        }

      }
      else if (uniteheure == 1)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau1[aa]);
        }

      }
      else if (uniteheure == 2)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau2[aa]);
        }

      }
      else if (uniteheure == 3)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau3[aa]);
        }

      }
      else if (uniteheure == 4)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau4[aa]);
        }

      }
      else if (uniteheure == 5)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau5[aa]);
        }

      }
      else if (uniteheure == 6)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau6[aa]);
        }

      }
      else if (uniteheure == 7)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau7[aa]);
        }

      }
      else if (uniteheure == 8)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau8[aa]);
        }

      }
      else if (uniteheure == 9)
      {
        for (aa = 0; aa < 6 ; aa++)
        {
          printf("%c", tableau9[aa]);
        }

      }
      printf(" ");

/////////////////////////////////////////// DOUBLE POINT

      for (aa = 0; aa < 6; aa++)
      {
        printf("%c", tableau10[aa]);
      }
      printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES

if (dizaineminutes == 0)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (dizaineminutes == 1)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (dizaineminutes == 2)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (dizaineminutes == 3)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (dizaineminutes == 4)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (dizaineminutes == 5)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}



printf(" ");
/////////////////////////////////// UNITES MINUTES

if (uniteminutes == 0)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (uniteminutes == 1)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (uniteminutes == 2)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (uniteminutes == 3)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (uniteminutes == 4)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (uniteminutes == 5)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}
else if (uniteminutes == 6)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau6[aa]);
  }

}
else if (uniteminutes == 7)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau7[aa]);
  }

}
else if (uniteminutes == 8)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau8[aa]);
  }

}
else if (uniteminutes == 9)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau9[aa]);
  }

}

printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 0; aa < 6; aa++)
{
  printf("%c", tableau10[aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes

if (dizainesecondes == 0)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (dizainesecondes == 1)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (dizainesecondes == 2)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (dizainesecondes == 3)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (dizainesecondes == 4)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (dizainesecondes == 5)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}


printf(" ");

///////////////////////////////////////////////// UNITES SECONDES


if (unitesecondes == 0)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (unitesecondes == 1)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (unitesecondes == 2)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (unitesecondes == 3)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (unitesecondes == 4)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (unitesecondes == 5)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}
else if (unitesecondes == 6)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau6[aa]);
  }

}
else if (unitesecondes == 7)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau7[aa]);
  }

}
else if (unitesecondes == 8)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau8[aa]);
  }

}
else if (unitesecondes == 9)
{
  for (aa = 0; aa < 6 ; aa++)
  {
    printf("%c", tableau9[aa]);
  }

}

printf(" ");

//////////////////////////////////////////// DEUXIEME LIGNE


///////////////////////////////////////////// DIZAINE HEURES
printf("\n");


gotoxy(a+1,b);
if (dizaineheure == 0)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }
}
else if (dizaineheure == 1)
  {
    for (aa = 6; aa < 12 ; aa++)
    {
    printf("%c", tableau1[aa]);
    }
  }
else if (dizaineheure == 2)
  {
    for (aa = 6; aa < 12 ; aa++)
    {
    printf("%c", tableau2[aa]);
    }
  }
printf(" ");


////////////////////////////////////// UNITES HEURES

if (uniteheure == 0)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (uniteheure == 1)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (uniteheure == 2)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (uniteheure == 3)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (uniteheure == 4)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (uniteheure == 5)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}
else if (uniteheure == 6)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau6[aa]);
  }

}
else if (uniteheure == 7)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau7[aa]);
  }

}
else if (uniteheure == 8)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau8[aa]);
  }

}
else if (uniteheure == 9)
{
  for (aa = 6; aa < 12 ; aa++)
  {
    printf("%c", tableau9[aa]);
  }

}
printf(" ");

/////////////////////////////////////////// DOUBLE POINT

for (aa = 6; aa < 12; aa++)
{
  printf("%c", tableau10[aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES

if (dizaineminutes == 0)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (dizaineminutes == 1)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (dizaineminutes == 2)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (dizaineminutes == 3)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (dizaineminutes == 4)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (dizaineminutes == 5)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (dizaineminutes == 6)
{
for (aa = 6; aa < 12; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (dizaineminutes == 7)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (dizaineminutes == 8)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (dizaineminutes == 9)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");
/////////////////////////////////// UNITES MINUTES

if (uniteminutes == 0)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (uniteminutes == 1)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (uniteminutes == 2)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (uniteminutes == 3)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (uniteminutes == 4)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (uniteminutes == 5)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (uniteminutes == 6)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (uniteminutes == 7)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (uniteminutes == 8)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (uniteminutes == 9)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 6; aa < 12; aa++)
{
printf("%c", tableau10[aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes

if (dizainesecondes == 0)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (dizainesecondes == 1)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (dizainesecondes == 2)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (dizainesecondes == 3)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (dizainesecondes == 4)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (dizainesecondes == 5)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (dizainesecondes == 6)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (dizainesecondes == 7)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (dizainesecondes == 8)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau8[aa]);
}

}

printf(" ");

///////////////////////////////////////////////// UNITES SECONDES


if (unitesecondes == 0)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (unitesecondes == 1)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (unitesecondes == 2)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (unitesecondes == 3)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (unitesecondes == 4)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (unitesecondes == 5)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (unitesecondes == 6)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (unitesecondes == 7)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (unitesecondes == 8)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (unitesecondes == 9)
{
for (aa = 6; aa < 12 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");


////////////////////////////////////////////////  TROISIEME LIGNE


gotoxy(a+2,b);
//printf("\n");

if (dizaineheure == 0)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }
}
else if (dizaineheure == 1)
  {
    for (aa = 12; aa < 18 ; aa++)
    {
    printf("%c", tableau1[aa]);
    }
  }
else if (dizaineheure == 2)
  {
    for (aa = 12; aa < 18 ; aa++)
    {
    printf("%c", tableau2[aa]);
    }
  }
printf(" ");


////////////////////////////////////// UNITES HEURES

if (uniteheure == 0)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (uniteheure == 1)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (uniteheure == 2)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (uniteheure == 3)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (uniteheure == 4)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (uniteheure == 5)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}
else if (uniteheure == 6)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau6[aa]);
  }

}
else if (uniteheure == 7)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau7[aa]);
  }

}
else if (uniteheure == 8)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau8[aa]);
  }

}
else if (uniteheure == 9)
{
  for (aa = 12; aa < 18 ; aa++)
  {
    printf("%c", tableau9[aa]);
  }

}
printf(" ");

/////////////////////////////////////////// DOUBLE POINT

for (aa = 12; aa < 18; aa++)
{
  printf("%c", tableau10[aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES

if (dizaineminutes == 0)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (dizaineminutes == 1)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (dizaineminutes == 2)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (dizaineminutes == 3)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (dizaineminutes == 4)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (dizaineminutes == 5)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (dizaineminutes == 6)
{
for (aa = 12; aa < 18; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (dizaineminutes == 7)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (dizaineminutes == 8)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (dizaineminutes == 9)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");
/////////////////////////////////// UNITES MINUTES

if (uniteminutes == 0)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (uniteminutes == 1)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (uniteminutes == 2)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (uniteminutes == 3)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (uniteminutes == 4)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (uniteminutes == 5)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (uniteminutes == 6)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (uniteminutes == 7)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (uniteminutes == 8)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (uniteminutes == 9)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 12; aa < 18; aa++)
{
printf("%c", tableau10[aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes

if (dizainesecondes == 0)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (dizainesecondes == 1)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (dizainesecondes == 2)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (dizainesecondes == 3)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (dizainesecondes == 4)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (dizainesecondes == 5)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (dizainesecondes == 6)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (dizainesecondes == 7)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (dizainesecondes == 8)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau8[aa]);
}

}

printf(" ");

///////////////////////////////////////////////// UNITES SECONDES


if (unitesecondes == 0)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (unitesecondes == 1)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (unitesecondes == 2)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (unitesecondes == 3)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (unitesecondes == 4)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (unitesecondes == 5)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (unitesecondes == 6)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (unitesecondes == 7)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (unitesecondes == 8)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (unitesecondes == 9)
{
for (aa = 12; aa < 18 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");

////////////////////////////////////////// QUATRIEME LIGNE

//printf("\n");
gotoxy(a+3,b);

if (dizaineheure == 0)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }
}
else if (dizaineheure == 1)
  {
    for (aa = 18; aa < 24 ; aa++)
    {
    printf("%c", tableau1[aa]);
    }
  }
else if (dizaineheure == 2)
  {
    for (aa = 18; aa < 24 ; aa++)
    {
    printf("%c", tableau2[aa]);
    }
  }
printf(" ");


////////////////////////////////////// UNITES HEURES

if (uniteheure == 0)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (uniteheure == 1)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (uniteheure == 2)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (uniteheure == 3)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (uniteheure == 4)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (uniteheure == 5)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}
else if (uniteheure == 6)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau6[aa]);
  }

}
else if (uniteheure == 7)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau7[aa]);
  }

}
else if (uniteheure == 8)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau8[aa]);
  }

}
else if (uniteheure == 9)
{
  for (aa = 18; aa < 24 ; aa++)
  {
    printf("%c", tableau9[aa]);
  }

}
printf(" ");

/////////////////////////////////////////// DOUBLE POINT

for (aa = 18; aa < 24 ; aa++)
{
  printf("%c", tableau10[aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES

if (dizaineminutes == 0)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (dizaineminutes == 1)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (dizaineminutes == 2)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (dizaineminutes == 3)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (dizaineminutes == 4)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (dizaineminutes == 5)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (dizaineminutes == 6)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (dizaineminutes == 7)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (dizaineminutes == 8)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (dizaineminutes == 9)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");
/////////////////////////////////// UNITES MINUTES

if (uniteminutes == 0)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (uniteminutes == 1)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (uniteminutes == 2)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (uniteminutes == 3)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (uniteminutes == 4)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (uniteminutes == 5)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (uniteminutes == 6)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (uniteminutes == 7)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (uniteminutes == 8)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (uniteminutes == 9)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau10[aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes

if (dizainesecondes == 0)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (dizainesecondes == 1)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (dizainesecondes == 2)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (dizainesecondes == 3)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (dizainesecondes == 4)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (dizainesecondes == 5)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (dizainesecondes == 6)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (dizainesecondes == 7)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (dizainesecondes == 8)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau8[aa]);
}

}

printf(" ");

///////////////////////////////////////////////// UNITES SECONDES


if (unitesecondes == 0)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau0[aa]);
}

}
else if (unitesecondes == 1)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau1[aa]);
}

}
else if (unitesecondes == 2)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau2[aa]);
}

}
else if (unitesecondes == 3)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau3[aa]);
}

}
else if (unitesecondes == 4)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau4[aa]);
}

}
else if (unitesecondes == 5)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau5[aa]);
}

}
else if (unitesecondes == 6)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau6[aa]);
}

}
else if (unitesecondes == 7)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau7[aa]);
}

}
else if (unitesecondes == 8)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau8[aa]);
}

}
else if (unitesecondes == 9)
{
for (aa = 18; aa < 24 ; aa++)
{
printf("%c", tableau9[aa]);
}

}

printf(" ");

///////////////////////////////////////////// CINQUIEME LIGNE

////////////////////////////////// DIZAINES HEURES

//printf("\n");
gotoxy(a+4,b);
printf(" ");

      if (dizaineheure == 0)
      {
        for (aa = 25; aa < 30 ; aa++)
        {
          printf("%c", tableau0[aa]);
        }
      }
     else if (dizaineheure == 1)
        {
          for (aa = 25; aa < 30 ; aa++)
          {
          printf("%c", tableau1[aa]);
          }
        }
      else if (dizaineheure == 2)
        {
          for (aa = 24; aa < 30 ; aa++)
          {
          printf("%c", tableau2[aa]);
          }
        }
printf(" ");


////////////////////////////////////// UNITES HEURES

      if (uniteheure == 0)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau0[aa]);
        }

      }
      else if (uniteheure == 1)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau1[aa]);
        }

      }
      else if (uniteheure == 2)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau2[aa]);
        }

      }
      else if (uniteheure == 3)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau3[aa]);
        }

      }
      else if (uniteheure == 4)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau4[aa]);
        }

      }
      else if (uniteheure == 5)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau5[aa]);
        }

      }
      else if (uniteheure == 6)
      {
      for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau6[aa]);
        }

      }
      else if (uniteheure == 7)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau7[aa]);
        }

      }
      else if (uniteheure == 8)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau8[aa]);
        }

      }
      else if (uniteheure == 9)
      {
        for (aa = 24; aa < 30 ; aa++)
        {
          printf("%c", tableau9[aa]);
        }

      }
      printf(" ");

/////////////////////////////////////////// DOUBLE POINT

      for (aa = 24; aa < 30 ; aa++)
      {
        printf("%c", tableau10[aa]);
      }
      printf(" ");

//////////////////////////////////////////// DIZAINE MINUTES

if (dizaineminutes == 0)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (dizaineminutes == 1)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (dizaineminutes == 2)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (dizaineminutes == 3)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (dizaineminutes == 4)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (dizaineminutes == 5)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}



printf(" ");
/////////////////////////////////// UNITES MINUTES

if (uniteminutes == 0)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (uniteminutes == 1)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (uniteminutes == 2)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (uniteminutes == 3)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (uniteminutes == 4)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (uniteminutes == 5)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}
else if (uniteminutes == 6)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau6[aa]);
  }

}
else if (uniteminutes == 7)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau7[aa]);
  }

}
else if (uniteminutes == 8)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau8[aa]);
  }

}
else if (uniteminutes == 9)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau9[aa]);
  }

}

printf(" ");

///////////////////////////////////////// DOUBLE POINT

for (aa = 24; aa < 30 ; aa++)
{
  printf("%c", tableau10[aa]);
}
printf(" ");

//////////////////////////////////////////// DIZAINE secondes

if (dizainesecondes == 0)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (dizainesecondes == 1)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (dizainesecondes == 2)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (dizainesecondes == 3)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (dizainesecondes == 4)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (dizainesecondes == 5)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}


printf(" ");

///////////////////////////////////////////////// UNITES SECONDES


if (unitesecondes == 0)
{
for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau0[aa]);
  }

}
else if (unitesecondes == 1)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau1[aa]);
  }

}
else if (unitesecondes == 2)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau2[aa]);
  }

}
else if (unitesecondes == 3)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau3[aa]);
  }

}
else if (unitesecondes == 4)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau4[aa]);
  }

}
else if (unitesecondes == 5)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau5[aa]);
  }

}
else if (unitesecondes == 6)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau6[aa]);
  }

}
else if (unitesecondes == 7)
{
for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau7[aa]);
  }

}
else if (unitesecondes == 8)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau8[aa]);
  }

}
else if (unitesecondes == 9)
{
  for (aa = 24; aa < 30 ; aa++)
  {
    printf("%c", tableau9[aa]);
  }

}

printf(" ");

//int c = getchar();
//if (c != 0) {exit;}

/*gotoxy(x, y);

printf("Cet écran va s'actualiser dans quelques secondes" );
int h;
for (h = 0; h < 10; h++)
{
printf(".");
sleep(1);

}

*/


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
if (fichier0 != NULL){
 //system("clear");
  fseek(fichier0, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier0);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau0[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau0[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau0[j] = caractere;
      j++;
    }
   else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau0[j] = caractere;
      j++;

    }


  //  printf("%c", caractere);
   //b = b+1;
  }while(caractere != EOF);
}
  else {

   printf("Le fichier ne peut pas être ouvert \n");

  }


//////////////////////////////////////////   NUMERO 1

  FILE* fichier1 = NULL;
  fichier1 = fopen("/home/bantoine/Images/1.pbm", "r") ;
  if (fichier1 != NULL){
   //system("clear");
    fseek(fichier1, 18, SEEK_SET);
  //  gotoxy(a,b);
   j = 0;
    do{

      caractere = fgetc(fichier1);
      if ( caractere == '0')
      {
      caractere = ' ';
      tableau1[j] = caractere;
      j++;
      }
     else if ( caractere == ' ')
      {
        caractere = ' ';
        tableau1[j] = caractere;
        j++;
      }
      else if ( caractere == '1')
      {
        caractere = 'X';
        tableau1[j] = caractere;
        j++;
      }
      else if ( caractere == '\n')
      {
        caractere = ' ';
        tableau1[j] = caractere;
        j++;

      }


    //  printf("%c", caractere);
     //b = b+1;
    }while(caractere != EOF);
  }
    else {

    printf("Le fichier ne peut pas être ouvert \n");

    }

////////////////////////////////////////////////////////// NUMERO 2


FILE* fichier2 = NULL;
fichier2 = fopen("/home/bantoine/Images/2.pbm", "r") ;
if (fichier2 != NULL){
 //system("clear");
  fseek(fichier2, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier2);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau2[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau2[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau2[j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau2[j] = caractere;
      j++;

    }


  //  printf("%c", caractere);
   //b = b+1;
  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }

 ///////////////////////////////////////////////////// NUMERO 3

 FILE* fichier3 = NULL;
 fichier3 = fopen("/home/bantoine/Images/3.pbm", "r") ;
 if (fichier3 != NULL){
  //system("clear");
   fseek(fichier3, 18, SEEK_SET);

  j = 0;
   do{

     caractere = fgetc(fichier3);
     if ( caractere == '0')
     {
     caractere = ' ';
     tableau3[j] = caractere;
     j++;
     }
    else if ( caractere == ' ')
     {
       caractere = ' ';
       tableau3[j] = caractere;
       j++;
     }
     else if ( caractere == '1')
     {
       caractere = 'X';
       tableau3[j] = caractere;
       j++;
     }
     else if ( caractere == '\n')
     {
       caractere = ' ';
       tableau3[j] = caractere;
       j++;

     }


   //  printf("%c", caractere);
    //b = b+1;
   }while(caractere != EOF);
 }
   else {

     printf("Le fichier ne peut pas être ouvert \n");

   }

///////////////////////////////////////////////////////// NUMERO 4

FILE* fichier4 = NULL;
fichier4 = fopen("/home/bantoine/Images/4.pbm", "r") ;
if (fichier4 != NULL){
 //system("clear");
  fseek(fichier4, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier4);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau4[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau4[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau4[j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau4[j] = caractere;
      j++;

    }



  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }


//////////////////////////////////////////////////////// NUMERO 5

FILE* fichier5 = NULL;
fichier5 = fopen("/home/bantoine/Images/5.pbm", "r") ;
if (fichier5 != NULL){
 //system("clear");
  fseek(fichier5, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier5);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau5[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau5[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau5[j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau5[j] = caractere;
      j++;

    }


  //  printf("%c", caractere);
   //b = b+1;
  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }

/////////////////////////////////////////// NUMERO 6

FILE* fichier6 = NULL;
fichier6 = fopen("/home/bantoine/Images/6.pbm", "r") ;
if (fichier6 != NULL){
 //system("clear");
  fseek(fichier6, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier6);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau6[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau6[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau6[j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau6[j] = caractere;
      j++;

    }


  //  printf("%c", caractere);
   //b = b+1;
  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }


//////////////////////////////////////////////// Numero 7

FILE* fichier7 = NULL;
fichier7 = fopen("/home/bantoine/Images/7.pbm", "r") ;
if (fichier7 != NULL){
 //system("clear");
  fseek(fichier7, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier7);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau7[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau7[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau7[j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau7[j] = caractere;
      j++;

    }


  //  printf("%c", caractere);
   //b = b+1;
  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }

///////////////////////////////////////////////////////// NUMERO 8

FILE* fichier8 = NULL;
fichier8 = fopen("/home/bantoine/Images/8.pbm", "r") ;
if (fichier8 != NULL){
 //system("clear");
  fseek(fichier8, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier8);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau8[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau8[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau8[j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau8[j] = caractere;
      j++;

    }


  //  printf("%c", caractere);
   //b = b+1;
  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }

////////////////////////////////////////////// NUMERO 9



FILE* fichier9 = NULL;
fichier9 = fopen("/home/bantoine/Images/9.pbm", "r") ;
if (fichier9 != NULL){
 //system("clear");
  fseek(fichier9, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier9);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau9[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau9[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau9[j] = caractere;
      j++;
    }
   else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau9[j] = caractere;
      j++;

    }


  //  printf("%c", caractere);
   //b = b+1;
  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }

///////////////////////////////////////////////////////////////////////// DOUBLE POINT


FILE* fichier10 = NULL;
fichier10 = fopen("/home/bantoine/Images/11.pbm", "r") ;
if (fichier10 != NULL){
 //system("clear");
  fseek(fichier10, 18, SEEK_SET);
//  gotoxy(a,b);
 j = 0;
  do{

    caractere = fgetc(fichier10);
    if ( caractere == '0')
    {
    caractere = ' ';
    tableau10[j] = caractere;
    j++;
    }
   else if ( caractere == ' ')
    {
      caractere = ' ';
      tableau10[j] = caractere;
      j++;
    }
    else if ( caractere == '1')
    {
      caractere = 'X';
      tableau10[j] = caractere;
      j++;
    }
    else if ( caractere == '\n')
    {
      caractere = ' ';
      tableau10[j] = caractere;
      j++;

    }


  //  printf("%c", caractere);
   //b = b+1;
  }while(caractere != EOF);
}
  else {

    printf("Le fichier ne peut pas être ouvert \n");

  }


}
