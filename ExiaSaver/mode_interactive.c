#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>



void mode_interactive()
{
//char prompt[256] ;
char commande[256];


//strcpy(prompt, "EXIA >");
*commande = 0 ;
while (strcmp(commande, "\n") != 0)
	{
	//printf(prompt);
	  printf("Launcher n°3");
	fgets(commande, 256, stdin);
	//commande[strcspn(commande, "\n")] = '\0';
	//printf("%s\n",commande);
	}
//puts("Bye");
system("clear");
}
