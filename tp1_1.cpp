/*

 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 147;
	int * puntero = NULL;
	puntero = &a;

	printf("1_ Contenido del puntero: %d\n", * puntero);
	printf("2_ Dirección de memoria almacenada: %p\n", puntero);
	printf("3_ Dirección de memoria de la variable: %p\n", &a);
	printf("4_ Dirección de memoria del puntero: %p\n", * puntero);
	printf("5_ Tamaño de memoria utilizado por la variable: %d\n", sizeof(a));

	/*
		NOTA: El resultado de los puntos 2 y 3 es el mismo pues el puntero almacena la dirección de
		memoria de la variable.
		En el punto 4  se obtine la dirección de memoria del puntero, no de la variable.
	*/
	return 0;
}