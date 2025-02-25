#include <stdio.h>
#include <math.h>

float calculate_distance(float *p1, float *p2) {

	return pow(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2), 1/2.0);
}


int main(void) {

	float p1[2], p2[2];

	scanf("%f %f", &p1[0], &p1[1]);
	scanf("%f %f", &p2[0], &p2[1]);
	
	printf("%.4f\n", calculate_distance(p1, p2));
	 
	return 0;
}
