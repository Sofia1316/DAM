#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	
	//Imprimir números pares entre el 1 y 20
	for (int i = 0; i<21; i+=2){ 	//11 vueltas
		printf("%d," ,i);	//11 vueltas
		if (i<20)
			printf(",");	//10 vueltas
	}
		printf(".");

	printf("\n");

	//Otra solución
	int i = 0;
	for (i = 0; i<19; i+=2){ 	//10 vueltas
		printf("%d," ,i);	
	}
		printf("%d.", i);


	printf("\n");

	
	int i = 0;
	for (int i=0; i<19; i+=2){	//10 vueltas
		printf("%d," ,i);	//10 vueltas
	}
	//total de líneas ejecutadas: 10 + bucle
	//Al salir del bucle, i vale 20
	printf("%d." ,i);

	return EXIT_SUCCESS;

}
