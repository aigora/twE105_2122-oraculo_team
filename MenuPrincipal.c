#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>

void titulo();
void menu();                   //Titulo principal en ascii

int main(void) {
	titulo();
	menu();}

void menu(){
    int nivel, aux;
    char nombre[30], a, b, c;

    printf("********Bienvenido a nuestro ESCAPE ROOM creado por Oraculo Team.********\n\n");
    printf("A continuacion escriba su nombre  para empezar....\n\n");
    printf("Nombre del jugador:");
    scanf("%30[^\n]",&nombre);
    printf("Pulse 1: Para elegir dificultad.\n");
    printf("Pulse 0: Para salir del juego.\n");
    while(scanf("%i",&aux ), aux!=0 &&  aux != 1){
        while(getchar() != '\n');
        printf("Pulse 1 o 0!!Por favor!!!\n");
    }
    while(getchar() != '\n');

    if(aux == 0){
        printf("Hasta luego.Vuelva pronto");
    }

    if(aux == 1){

        printf("\nEliga nivel:\n a.Bajo\n b.Medio\n c.Alto\n ");
    while(scanf("%c",&nivel), nivel !='a' &&  nivel != 'b' &&  nivel != 'c'){
        while(getchar() != '\n');
        printf("Escriba bien la letra en minusculua!!Por favor!!!\n");
    }
    while(getchar() != '\n');
    switch(nivel){
    case 'a':
        printf("%s ha elegido el nivel Bajo.\nA contunacion empieza el juego...\nSUERTE!!!!!\n",nombre);
        break;
    case 'b':
        printf("%s ha elegido el nivel Medio.\nA contunacion empieza el juego...\nSUERTE!!!!!\n",nombre);
        break;

    case 'c':
        printf("%s ha elegido el nivel Alto.\nA contunacion empieza el juego...\nSUERTE!!!!!\n",nombre);
        break;
    }

    }
   system("pause");


}
void titulo() {
printf("\n\n\n");
	printf(" \333\333\333\333\333\333 \333\333\333\333\333   \333\333\333\333\333       \333\333        \333\333\333\333\333\333  \333\333\333\333\333\333    \333\333\333\333\333\333   \333\333\333\333\333   \333\333\333\333\333  \333\333\333       \333\333\333\n");
	printf(" \333\333\333\333\333\333 \333\333\333\333\333 \333\333\333\333\333\333\333      \333\333\333\333       \333\333\333\333\333\333  \333\333\333\333\333\333    \333\333\333\333\333\333  \333\333   \333\333 \333\333   \333\333 \333\333 \333     \333 \333\333\n");
	printf(" \333\333     \333     \333           \333\333  \333\333      \333\333    \333 \333         \333\333    \333 \333\333   \333\333 \333\333   \333\333 \333\333  \333   \333  \333\333\n");
	printf(" \333\333\333\333   \333\333\333\333\333 \333          \333\333    \333\333     \333\333    \333 \333\333\333\333      \333\333    \333 \333\333   \333\333 \333\333   \333\333 \333\333   \333 \333   \333\333\n");
	printf(" \333\333     \333\333\333\333\333 \333         \333\333      \333\333    \333\333    \333 \333         \333\333\333\333\333\333  \333\333   \333\333 \333\333   \333\333 \333\333    \333    \333\333\n");
	printf(" \333\333         \333 \333        \333\333\333\333\333\333\333\333\333\333\333\333   \333\333\333\333\333\333  \333         \333\333 \333\333   \333\333   \333\333 \333\333   \333\333 \333\333         \333\333\n");
	printf(" \333\333\333\333\333\333 \333\333\333\333\333 \333\333\333\333\333\333\333 \333\333          \333\333  \333\333      \333\333\333\333\333\333    \333\333  \333\333  \333\333   \333\333 \333\333   \333\333 \333\333         \333\333\n");
	printf(" \333\333\333\333\333\333 \333\333\333\333\333   \333\333\333\333\333\333\333            \333\333 \333\333      \333\333\333\333\333\333    \333\333   \333\333  \333\333\333\333\333   \333\333\333\333\333  \333\333         \333\333\n");



	system("pause>>null \n\n"); //Paramos el programa sin el mensaje.
	system("cls"); /*LIMPIAMOS LA PANTALLA*/
}

