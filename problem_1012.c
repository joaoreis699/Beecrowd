#include <stdio.h>

 void read_number(double *A, double *B, double *C) {

	scanf("%lf %lf %lf", A, B, C);
}

int main (void) {

	double A, B, C, pi = 3.14159;

	read_number(&A, &B, &C);

	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", ((A*C)/2) , pi*(C*C), ((A+B)*C)/2 , B*B, A*B);

	return 0;
}
