#include <stdio.h>
#include <stdlib.h>

void contar_pares(int * );


int main(){
	int cantidad;

	puts("Introduzca la cantidad de números a procesar:");
	scanf("%d", &cantidad);

	int * numero = (int *)malloc(cantidad * sizeof(int));

	if(numero == NULL){
		puts("Error: Falta de memoria.");
		return EXIT_FAILURE;
	}

	contar_pares();

	free(numero);

	return EXIT_SUCCESS;
}

void contar_pares(){}
