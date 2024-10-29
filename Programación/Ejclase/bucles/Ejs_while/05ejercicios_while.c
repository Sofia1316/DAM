#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero = 0, numero_secreto = 38; 

	printf("Adivina el número(1-100):");
	scanf("%d", &numero);

	while (numero != numero_secreto){
		if (numero_secreto < numero){
			printf("El número es más pequeño");
		} else 
			printf("El número es más grande");
		}
	
		scanf("%d", &numero);	
	}

	printf("Has acertado\n");
	
	return EXIT_SUCCESS;
}
