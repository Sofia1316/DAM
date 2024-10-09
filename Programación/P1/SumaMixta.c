#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1;
	printf("pon un número entero:");
	scanf("%d", &numero1);

	int numero2;
	printf("pon un número entero:");
	scanf("%d", &numero2);

	float numero3 = numero1;
	float numero4 = numero2;

	float suma, resta, multiplicacion, division;
	suma = numero3 + numero4;
	resta = numero3 - numero4;
	multiplicacion = numero3 * numero4;
	division = numero3 / numero4;

	printf("El resultado de la suma es:%f\n", suma);
 	printf("El resultado de la suma es:%f\n", resta);
	 printf("El resultado de la suma es:%f\n", multiplicacion);
	  printf("El resultado de la suma es:%f\n",division);


	return EXIT_SUCCESS;
}
