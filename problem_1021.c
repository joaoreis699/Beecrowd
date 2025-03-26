#include <stdio.h>

void notes(int *whole_part, int *arr, int size) {

	printf("NOTAS:\n");

	for(int i = 0; i < size; i++) {
	
		int qnt = *whole_part / arr[i];
		
		*whole_part = (*whole_part % arr[i]);

		printf("%d nota(s) de R$ %d.00\n", qnt, arr[i]);
	}
}

void coins(double *X, double *arr, int size) {

	printf("MOEDAS:\n");

	int Y = (*X * 100);
	int qnt = 0;

	for(int i = 0; i < size; i++) {
		
		qnt = Y / (int)(arr[i] * 100);

		Y = Y % (int)(arr[i] * 100);

		printf("%d moeda(s) de R$ %.2lf\n", qnt, arr[i]);
	}
}
	
int main() {

	double N;
	int arr_notes[] = {100, 50, 20, 10, 5, 2}, size;
	double arr_coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

	scanf("%lf", &N);

	int whole_part = (int)(N);
	
	size = sizeof(arr_notes) / sizeof(arr_notes[0]);

	notes(&whole_part, arr_notes, size);

	double X = (N - (int)(N)) + whole_part;

	size = sizeof(arr_coins) / sizeof(arr_coins[0]);

	coins(&X, arr_coins, size);

	return 0;
}
