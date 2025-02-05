#include <stdio.h>

int main(void) {

	double a, pi, r;

	scanf("%lf", &r);
	
	pi = 3.14159;	
	a = pi*(r*r);

	printf("A= %.4lf\n", a);
	
	return 0;
}	
