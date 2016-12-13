#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;

  fichier = fopen("fichier_tampon.txt", "w");

  if (fichier != NULL)
  {
    fprintf(fichier, "0 1 0\n1 1 0\n0 1 0\n0 1 0\n0 1 0\n1 1 1\n0 0 1\n1 1 1\n1 0 0\n1 1 1");
    fclose(fichier);
  }
  return 0;
}
