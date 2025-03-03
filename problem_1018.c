#include <stdio.h>


int account_notas(int *arr, int size_arr, int nota) {

	for(int i = 0; i < size_arr; i++) {
	
		int qnt = nota / arr[i];
		printf("%d nota(s) de R$ %d,00\n", qnt, arr[i]);
		nota %= arr[i];
	}
	return 0;
}
		 		 


int main(void) {

	int arr[] = {100, 50, 20, 10, 5, 2, 1}, nota;

	int size_arr = sizeof(arr) / sizeof(arr[0]);

	scanf("%d", &nota);
	
	printf("%d\n", nota);
	
	account_notas(arr, size_arr, nota);

	return 0;
}
