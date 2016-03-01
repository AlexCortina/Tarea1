#include "librerias.h"

//Intercambia valores. Esta función intercambia el valor de dos variables dobule usando paso de parámetro.
//
//\param a primer numero a intercambiar
//\param b segundo numero a intercambiar
//\note funcion pura
void swap(double* a, double* b){
	double t;
	t = *a;
	*a = *b;
	*b = t;
}
int main(int argc, char* argv[]){
	double x = 3;
	double y = 7;
	printf("x: %lf\n", x);
	printf("Y: %lf\n", y);
	swap(&x, &y);
	printf("\nX: %lf\n", x);
	printf("Y: %lf\n", y);
	return 0;
}