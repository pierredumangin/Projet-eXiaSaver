#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE* fichier = NULL;
        time_t t;
    struct tm *tb;
    t = time(NULL);
    tb = localtime(&t);
    fichier = fopen("heure.txt", "r+");
    if (fichier != NULL)
    {
                fseek(fichier, 0, SEEK_END);
                fprintf(fichier, "%s\n",ctime(&t));
                fclose(fichier);

                    }
    return 0;
}
