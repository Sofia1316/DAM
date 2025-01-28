#include <stdio.h>
#include <stdlib.h>

int main(){
	int positivo;

	printf("Introduce el número positivo: ");
	scanf("%d", &positivo);

	// Creamos un malloc para poder asignar una memoria dinámica
	float * memoria = (float*) malloc (sizeof(float) * positivo);
	if(memoria == NULL){
		printf("Error, no hay memoria para poder aumentar el array\n");
		return EXIT_FAILURE;
	}

	for(int i = 0; i < positivo; i++){
		memoria[i] = (float)i / positivo;
		printf("Posición %d/%d = %lf\n", i, positivo, memoria[i]);
	}

	positivo = positivo / 2;

	// Recortamos el tamaño del array con un realloc
	float * recorte = (float*) realloc (memoria, positivo * sizeof(float));
	if(recorte == NULL){
		printf("Error, no hay memoria para poder aumentar el array\n");
		return EXIT_FAILURE;
	}

	printf("\n");

	memoria = recorte;

	printf("Lista recortada por la mitad: \n");
	for(int i = 0; i < positivo; i++){
		printf("Posición %d/%d = %lf\n", i, i, recorte[i]);
	}
	
free(recorte);
return EXIT_SUCCESS;
}