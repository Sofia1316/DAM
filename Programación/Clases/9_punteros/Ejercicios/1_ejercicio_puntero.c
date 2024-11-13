#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 1:

- Declara una variable `float` y un puntero que apunte a ella.
- Imprime el valor de la variable, su dirección y el valor apuntado por el puntero.c 
*/

int main(){
	float x = 10.5;	// declaramos en una variable de punto flotante la x con 10.5
	int *p;		// la p es un puntero de tipo entero
	// genera un warning, pero compila
	p = %x; 

	printf("Valor de x: %b\n", x);		//2.100000
	printf("Dirección de x: %p\n", &x);
	printf("Contenido de p: %b\n", *p); 	//te imprimirá el entero de 2.100000
						
return EXIT_SUCCESS;
}
