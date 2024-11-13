#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 10; 	// Damos un valor entero a x, en este caso, 10
	
	int *p;		// Declaramos un puntero 'p' (es un puntero de tipo entero) y puede almacenar la dirección de una variable tipo int
			// Esto quiere decir que va a almacenar la dirección de memoria de p
	
	p = &x;		// La p almacena la dirección de x (este es un entero también) 
			// Esto significa que p ahora "apunta" a x, es decir, p contiene la ubicación en la memoria donde x se encuentra.
	
	//Usos de * (da el contenido que tiene la variable)
	// 1. Para declarar
	// 2. Para acceder al contenido
	//Usos de & (da la dirección de memoria de la variable)
	// 1. Obtener la dirección
	
	// Comprobación de los distintos casos de impresión
	printf("Valor de x: %d\n", x); 		// 10
	printf("Dirección de x: %p\n", &x);	// Imprimirá la dirección de memoria en hexadecimal (lo mismo)
	printf("Valor de p: %p\n", p);		// La dirección de memoria coincide con el valor de p (lo mismo)
	printf("Contenido de p: %d\n", *p);	// Para acceder al contenido de una dirección de memoria, en este caso, de p (que es 10)	
	printf("Dirección de p: %p\n", &p); 	//dirección de memoria de p con el 10 añadido

	// printf("Contenido de x: %d\n", *x); --> no funciona porque x no es un puntero, si no que es una variable de tipo entero
	// y seguramente te lleve a una dirección aleatoria del ordenador

	// scanf lo que necesita es una variable de memoria (como un &), pero al hacer un string (cadena o puntero) no hace falta

	scanf("%d", x); 	// no funciona porque necesita una dirección de memoria, es decir, necesita un &
	scanf("%d", &x);	// si funciona --> porque aunque x es una variable de tipo int, tiene el & que es una dirección de memoria
	scanf("%d", p);		// si funciona --> porque p es un puntero, entonces ahí ya viene "incluida" la dirección de memoria

return EXIT_SUCCESS;
}
