#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;

	scanf("%d", &numero);
	if (numero > 0){
		printf("El número %d es positivo.\n", numero);
	} else if (numero < 0){
		printf("El número %d es negativo.\n", numero);
	} else if (numero == 0){
		printf("El número ingresado es cero.\n");
	}

return EXIT_SUCCESS;
}
