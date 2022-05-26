#include <stdio.h>
#include<string.h>

int main ()
{
  FILE *pf;
char c;
char p[100];
 pf = fopen("Instrucciones.txt","r");

  if (pf == NULL)
    {
      printf("Error al abrir el fichero.\n");
      return -1;
    }
 while(!feof(pf)){
 fgets(p,100,pf);
 printf("%s",p);
 }
 printf("\n");
 return 0;
}
