#include <stdio.h>
#include <stdlib.h>

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
/*
	        // Imprimir el resultado de la suma
	        printf("Array de la suma:\n");
	        for(int i = 0; i < positivo; i++){
	            printf("%d\n", memoriaSuma[i]);
	        }*/

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