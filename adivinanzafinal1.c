#include<stdio.h>
int main()
{
    char respuesta[31];
        printf("¿Donde mato Critobal a sus padres? ¿Dentro o fuera del gabinete?\n");
        printf("Escribe respuesta:\n");
        scanf(" %30s", respuesta);
        if (strcmp(respuesta,"fuera")!=0)
        {
            printf("Has perdido, sigue intentandolo.");
        }
        else
        {
            printf("Has ganado!!!! Superaste el Scape Room!!!!");
        }
    return 0;
}
