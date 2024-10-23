#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	
	//Suma de una serie de números dados por el usuario
	int n1;
	int resultado = 1;
	printf("Escribe un número:");
	scanf(" %d", &n1);

	for (int i = 1; i<=n1; i ++){	
		resultado = resultado + i;		
	}

	printf(" %d = %d\n" ,n1 ,resultado);

	return EXIT_SUCCESS;

}
