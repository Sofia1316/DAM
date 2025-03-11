#include <stdio.h>
#include <stdlib.h>

/*
 *	Autor: Sofía López
 */

int main (){
	int opcion = 0;
	while(opcion !=4){
		//Código a ejecutar
		printf("Introduce una opción: (4 para salir)\n");
		scanf(" %d", &opcion);
	}

	return EXIT_SUCCESS;
}
