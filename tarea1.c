#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[]){
	double termino, pi=0,s=1;
	for(int j=1; j < 555555; j+=2){
		termino = ((double)s*4)/(double)j;
		s = s*(-1);
		pi = pi + termino;
	}
	printf("El numero pi es: %.54lf", pi);
	return 0;
	/**double pi, suma,s=1;
	for(int i=2; i < 500000; i+=2){
		pi= (s*4)/(i*(i+1)*(i+2));
		s = s*(-1);
		suma= suma + pi;
	}
	suma = suma+3;
	printf("%.54lf", suma);
	return 0;**/
}//main
