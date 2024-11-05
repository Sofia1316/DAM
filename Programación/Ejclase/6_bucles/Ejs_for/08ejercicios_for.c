#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	
	//Contador divisores de un número
	int contador_divisores = 0,num;
	printf("Introduce un número:");
	scanf("%d", &num);
	for (int i = 1; i<=num; i ++){ //imprime una fila	
		if (num % i == 0){
		contador_divisores++;		
		}
	}
	printf("El número %d tiene %d divisores\n", num, contador_divisores);

	return EXIT_SUCCESS;

}
