#include <stdio.h>
#include <stdlib.h>

/*
Reserva memoria para un arreglo de int según un tamaño dado por el usuario, 
solicita los valores y luego imprímelos.
*/


int main(){
	int num;

	printf("Introduce la memoria que quieres reservar: ");
	scanf("%d", &num);

	int * arr = (int *) malloc (num*sizeof(int));

	// POR SI ACASO
	if(arr == NULL){
		printf("Error, no hay memoria\n");
		return EXIT_FAILURE;
	}
	for(int i = 0; i < num; i++){
		printf("Introduce valores enteros: ");
		scanf("%d", arr);
		printf("Número %d: Valor %d\n", i, arr[i]);
	}
	
free(arr);
return EXIT_SUCCESS;
}