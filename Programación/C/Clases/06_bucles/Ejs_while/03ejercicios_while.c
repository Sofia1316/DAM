#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, cociente, resto = 0; 

	printf("Introduce un número:");
	scanf("%d", &numero);

	do {
		cociente = numero / 10;
		resto = resto * 10 + (numero % 10);
		acumulado = acumulado + resto;
		numero = cociente;
	} while (cociente != 0); //nº distinto de cero

	printf("%d\n", resto);

	}
	
	return EXIT_SUCCESS;
}
