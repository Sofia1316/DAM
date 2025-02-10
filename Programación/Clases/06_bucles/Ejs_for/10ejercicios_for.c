#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	
	//Triángulo de números
	int num;
	printf("Escribe el tamaño del cuadrado:");
	scanf("%d", &num);
	for (int fila = 1; fila<=num; fila ++){ //imprime una fila	
	for (int columna = 1; columna<=fila; columna ++){ //imprime una fila
			printf("%d", columna); 		
		}
		printf("\n");
	}
	printf("\n");

	return EXIT_SUCCESS;

}
