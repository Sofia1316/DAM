#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;

	do {
	scanf("%d", &numero);
	
	if (numero <= 10 && numero >= 1){
		printf("Has ingresado el número %d.\n", numero);
		break;
	} else { 
		printf("Número no válido.\n");
	       	continue;	
	}
	} while(numero >= 0);
return EXIT_SUCCESS;
}
