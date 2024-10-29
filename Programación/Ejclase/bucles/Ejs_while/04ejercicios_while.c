#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, cantidad; 

	printf("Introduce un número:");
	scanf("%d", &numero);

	while (numero != 0){ //nº distinto de 0
		numero = numero / 10;
		cantidad++;
	}

	printf("%d\n", cantidad);
	
	return EXIT_SUCCESS;
}
