
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
int n, a,i=15;
char r;
printf("Bienvenido al minijuego del Scape Room \n");
printf(".................... \n");
srand(time(NULL));
n = rand() % 100 +1;
for(i;i>=1;i--){
printf("\n te quedan %i intentos \n", i);
printf("escribe un numero(0-100) : ");

scanf("%i", & a);

if(a<n){
printf("\nte quedas corto \n\n");
}else if(a>n){
printf("\nte pasas \n\n");

}else ;
if(a==n){
 printf("GANASTE!!!!  ");
 return 1;
}else;
}
printf("\n perdiste el número es %i", n);

return 0;
}
