#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 1: Calculadora de Operaciones Básicas
Escribe un programa que solicite al usuario dos números y una operación aritmética (+, -, *, /). 
Usa un condicional switch para realizar la operación correspondiente y mostrar el resultado. 
Si el usuario ingresa una operación inválida, muestra un mensaje de error.
*/

int main(){
	// Variables de preguntas
	int numero1;
	int numero2;
	char signo[3];

	// Variables de operaciones
	int suma;
	int resta;
	int multiplicación;
	int división;

	// Preguntas al usuario 
	printf("Introduce el primer número: ");
	scanf("%d", &numero1);
	printf("Introduce el segundo número: ");
	scanf("%d", &numero2);
	printf("Introduce el signo para operar: ");
	scanf("%s", signo);

	// Condicionales
	switch(signo[0]){
		case '+':
			suma = numero1 + numero2;
			printf("%d + %d = %d\n", numero1,numero2,suma);
			break;
		case '-':
			resta = numero1 + numero2;
			printf("%d - %d = %d\n", numero1,numero2,resta);
			break;
		case '*':
			multiplicación = numero1 * numero2;
			printf("%d * %d = %d\n", numero1,numero2, multiplicación);
			break;
		case '/':
			división = numero1 / numero2;
			printf("%d / %d = %d\n", numero1,numero2, división);
			break;
		default:
			printf("Signo no válido\n");
	
	}

return EXIT_SUCCESS;
}
