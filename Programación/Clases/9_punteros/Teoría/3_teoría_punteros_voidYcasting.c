#include <stdio.h>
#include <stdlib.h>

// Casting: es convertir una variable de un tipo a otro (pero se necesita ser explícito para que funcione)
// Poniendo un casting explícito se hace:

// ptr será lo que hay que imprimir (y apunta a una dirección de memoria desconocida)
// tipo indica el tipo de variable
void printValor(void * ptr, char tipo){
	switch(tipo){
		case 'd':
			printf("Double %ld\n", *((double *)ptr)); // Cambias de puntero void a uno double, 
								  // pero hay que poner ese * al principio para 
								  // poder acceder al contenido del puntero
			break;
		case 'i':
			printf("Entero: %d\n", *((int *)ptr)); // Cambias de un puntero void a uno int
							       // (int *) --> esto es el casting y lo de fuera es para
							       // acceder al contenido de ptr
			break;
		default:
			printf("Error");
	}
}

int main(){
	double num = 2.1;
	void * dir = &num; 
		// Puedes crear una variable void que almacena la dirección de memoria de num
	printValor(dir, 'd'); 		
	printValor(dir, 'i'); 		

	// printf("%ld\n", sizeof(dir));

	// OBJETIVO DE ESTO
	// Te permite generalizar la lógica y solo dividir las direcciones de memoria que necesitas para cada cosa

return EXIT_SUCCESS;
}
