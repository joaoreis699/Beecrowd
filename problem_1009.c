#include <stdio.h>

double sum_salary(double salary, double sales) {

	return salary + (sales*0.15);
}

int main(void) {

	char name;
	double salary, sales, total_salary;

	scanf("%s %lf %lf", &name, &salary, &sales);

	total_salary = sum_salary(salary, sales);

	printf("TOTAL = R$ %.2lf\n", total_salary);

	return 0;
}
