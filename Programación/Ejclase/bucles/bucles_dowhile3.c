#include <stdio.h>
#include <stdlib.h>

/*
 *	Autor: Sofía López
 */

int main (){
	int opcion; //No es necesari inicializarla porque el primer uso
		    //de la variable es de escritura
	
	do {
		//Código a ejecutar
		printf("Introduce una opción: (4 para salir)\n");
		scanf(" %d", &opcion);
	} while(opcion ! = 4);

	return EXIT_SUCCESS;
}
