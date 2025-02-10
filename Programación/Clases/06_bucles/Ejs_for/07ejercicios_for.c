#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	
	//Cuadrado de asteriscos
	int resultado = 0,num;
	printf("Escribe el tamaño del cuadrado:");
	scanf("%d", &num);
	for (int i = 1; i<=num; i ++){ //imprime una fila	
	for (int j = 1; j<=num; j ++){ //imprime una fila	
		printf("*"); 		
	}
		printf("\n");
	}
	printf("\n");

	return EXIT_SUCCESS;

}
