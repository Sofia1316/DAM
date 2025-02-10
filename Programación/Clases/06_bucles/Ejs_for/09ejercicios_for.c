#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */


int main(){
	
	//Imprimir los primeros 10 números de Fibonacci:
	//0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
	//  aa, a, n
	//     aa, a, n
	int num;
	int anterior_del_anterior = 0;
	int anterior = 1;
	
	for (int i = 1; i<=num; i ++){	
		num = anterior + anterior_del_anterior;
		printf("%d," ,num);
		anterior_del_anterior = anterior;
		anterior = num;		
		}
	printf("%d", anterior + anterior_de_anterior);
	printf("\n");

	return EXIT_SUCCESS;
}
