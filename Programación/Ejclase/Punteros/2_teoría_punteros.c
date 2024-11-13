#include <stdio.h>
#include <stdlib.h>

// EJEMPLO DE PASO DE UN ARGUMENTO A UNA FUNCIÓN VALOR

void incremental(int n){
	printf("Valor recibido: %d\n", n);
	n++;
	printf("Valor incrementado en la función: %d\n", n);
}

int main(){
	int valor = 10;
	incrementar(valor); //le estoy dando el valor 10 en realidad, no la variable 
	printf("Valor dentro de main: %d\n", valor); //imprime un 10

return EXIT_SUCCESS;
}
