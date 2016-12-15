/* ************************************************************************** */
/*                               ___      __ __	  ____                        */
/*                              |    \  /   |    |    |                       */
/*      concat.c                |__   \/    |    |____|                       */
/*                              |     /\    |    |    |                       */
/*                              |___ /  \ __|__  |    |                       */
/*       By: FlorianXeifer <florian.pfeifer@viacesi.fr>                       */
/*                                                                            */
/*       Created: 2016/12/13 by FlorianXeifer                                 */
/*       Updated: 2016/12/14 by FlorianXeifer                                 */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <string.h>

char* concat(const char *s1, const char *s2)
{
    char *result = malloc(strlen(s1)+strlen(s2)+1);
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

//Utilisation de la fonction de conca :
//char* Nom_resultat = concat(String1, String2);
