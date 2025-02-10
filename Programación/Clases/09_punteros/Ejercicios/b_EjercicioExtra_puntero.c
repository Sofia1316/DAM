#include <stdio.h>
#include <stdlib.h>

/*
**Objetivo:** Practicar la aritmética de punteros para recorrer y manipular arrays.

**Descripción:**

Declara un array de enteros con 5 elementos. Utiliza un puntero para recorrer el array y multiplicar cada elemento por 2. 
Muestra el contenido del array antes y después de la modificación.

**Puntos clave:**

- Uso de punteros para iterar sobre un array.
- Aplicación de la aritmética de punteros (`p++`, `p + i`).
*/


int main(){
	int arr[5] = {2, 4, 6, 8, 10};
	int *p = arr;
	
	for(int *p = arr; p <= &arr[4]; p++){
	printf("Elemento %d\n", *p);
	*p = *p + *p;
	printf("Elemento x 2; %d\n", *p);
	*p = arr[1];
	}

return EXIT_SUCCESS;
}
