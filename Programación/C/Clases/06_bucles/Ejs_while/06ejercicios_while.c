#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero; 

	printf("Introduce un número:");
	scanf("%d", &numero);

	while (1){	//Bucle infinito hasta que recibe un nº negativo
	if (numero < 0){
		printf("El número es negativo\n");
		break;
	} else {
		printf("Introduce otro número: ");
		scanf ("%d", &numero);
	}
	}
	
	return EXIT_SUCCESS;
}
