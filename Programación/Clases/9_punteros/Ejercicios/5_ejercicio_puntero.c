#include <stdio.h>
#include <stdlib.h>

// EJEMPLO DE PASO DE UN ARGUMENTO A UNA FUNCIÓN POR REFERENCIA

//Quiero que realmente incremente la variable dada como argumento 
//(pasarle la dirección de memoria, no el 10 como pasaba antes, para así en el main se imprima un 11)
void incremental(int *n){ //de un puntero a un número entero
	printf("Valor recibido: %d\n", *n); //10
	// (*n)++;	--> se incrementa el contenido, no la dirección de memoria
	*n = *n + 1; 							
	printf("Valor incrementado en la función: %d\n", *n);
}

int main(){
	int valor = 10;
	incrementar(&valor); //le pongo un & porque quiero la dirección de memoria de valor 
	printf("Valor dentro de main: %d\n", valor); 
	// Imprime un 11, pero no pongo nada delante de valor porque mi función incrementar 
	// toca la dirección de memoria, y eso ya es para siempre. 
	
	// Es decir, la función incrementar lo que recibe es el contenido de esa dirección de memoria, 
	// y esta se encarga de modificar el contenido de esa dirección de memoria para siempre 

return EXIT_SUCCESS;
}
