#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	int i = 0;
	for ( /*valor inicial*/ i = 0; i<5 /*condición*/ ; i = i+1 /*código a ejecutar entre vueltas*/){
		printf("%d", i);
	}
	printf("Terminado\n");
	
	/**
	 *	1) inicializo i=0
	 *	2) compruebo si i<5. Como se cumple, ejecuto el interior del bucle
	 *	3) printf
	 *	4) terminando el interior del bucle, ejecuto el código entre vueltas: i=i+1
	 *	5) vuelvo al punto 2. Compruebo su i<5. Se cumple porque i==1. Ejecuto el interior.
	 *	6) printf
	 *	7) Terminando el interior del bucle, ejecuto: i = i+1. Ahora i vale 2
	 *	8) Vuelvo a la condición: ¿i<5?, Sí. Interior del bucle
	 *	9) Printf
	 *	10) Terminando el interior del bucle, ejecuto i = i+1. Ahora 1 vale 3 
	 *	11) Comprobar la condición i<5. Sí. Interior del bucle
	 *	12) 13) i vale 4 14)...Hasta que llega un punto en donde el bucle sea mayor a 5 y este se termine, haciendo que se imprima el printf("Terminado").
	 **/


	for ( int i=0; i<100; i = i+2){
	/** 	Este bucle así escrito no imprime el 100 
	 *	En la última ejecución del bucle 1  	
	 * */
		printf("%d", i);
	}
	printf("Terminado\n");


	return EXIT_SUCCESS;

}
