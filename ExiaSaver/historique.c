#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int number;
int nombre;

int historique()
{
    FILE* fichier = NULL;
        time_t t;
    struct tm *tb;
    t = time(NULL);
    tb = localtime(&t);
    fichier = fopen("Historique.txt", "r+");
    if (fichier != NULL)
    {
                fseek(fichier, 0, SEEK_END);
                fprintf(fichier, "%d | %d | %s", number, nombre, ctime(&t));
                fclose(fichier);

                    }
    return 0;
}
