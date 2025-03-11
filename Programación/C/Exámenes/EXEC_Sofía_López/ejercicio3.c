#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;

	scanf("%d", &numero);
	printf("El número %d es %s.\n", numero, (numero % 2 == 0) ? "par" : "impar");

return EXIT_SUCCESS;
}
