#include <stdio.h>
#include <math.h>

double calc_delta(double a, double b, double c) {

	return (b*b) - 4 * a * c;
}

double baskhara(double a, double b, double c, double delta) {

	if(delta < 0) {

		printf("Impossivel calcular\n");
	} else {

	double x1 = (-b + sqrt(delta)) / (2 * a);
	double x2 = (-b - sqrt(delta)) / (2 * a);
	
	return printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
	}
}

int main() {
	
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	if( a == 0) {
	
		printf("Impossivel calcular\n");

		return 1;
	}

	double delta = calc_delta(a, b, c);
	baskhara(a, b, c, delta);
	
	return 0;
}
