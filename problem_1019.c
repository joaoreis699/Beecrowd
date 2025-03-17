#include <stdio.h>

// em 1 hora = 60 minutos
// em 1 minuto = 60 segundos
// então em 1 hora = 60*60 = 3600 segundos 

int main(void) {

	int hours, minutes,  secunds;

	scanf("%d", &secunds);

	hours = secunds/3600;

	minutes = (secunds%3600)/60;

	secunds = secunds%60;
	
	printf("%d:%d:%d\n",hours, minutes, secunds);

	return 0;
} 	
