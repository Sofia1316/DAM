#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 2: Números Pares e Impares con Bucles
Crea un programa que imprima todos los números del 1 al 50. 
Si un número es par, muestra “Es par” al lado del número. 
Si es impar, muestra “Es impar”. 
Utiliza un bucle for y un operador ternario para decidir qué texto mostrar.
*/

int main(){
	int numero = 0;

	for(int i = 0; i <= 50; i++){
		printf("Número %d es %s\n", i, (i % 2 == 0) ? "Par" : "Impar");
	}

return EXIT_SUCCESS;
}
