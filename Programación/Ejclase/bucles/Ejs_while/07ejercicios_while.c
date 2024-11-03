#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int suma = 0; 
	
	while(1){ //bucle infinito hasta que haya un nº impar
	printf("Introduce el primer número:");
	scanf("%d", &numero);
	
	if(numero % 2 != 0){ //el bucle se termina si el nº es impar
		printf("Es un número impar");
		break;
	} else 
	suma += numero;
	printf("Suma de los números pares es %d\n");
	
	return EXIT_SUCCESS;
}
