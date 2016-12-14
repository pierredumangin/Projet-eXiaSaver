#include <stdio.h>
#include <stdlib.h>

int main ()
{

  //int execl(const char *path, const char *arg, ...);
  //execl("chemin d'accès/prog","prog","arg1","arg2",...,(char *)NULL);

  const char *HOME = "EXIASAVER_HOME";
  char *Home;
  Home = getenv(HOME);

  const char *PBM1 = "EXIASAVER1_PBM";
  char *pbm1;
  pbm1 = getenv(PBM1);

  const char *PBM2 = "EXIASAVER2_PBM";
  char *pbm2;
  pbm2 = getenv(PBM2);

  const char *SLEEP = "EXIASAVER2_SLEEP";
  char *Sleep;
  Sleep = getenv(SLEEP);



  /* printf("Home : %s\n", getenv("EXIASAVER_HOME"));
   printf("PBM1 : %s\n", getenv("EXIASAVER1_PBM"));
   printf("PBM2 : %s\n", getenv("EXIASAVER2_PBM"));
   printf("Time : %s\n", getenv("EXIASAVER2_SLEEP"));*/


   printf("Home : %s\n", Home);
   printf("PBM1 : %s\n", pbm1);
   printf("PBM2 : %s\n", pbm2);
   printf("Sleep : %s\n", Sleep);


   return(0);
}
