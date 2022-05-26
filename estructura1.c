
#include<stdio.h>

typedef struct{
int d;
int m;
int a;

}date;

typedef struct{
char n[10];
char a[10];
int t;
date fn;

}contacto;

int main()
{
  contacto persona;
printf("nombre: ");
scanf("%10s",persona.n);
printf("apodo: ");
scanf("%10s",persona.a);
printf("telefono(recibiras notificaciones de las novedades del juego): ");
scanf("%i",&persona.t);
printf("fecha de nacimiento : ");
scanf("%i %i %i",&persona.fn.d,&persona.fn.m,&persona.fn.a);
printf("\n%s\n%s\n%i-%i-%i",persona.n,persona.a,persona.fn.d,persona.fn.m,persona.fn.a);
    return 0;
}
