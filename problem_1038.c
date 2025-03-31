#include <stdio.h>

int main() {

	int code, qnt;
	scanf("%d %d", &code, &qnt);

	switch (code) {

		case 1:
			printf("Total: R$ %.2f\n", (float)(qnt*4));
			break;

		case 2:
			printf("Total: R$ %.2f\n", (float)(qnt*4.5));
			break;

		case 3:
			printf("Total: R$ %.2f\n", (float)(qnt*5));
			break;

		case 4:
			printf("Total: R$ %.2f\n", (float)(qnt*2));
			break;

		case 5:
			printf("Total: R$ %.2f\n", (float)(qnt*1.5));
			break;
	}

	return 0;
}
		
