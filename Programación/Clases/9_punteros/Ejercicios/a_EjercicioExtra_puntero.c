#include <stdio.h>
#include <stdlib.h>

/*
**Objetivo:** Comprender las diferencias prácticas entre el paso por valor y el paso por referencia.

**Descripción:**

Crea dos funciones:

- `void increment_by_value(int n)`: incrementa el valor de `n` en 1.
- `void increment_by_reference(int *n)`: incrementa el valor apuntado por `n` en 1.

En el programa principal, declara una variable entera, muestra su valor, llama a ambas funciones por separado y muestra el valor después de cada llamada para observar los efectos.
*/

void increment_by_value(int n){
	n = n + 1;
	printf("Valor incrementado por valor: %d\n", n);
}

void increment_by_reference(int *n){
	
}

int main(){
	// Declarar la función 
	int n = 10;
	int *p = &n;
	// Mostrar su valor
	increment_by_value
	printf("Valor inicial de n: %d\n", *p);

return EXIT_SUCCESS;
}
