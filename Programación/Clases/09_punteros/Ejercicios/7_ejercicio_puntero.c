#include <stdio.h>
#include <stdlib.h>

// Código con el objetivo de aprender a realizar operaciones aritméticas

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;

	printf("Elemento 1: %d\n", *p);
	p++;				// se suma 1
	printf("Elemento 2: %d\n", *p);
	p += 2;				// se suma 2
	printf("Elemento 4: %d\n", *p); // en este printf el puntero está apuntando al 4 del array
	printf("Elemento posición 0: %d\n", p[0]); //4 (porque al estar apuntando a 4, la posición 0 es 4)
	printf("Elemento posición -2: %d\n", p[-2]); //2 (si le restas 2, se queda en 2)
	printf("Elemento posición 1: %d\n", p[1]); //5 (porque como el elemento 0 es 4, el siguiente es 5)

return EXIT_SUCCESS;
}
