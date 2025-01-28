#include <stdio.h>
#include <stdlib.h>

/*
1. Escriba un programa en C que realice las siguientes acciones:
    - Solicite al usuario un número entero positivo, que determinará el tamaño de un array de enteros.
    - Reserve memoria dinámicamente para el array.
    - Solicite al usuario que ingrese los valores para llenar el array.
    - Libere la memoria utilizada correctamente.

**Nota:** Se valorará la correcta reserva y liberación de memoria. No es necesario imprimir nada en pantalla.
*/

int main(){
	int positivo;

	printf("Introduce un número positivo: ");
	scanf("%d", &positivo);

	int * array = (int*) malloc (sizeof(int) * positivo);
	if (array == NULL){
		printf("No hay memoria disponible");
		return EXIT_FAILURE;
	}

	for(int i = 0; i < positivo; i++){
		printf("Introduce valores para rellenar el array: ");
		scanf("%d", &array[i]);
	}

	for(int i = 0; i < positivo; i++){
		printf("Valor introducido: %d\n", array[i]);
	}

free(array);
return EXIT_SUCCESS;
}