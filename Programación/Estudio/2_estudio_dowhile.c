#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 3: Juego de Adivinanza con do-while
Desarrolla un juego en el que el usuario debe adivinar un número aleatorio entre 1 y 100. 
El programa debe seguir pidiendo al usuario que adivine hasta que acierte, usando un bucle do-while. 
Si el número es menor al que se busca, imprime “Más grande”; si es mayor, imprime “Más pequeño”.
*/

int main(){
	int numero_secreto = 45;
	int numero_usuario;
	int i;

	do{
	printf("Intenta adivinar el número secreto:");
	scanf("%d", &numero_usuario);
	
		if (numero_usuario == numero_secreto){
			printf("Has acertado\n");
			break;
		} else if (numero_usuario < numero_secreto) {
			printf("El número introducido es menor\n");
		} else if (numero_usuario > numero_secreto) {
			printf("El número introducido es mayor\n");
		} else if (numero_usuario < 0 || numero_usuario > 100){
			printf("Número inválido");
		}
	} while(i <= 100);	


return EXIT_SUCCESS;
}
