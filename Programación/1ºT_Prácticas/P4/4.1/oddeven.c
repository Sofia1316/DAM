#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	int numero;
	printf("Introduce un número entero:");
	scanf("%d", &numero);

	char comprobación;
	comprobación = (numero % 2) ? 'I' : 'P' ;
	printf("Este número es:%c\n", comprobación);	

	return EXIT_SUCCESS;

}
