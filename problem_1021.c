#include <stdio.h>

void notes(double *N, int *arr, int size) {

	printf("NOTAS:\n");

	for(int i = 0; i < size; i++) {
	
		int qnt = (int)(*N / arr[i]);
	
		*N -= qnt * arr[i];	

		printf("%d nota(s) de R$ %d.00\n", qnt, arr[i]);
	}
}

void coins(double *N, double *arr, int size) {

	printf("MOEDAS:\n");

	int qnt = 0;

	for(int i = 0; i < size; i++) {
		
		qnt = (int)(*N / arr[i]);
		
		*N -= qnt * arr[i];	

		printf("%d moeda(s) de R$ %.2lf\n", qnt, arr[i]);
	}
}
	
int main() {

	double N;
	int arr_notes[] = {100, 50, 20, 10, 5, 2}, size;
	double arr_coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

	scanf("%lf", &N);

	size = sizeof(arr_notes) / sizeof(arr_notes[0]);

	notes(&N, arr_notes, size);

	size = sizeof(arr_coins) / sizeof(arr_coins[0]);

	coins(&N, arr_coins, size);

	return 0;
}
