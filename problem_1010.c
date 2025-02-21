#include <stdio.h>

float amount_to_pay(int quantify, float value) {
	
	return quantify * value;
}

void data_entry(int *code, int *quantify, float *value) {
	
	scanf("%d %d %f", code, quantify, value);
}

int main(void) {
		
	int code, quantify;
	float total_pay, value, product1, product2;

	data_entry(&code, &quantify, &value);

	product1 = amount_to_pay(quantify, value);
	
	data_entry(&code, &quantify, &value);

	product2 = amount_to_pay(quantify, value);

	total_pay = product1 + product2;

	printf("VALOR A PAGAR: R$ %.2f\n", total_pay);

	return 0;
}

