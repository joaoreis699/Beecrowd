#include <stdio.h>

int main(void){ 

	double a, b, c, average;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	average = ((a*2)+(b*3)+(c*5))/10;
	
	printf("MEDIA = %.1lf\n", average);

	return 0;
}
