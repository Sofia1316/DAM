#include <stdio.h>
#include <stdlib.h>

/*
Implementa una función recursiva que cuente cuántas consonantes tiene una cadena 
(por ejemplo, “Hola” tiene 2 consonantes: ‘H’ y ‘l’).
*/
int buscar(char * palabra, int posicion, int contador);

int main(){
	char palabra[5] = "hola";
	int contador = 0;
	int posicion = 0;

	int total = buscar(palabra,posicion,contador);

	printf("Número de consonantes de hola: %d\n", total);

return EXIT_SUCCESS;
}

int buscar(char * palabra, int posicion, int contador){
	//caso base
	if(palabra[posicion]=='\0'){ 
		return contador;
	}

	// recursividad
	if(palabra[posicion]!='a' && palabra[posicion]!='e' && palabra[posicion]!='i' && palabra[posicion]!='o' && palabra[posicion]!='u' && palabra[posicion]!='A' && palabra[posicion]!='E' && palabra[posicion]!='I' && palabra[posicion]!='O' && palabra[posicion]!='U'){
		contador++;
	}

	int ret = buscar(palabra,posicion+1,contador);
	return ret;
}
