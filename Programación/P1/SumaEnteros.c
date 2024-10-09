#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1;
	printf("pon un número entero:");
	scanf("%d", &numero1);

	int numero2;
	printf("pon un número entero:");
       	scanf("%d", &numero2);

	int suma,resta,multiplicacion,division;
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;

	printf("El resultado de la suma es:%d\n", suma);
	printf("El resultado de la resta es:%d\n", resta);
	printf("El resultado de la multiplicación es:%d\n", multiplicacion);
	printf("El resultado de la division es:%d\n", division);
	
 return EXIT_SUCCESS;

}

	
