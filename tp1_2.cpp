#include <stdio.h>
#include <stdlib.h>

void Cuadrado_(int n);
int Cuadrado(int n);
int main(void)
{
	int num, Num;
	printf("Ingrese número: \n");
	scanf("%d", &num);

	Num = Cuadrado(num); // (i)
	printf("El cuadrado de %d es %d\n",num, Num );

	Cuadrado_(num); // (ii)

	return 0;
}

int Cuadrado(int n){
	int N;

	N = n * n;

	return N;
}

void Cuadrado_(int n){
	printf("El cuadrado de %d es %d\n",n, n*n);
}
