#include <stdio.h>

double calculate_salary(int works_hours, double value_per_hours) {

	return works_hours * value_per_hours;
}

int main(void) {
	
	double salary, value_per_hours;
	int number, works_hours;
	scanf("%d %d %lf", &number, &works_hours, &value_per_hours);

	salary = calculate_salary(works_hours, value_per_hours);

	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);

	return 0;
}
