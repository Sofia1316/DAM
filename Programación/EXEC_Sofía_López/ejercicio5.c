#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int suma;

	while(1){
		scanf("%d", &numero);
		if (numero > 0){
			suma += numero;
		} else { 
			printf("La suma de los números ingresados es %d.\n", suma); 
			return EXIT_SUCCESS;
		}
	
	}

return EXIT_SUCCESS;
}
