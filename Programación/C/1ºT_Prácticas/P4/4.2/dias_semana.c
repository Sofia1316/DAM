#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int día;
	printf("Introduce un número(1-7):");
	scanf("%d", &día);
	printf("Resultado: ");

	switch (día){
		case 1:
			printf("Lunes\n");
			break;
		case 2:
			printf("Martes\n");
			break;
		case 3:
			printf("Miércoles\n");
			break;
		case 4:
			printf("Jueves\n");
			break;
		case 5:
			printf("Viernes\n");
			break;
		case 6:
			printf("Sábado\n");
			break;
		case 7:
			printf("Domingo\n");
			break;
		default:
			printf("Número inválido\n");

	}

	return EXIT_SUCCESS;
}
