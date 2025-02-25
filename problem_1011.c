#include <stdio.h>
#include <math.h>

int main (void) {

	double ray, pi;

	scanf("%lf", &ray);

	pi = 3.14159;

	printf("VOLUME = %.3lf\n", ((4/3.0)*pi*pow(ray, 3)));

	return 0;
}
