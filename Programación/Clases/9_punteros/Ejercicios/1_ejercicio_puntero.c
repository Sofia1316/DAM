#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 1:

- Declara una variable `float` y un puntero que apunte a ella.
- Imprime el valor de la variable, su dirección y el valor apuntado por el puntero.c 
*/

int main(){
	float x = 10.5;	// declaramos en una variable de punto flotante la x con el valor 10.5
	
	float *p;	// la p es un puntero de punto flotante, pero si es un int, compila, da un warning y se puede ejecutar, imprimiendo 1093140480
			// (este número es porque C interpreta los bits de la dirección de memoria de x) --> como si fueran datos de tipo int 
	
	p = &x; // La p almacena la dirección de x (este es un entero también), es decir, la p guarda la dirección de x 
		// Esto significa que p ahora "apunta" a x, es decir, p contiene la ubicación en la memoria donde x se encuentra.

	printf("Valor de x: %f\n", x);		// 10.500000
	printf("Dirección de x: %p\n", &x);	// 0x7ffc7e91703c (dirección de memoria en hexadecimal de x)
	printf("Contenido de p: %f\n", *p); 	// 10.500000
						
return EXIT_SUCCESS;
}
