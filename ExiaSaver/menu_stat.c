#include <stdio.h>
#include <stdlib.h>

int menu_stat(int argc, char *argv[])
{
    int i;
    int choix;
    int compter1;
    int compter2;
    int compter3;
    int compteurall;
    int dummy;
    char line[512];
    char commande[256];
    int nomb = 3;
     int caractereActuel = 0;
      *commande = 0 ;
    system("clear");
    FILE* fichier_historique = NULL;
      printf("Choisissez le menu:\n1-Les probabiliter\n2-Historique d'exécution\n");

while (strcmp(commande, "\n") != 0)
  {

    fichier_historique = fopen("Historique.txt", "r");

  if (fichier_historique != NULL) { // SI L'IMAGE EST BIEN RECUE

  printf("Le fichier est ouvert\n");

      while((nomb = fscanf(fichier_historique, "%d | %d | %s\n", &compteurall, &dummy, line)) != EOF && nomb != 0);

          printf("%d\n", compteurall); // On l'affiche
       // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

printf("foin");
fclose(fichier_historique);


}
else { // SI L'IMAGE N'EST PAS RECUE
printf("Le fichier ne peut pas être ouvert\n");
}
fgets(commande, 256, stdin);

}


    return 0;
}
