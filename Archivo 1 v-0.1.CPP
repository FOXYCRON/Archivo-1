/* Ejercicio para explicar el comando SCANF*/
/* EJERCICIO UTILIZANDO SCANF */

#include<stdio.h>
#include<conio.h>
int e;
float prom;
char gen;
main()
{

printf("EJERCICIOS CON SCANF\n");
printf("\n Dame tu edad: "); scanf("%d", &e);
printf("\n Dame tu promedio: "); scanf("%f", &prom);
printf("\n Dame el g%cnero: ", 130); fflush(stdin); scanf("%c", &gen);

/* DESPLIEGUE DE INFORMACIÓN CAPTURADA POR TECLADO */

printf("\n \n DATOS CAPTURADOS\n");
printf("\n La edad capturada es: %d", e);
printf("\n El promedio es: %.1f", prom);
printf("\n El g%cnero es: %c", 130, gen);

getch();

}
