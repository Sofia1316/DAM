#include <stdio.h>
#include <stdlib.h>

// EJERCICIO DE PASO DE UN ARGUMENTO A UNA FUNCIÓN POR REFERENCIA

void intercambiar(int numero1, *numero2, cambio){ 
	printf("Valor recibido: %d\n", numero1);
       	printf("Valor recibido: %d\n", *numero2);
	cambio = numero;	
	printf("Valor intercambiado en la función: %d\n", );
}

int main(){
	int numero1 = 20;
	int numero2 = 10;
	int cambio;
	intercambiar(&n3);
	// Intercambiar (n1 por n2)
	printf("%d", numero1); // 5
	printf("%d", numero2); // 10
	

return EXIT_SUCCESS;
}
