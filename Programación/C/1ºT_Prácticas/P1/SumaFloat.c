#include <stdio.h>
#include <stdlib.h>

int main(){
	float numero1;
	printf("pon un número decimal:");
	scanf("%f", &numero1);

	float numero2;
	printf("pon un número decimal:");
	scanf("%f", &numero2);

	float suma, resta, multiplicacion, division;
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;

	printf("El resultado de la suma es:%f\n", suma);
 	printf("El resultado de la suma es:%f\n", resta);
	 printf("El resultado de la suma es:%f\n", multiplicacion);
	  printf("El resultado de la suma es:%f\n",division);


	return EXIT_SUCCESS;
}
