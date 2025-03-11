#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 5: FizzBuzz Modificado
Crea un programa que imprima los números del 1 al 100. 
Si un número es divisible por 3, imprime “Fizz”. 
Si es divisible por 5, imprime “Buzz”. Si es divisible por ambos, imprime “FizzBuzz”. 
Usa un bucle for y condicionales anidados.
*/

int main(){
	for(int i = 1; i <= 100; i++){
		if(i % 3 == 0){
			printf("Fizz\n");
		} else if (i % 5 == 0){
			printf("Buzz\n");
		} else if (i % 3 == 0|| i % 5 == 0){
			printf("FizzBuzz\n");
		} else { printf("%d\n", i); }
	}

return EXIT_SUCCESS;
}
