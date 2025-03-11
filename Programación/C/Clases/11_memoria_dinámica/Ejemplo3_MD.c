#include <stdio.h>
#include <stdlib.h> 

// DECLARA UN ARRAY DE TAMAÑO 3 USANDO MEMORIA DINÁMICA

int main(){
	int * arr = (int *) malloc (3*sizeof(int)); //poniendo el int * antes, haces un casting cambiando de un void a un int
	if(arr = NULL){
		printf("Error, no hay memoria\n");
		return EXIT_FAILURE;
	}

	// INICIALIZA LOS VALORES DEL ARRAY CON LOS NÚMEROS 1, 3 Y 5
	/* Podemos hacerlo
		arr[0] = 1;
		arr[1] = 3;
		arr[2] = 5;
	*/

	for (int i = 0; i < 3; ++i){
		arr[i] = 2*i+1;
	}

	// AMPLIACIÓN DEL ARRAY A 5 ELEMENTOS
	int * arr_ampliado =  (int *) realloc(arr, 5*sizeof(int));
	if(arr = NULL){
		free(arr); // Realloc no libera la memoria antigua, por lo que aunque se ejecute una segunda vez, esa memoria sigue estando ocupada
		printf("Error, no hay memoria para poder aumentar el array\n");
		return EXIT_FAILURE;
	}

	// Pero como esto es algo confuso, porque el array_ampliado ahora va a sustituir al arr inicial, en vez de dejar el arr
	// apuntando a la nada, podemos igualarlo y así nos olvidamos del arr ampliado
	arr = arr_ampliado;

	// Terminamos de inicializar 
	arr_ampliado[3] = 7;
	arr_ampliado[4] = 9;

	for (int i = 0; i < 5; ++i){
		printf("arr_ampliado[%d]: %d" i, arr_ampliado[i]);
	}

	// ¿Qué tengo que liberar?
	free(arr_ampliado);
	// free(arr); // da error, double free detected, indicando que esta memoria ya ha sido liberada
	return EXIT_SUCCESS;
}