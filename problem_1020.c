#include <stdio.h>

int main(void) {

	int N, years, months, days;

	scanf("%d", &N);

	years = N / 365;

	months = (N % 365) / 30;

	days = ((N % 365) % 30);

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

	return 0;
}
