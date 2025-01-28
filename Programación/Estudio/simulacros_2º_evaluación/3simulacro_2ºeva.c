#include <stdio.h>
#include <stdlib.h>

/*
Implemente un programa en C que realice las siguientes tareas:

1. Solicite al usuario un número entero positivo que determinará el tamaño de un array de `double`.
2. Reserve dinámicamente memoria para el array.
3. Inicialice el array con valores que sigan la siguiente fórmula:
	valor[i]=1 / (i+1)
4. Imprima en pantalla el contenido del array.
*/

int main(){
	int positivo;

	printf("Introduce un número positivo: ");
	scanf("%d", &positivo);

	if (positivo <= 0) {
        printf("El número tiene que ser positivo\n");
        return EXIT_FAILURE;
    }

	double * array = (double*) malloc (positivo*sizeof(double));
	if (array == NULL){
		printf("No hay memoria disponible");
		return EXIT_FAILURE;
	}

	for(int i = 0; i < positivo; i++){
		array[i]= 1 / (i+1);
	}

	printf("Contenido del array:\n");
    for (int i = 0; i < positivo; i++) {
        printf("array[%d] = %.2f\n", i, array[i]);
    }

free(array);
return EXIT_SUCCESS;
}