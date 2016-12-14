#include <stdio.h>
#include <stdlib.h>
int
main (void)
{
  FILE *f;

int a = 0;
int b;
int c;
int d;
char l[20];
char i[20];
char n[20];
char e[20];

int ret;

if ((f = fopen ("Historique.txt","r")) == NULL)
  return EXIT_FAILURE;

  while ((ret = fscanf (f,"%i | %i | %24c", &a, &b, l)) != EOF && ret != 0)
    printf (" %i | %i | %s\n", a, b ,l);

  /*while ((ret = fscanf (f,"%i | %i | %s %s %i %s %i", &a, &b, l, i, &c, n, &d)) != EOF && ret != 0)
    printf (" %i | %i | %s %s %i %s %i\n", a, b ,l ,i ,c ,n ,d);*/

getchar ();
fclose (f);
return EXIT_SUCCESS;
}
