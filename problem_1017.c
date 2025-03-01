#include <stdio.h>

float calculate_fuel(int time, int average_velocity) {

	return (average_velocity*time)/12.0;
}

int main(void) {

	int time, average_velocity;
	float fuel_expense;

	scanf("%d %d", &time, &average_velocity);
	
	fuel_expense = calculate_fuel(time, average_velocity);

	printf("%.3f\n", fuel_expense);  
	
	return 0;
}
