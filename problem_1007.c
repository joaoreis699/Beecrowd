#include <stdio.h>

int  calculate_difference(int a, int b, int c, int d) {

	return (a * b - c * d);
}


int main(void) {

	int a, b, c, d, difference;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	difference = calculate_difference(a, b, c, d);

	printf("DIFERENCA = %d\n", difference);

	return 0;
}

	
