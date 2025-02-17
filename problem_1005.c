#include <stdio.h>

int main(void) {


	double A, B, average;
	scanf("%lf %lf", &A, &B);
	 

	A = A*3.5;
	B = B*7.5;

	average = (A+B)/11;

	printf("MEDIA = %.5lf\n", average);

	return 0;
}
