#include <stdio.h>
#include <stdlib.h>

// EJERCICIO DE PASO DE UN ARGUMENTO A UNA FUNCIÓN POR REFERENCIA
// Crea una función que intercambie los valores de dos variables enteras usando punteros

void intercambiar(int *numero1, int *numero2){ 
	printf("Valor recibido: %d\n", *numero1);
       	printf("Valor recibido: %d\n", *numero2);
	int cambio = *numero1;
	*numero1 = *numero2;
	*numero2 = cambio;
	printf("Valor intercambiado en la función: %d\n", cambio);
}

int main(){
	int numero1 = 20;
	int numero2 = 10;
	// llamamos a la función void
	intercambiar(&numero1, &numero2);
	// Intercambiar (n1 por n2)
	printf("%d\n", numero1); // 10
	printf("%d\n", numero2); // 20
	

return EXIT_SUCCESS;
}
