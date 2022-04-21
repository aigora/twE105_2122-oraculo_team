#include <stdio.h>
int main ()
{
    int nivel;
    char nombre[30];
    printf("Bienvenido a nuestro ESCAPE ROOM creado por Oraculo Team\n");
    printf("A continuacion escriba su nombre  para empezar....\n");
    printf("Nombre del jugador:");
    scanf("%30[^\n]",&nombre);
    printf("Eliga nivel:\n a.bajo\n b.medio\n c.alto\n");
    scanf(" %c",&nivel);
    switch(nivel){
    case 'a':
        printf("%s ha elegido el nivel bajo",nombre);
        break;
    case 'b':
        printf("%s ha elegido el nivel medio",nombre);
        break;

    case 'c':
        printf("%s ha elegido el nivel alto",nombre);
        break;
            
    case 'd':
        printf("%s ha elegido abandonar el juego",nombre);
        break;
            
    default:
        printf("No quieres jugar, adios");
        break;

    }
    return 0;
}
