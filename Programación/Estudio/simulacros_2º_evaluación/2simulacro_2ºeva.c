#include <stdio.h>
#include <stdlib.h>

/*
Implemente un programa en C que realice las siguientes tareas:

1. Solicite al usuario un número entero positivo que determinará el tamaño de un array de números de enteros.
2. Cree un array de enteros con el tamaño especificado y rellénalo con múltiplos de un número a tu elección.
3. Repetir el proceso para un segundo array diferente.
4. Preguntar al usuario si quiere concatenar o sumar coordenada a coordenada.
    1. En caso de sumar coordenada a coordenada, el programa deberá crear un array nuevo del tamaño necesario en el que almacenar la suma posición a posición de los 2 arrays.
    2. En caso de querer concatenar, el programa deberá crear un array nuevo del tamaño necesario para rellenarlo, primero con un array y después con el otro. 
5. Imprima en pantalla el resultado.
6. Terminar.
*/

int main(){
	// ARRAY 1
	int positivo;

	printf("Introduce un número positivo: ");
	scanf("%d", &positivo);

	int * memoria = (int*) malloc (sizeof(int)*positivo);
	if (memoria == NULL){
		printf("No hay memoria disponible");
		return EXIT_FAILURE;
	}

	for(int i = 0; i < positivo; i++){
		printf("Introduce un mútiplo para rellenar el array: ");
		scanf("%d", &memoria[i]);
	}
	for(int i = 0; i < positivo; i++){
		printf("Array 1, valor %d:\n", i);
		printf("%d\n", memoria[i]);
	}
	printf("\n");

	// ARRAY 2
	int positivo2;

	printf("Introduce un número positivo: ");
	scanf("%d", &positivo2);

	int * memoria2 = (int*) malloc (sizeof(int)*positivo2);
	if (memoria2 == NULL){
		printf("No hay memoria disponible");
		return EXIT_FAILURE;
	}

	for(int j = 0; j < positivo2; j++){
		printf("Introduce un mútiplo para rellenar el array: ");
		scanf("%d", &memoria2[j]);
	}
	for(int i = 0; i < positivo2; i++){
		printf("Array 2, valor %d:\n", i);
		printf("%d\n", memoria2[i]);
	}
	printf("\n");


	printf("\n");
	int respuesta;
	printf("Una vez realizado esto, quieres concatenar o sumar coordenada a coordenada?:\n");
	printf("CONCATENAR = 1 //// SUMAR = 2\n");
	scanf("%d", &respuesta);

	switch(respuesta){
		case 1: 
			int tamaño_nuevo = positivo + positivo2;

			int * total = (int*) malloc (sizeof(int)*tamaño_nuevo);
			if (total == NULL){
				printf("No hay memoria disponible");
				return EXIT_FAILURE;
			}

			// RELLENAR CON EL PRIMER ARRAY
			for(int i = 0; i < positivo; i++){
				total[i] = memoria[i];
			}
			// RELLENAR CON EL SEGUNDO ARRAY
			for(int i = 0; i < positivo2; i++){
				total[positivo+i] = memoria2[i];
			}
			printf("\n");
			printf("Array concatenado:\n");
			for (int i = 0; i < tamaño_nuevo; ++i){
				printf("%d\n", total[i]);
			}

			free(total);
			break;

		case 2:
			// Debemos de comprobar que los array son del mismo tamaño, ya que podría haber o desbordamiento o que no funcione corrrectamente el programa
			if (positivo != positivo2) {
                printf("Los arrays deben tener el mismo tamaño para sumarlos\n");
                return EXIT_FAILURE;
            }

			// Crear el nuevo array para la suma
	        int *memoriaSuma = (int*) malloc(sizeof(int) * positivo);
	        if (memoriaSuma == NULL){
	            printf("No hay memoria disponible para la suma\n");
	            return EXIT_FAILURE;
	        }

	        // Sumar posición a posición
	        for(int i = 0; i < positivo; i++){
	            memoriaSuma[i] = memoria[i] + memoria2[i];
	            printf("Suma %d:\n", i);
	            printf("%d\n", memoriaSuma[i]);
	            printf("\n");
	        }
	      
	        free(memoriaSuma);
	        break;

	    default:
	    	printf("Opción no válida");
	    	break;

			}

free(memoria);
free(memoria2);

return EXIT_SUCCESS;
}