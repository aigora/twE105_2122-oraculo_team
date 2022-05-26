#include<stdio.h>

int main()
{
    int intentos=0;
    char respuesta[31];
    do
    {
        printf("¿Donde mato Critobal a sus padres? ¿Dentro o fuera del gabinete?\n");
        printf("Escribe respuesta:\n");
        scanf(" %30s", respuesta);
        intentos+=1;
        printf("\nNumero de intentos:%i\n",intentos);
        if(intentos>=1)
        {
            printf("Has perdido");
            return 0;

        }

    }
    while(strcmp(respuesta,"fuera")!=0);
    printf("Has ganado");
    return 0;
}
