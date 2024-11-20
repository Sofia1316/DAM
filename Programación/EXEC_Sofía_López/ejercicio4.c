#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int suma;

	scanf("%d", &numero);
	for (int i = 0; i <= numero; i++){
		suma += numero;
		printf("La suma de los primeros %d números es %d\n.", numero, suma);
	}

return EXIT_SUCCESS;
}
