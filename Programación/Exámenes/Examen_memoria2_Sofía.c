#include <stdio.h>
#include <stdlib.h>

int main(){
	int positivo;

	printf("Introduce el tamaño del array: ");
	scanf("%d", &positivo);

	// ARRAY 1
	int * memoria = (int*) malloc (sizeof(int)*positivo);
	if(memoria == NULL){
		printf("Error, no hay memoria disponible");
		return EXIT_FAILURE;
	}

	for(int i = 0; i < positivo; i++){
		printf("Introduce un múltiplo de un número para rellenar el primer array: ");
		scanf("%d", &memoria[i]);
	}

	for(int i = 0; i < positivo; i++){
		printf("Primer array, valor %d: ", i);
		printf("%d\n", memoria[i]);
	}
	printf("\n");

	int positivo2;

	printf("Introduce el tamaño del segundo array: ");
	scanf("%d", &positivo2);

	// ARRAY 2
	int * memoria2 = (int*) malloc (sizeof(int)*positivo2);
	if(memoria2 == NULL){
		printf("Error, no hay memoria disponible");
		return EXIT_FAILURE;
	}

	for(int i = 0; i < positivo2; i++){
		printf("Introduce un múltiplo de un número para rellenar el segundo array: ");
		scanf("%d", &memoria2[i]);
	}

	for(int i = 0; i < positivo2; i++){
		printf("Segundo array, valor %d: ", i);
		printf("%d\n", memoria2[i]);
	}
	printf("\n");

	// PREGUNTAMOS PARA VER QUÉ OPCIÓN QUIERE ELEGIR
	int respuesta;

	printf("Con las cifras introducidas en ambos arrays, quieres concatenarlos o sumarlos: \n");
	printf("CONCATENAR = 1\n");
	printf("SUMAR = 2\n");
	scanf("%d", &respuesta);
	printf("\n");

	switch(respuesta){
		case 1:
			int nuevo_tamaño = positivo + positivo2;

			int * concatenar = (int *) malloc (sizeof(int) * nuevo_tamaño);
			if(concatenar == NULL){
				printf("Error, no hay memoria disponible");
				return EXIT_FAILURE;
			}

			// RELLENAMOS CON EL PRIMER ARRAY
			for(int i = 0; i < positivo; i++){
				concatenar[i] = memoria[i];
			}

			// RELLENAMOS CON EL SEGUNDO ARRAY
			for(int i = 0; i < positivo2; i++){
				concatenar[i+positivo] = memoria2[i]; // le sumo positivo porque quiero que se "rellene" a continuación del array 1
			}
			printf("\n");
			printf("Array concatenado: \n");
			for(int i = 0; i < nuevo_tamaño; i++){
				printf("%d\n", concatenar[i]);
			}

			free(concatenar);
			break;

		case 2:
			int * memoriaSuma = (int *) malloc(sizeof(int) * positivo);
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
			printf("Opción no válida\n");
			break;
	}


free(memoria);
free(memoria2);
return EXIT_SUCCESS;
}