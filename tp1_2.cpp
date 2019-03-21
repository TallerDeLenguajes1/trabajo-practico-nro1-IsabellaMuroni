#include <stdio.h>
#include <stdlib.h>


void Ordenar(int *a, int *b);
void Invertir(int *a, int *b);
void Variable(int *variable);
void Cuadrado_(int *n);
int Cuadrado(int *n);
int main(void)
{
	int num, Num;

	printf("Ingrese número: \n");
	scanf("%d", &num);

	Num = Cuadrado(&num); // (i)
	printf("El cuadrado de %d es %d\n",num, Num);

	Cuadrado_(&num); // (ii)

	Variable(&num); // (iii)

	int a,b; // (iv)

	printf("Ingrese valor a:\n");
	scanf("%d", &a);

	printf("Ingrese valor b:\n");
	scanf("%d", &b);

	Invertir(&a,&b);

	Ordenar(&a,&b); // (v)


	return 0;
}

int Cuadrado(int *n){
	int N;

	N = *n * *n;

	return N;
}

void Cuadrado_(int *n){
	printf("El cuadrado de %d es %d\n",*n,  (*n) * (*n));
}

void Variable(int *variable){
	printf("La dirección de la variable es %p\n", variable);
	printf("El contenido de la variable es %d\n", *variable);
}

void Invertir(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;

	printf("a = %d , b = %d \n", *a,*b);
}

void Ordenar(int *a, int *b){
	if(*a < *b){
		printf("El orden es: %d , %d \n", *a, *b);
	}else{
		printf("El orden es: %d , %d \n", *b,*a);
	}
}