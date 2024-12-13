#include <stdio.h>
#include <stdlib.h>

/*
Pide al usuario que introduzca una cadena sin límite fijo, 
asígnale memoria de forma dinámica y luego imprímela.
*/

int main(){
	int memoria;
	int tamaño;
	char cadena;

	printf("Introduce el tamaño de tu palabra: ");
	scanf("%d", &tamaño);

	char * arr_cadena = (char *) malloc (1+tamaño*sizeof(int)); 
	// le sumo 1 ya que las cadenas de caracteres tienen al final un /0
	
	if(arr_cadena == NULL){
		printf("Error, no hay memoria\n");
		return EXIT_FAILURE;
	}
	printf("Introduce una palabra: ");
	scanf("%s", arr_cadena);

	printf("Introduce la memoria que quieres reservar: ");
	scanf("%d", &memoria);

	int * arr = (int *) malloc (memoria*sizeof(int));

	if(arr == NULL){
		printf("Error, no hay memoria\n");
		return EXIT_FAILURE;
	}

	printf("Palabra %s\n", arr_cadena);

free(arr_cadena);
free(arr);
return EXIT_SUCCESS;
}