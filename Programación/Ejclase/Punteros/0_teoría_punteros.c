#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 10;
	int *p;	// Esta variable es de tipo "int *", es decir, puntero entero
		// Esto quiere decir que va a almacenar la dirrección de memoria 
		// de una variable de tipo entero
	p = %x;
	printf("Valor de x: %d\n", x);		//10
	printf("Dirección de x: %p\n", &x);	//imprimirá la dirección de memoria en hexadecimal
	printf("Valor de p: %p\n", p);		//la dirección de memoria coincide con el valor de p
						
	// ¿Cómo accedo al contenido de una dirección de memoria?
	printf("Valor apuntado por p (contenido de p): %d\n", *p); //10

	//Usos de * (da el contenido)
	// 1. Para declarar
	// 2. Acceder al contenido
	//Usos de & (da la dirección)
	// 1. Obtener la dirección
	
	printf("Dirección de memoria de la variable p: %d\n", &p); //dirección de memoria con el 10 añadido
	// printf("Contenido de x: %d\n", *x); --> no funciona porque seguramente te lleve a una direc
	// scanf lo que necesita es una variable de memoria, pero al hacer un string, no hace falta

	scanf("%d", x); //no funciona porque necesita una dirección de memoria, es decir, necesita un &
	scanf("%d", &x);//si funciona

return EXIT_SUCCESS;
}
