#include <stdio.h>

int main(void) {

	float n1, n2, n3, n4;

	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	float average = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;

	printf("Media: %.1f\n", average);

	if(average >= 7) {

		printf("Aluno aprovado.\n");

	} else if(average < 5) {

		printf("Aluno reprovado.\n");
	
	}else {

		printf("Aluno em exame.\n"); 

		float exam;

		scanf("%f", &exam);

		printf("Nota do exame: %.1f\n", exam);

		average = (average + exam) / 2;

		if(average >= 5) {

		printf("Aluno aprovado.\n");

		} else {

		printf("Aluno reprovado.\n");
		
		}

		printf("Media final: %.1f\n", average);
	}

	return 0;
}	
