/* ************************************************************************** */
/*                               ___      __ __	  ____                       */
/*                              |    \  /   |    |    |                      */
/*       historique.c           |__   \/    |    |____|                      */
/*                              |     /\    |    |    |                      */
/*                              |___ /  \ __|__  |    |                      */
/*       By: FlorianXeifer <florian.pfeifer@viacesi.fr>                       */
/*                                                                            */
/*       Created: 2016/12/12 by FlorianXeifer                                 */
/*       Updated: 2016/12/14 by FlorianXeifer                                 */
/*                                                                            */
/* ************************************************************************** */


#include <time.h>
#include <stdio.h>
#include <stdlib.h>

//int number; // les variables a enregistrer dans l'historique
//int nombre;

int historique(int number, int nombre)
{
    FILE* fichier = NULL;
    fichier = fopen("Historique.txt", "r+");//ouverture de fichier Historique.txt en mode lecture + écritur

        time_t t;                 //
    struct tm *tb;                //récupération de la date et de l'heure
    t = time(NULL);               //
    tb = localtime(&t);           //


    if (fichier != NULL)          //si fichier i=ouvert avec succès
    {
                fseek(fichier, 0, SEEK_END);
                fprintf(fichier, "%d | %d | %s", number, nombre, ctime(&t));//écriture dans le fichier Historique.txt
                fclose(fichier);

                    }
    return 0;
}
