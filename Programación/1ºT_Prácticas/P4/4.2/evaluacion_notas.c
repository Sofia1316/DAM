#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	int nota;
	char resultado;
	printf("Introduce la calificación:");
	scanf("%d", &nota);

	nota >= 5 ? printf("Resultado: Aprobado\n") : printf("Resultado: Suspenso\n");

	return EXIT_SUCCESS;
}
