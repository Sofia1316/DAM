#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){ //en primer lugar preguntaremos los datos
	float numero1;
	printf("Introduce el primer número:");
	scanf("%f", &numero1);
	float numero2;
	printf("Introduce el segundo número:");
	scanf("%f", &numero2);
	char operador;
	printf("Introduce el operador(+,-,*,/):");
	scanf("%c", &operador); 
// En este caso pongo un doble scanf ya que al contrario que los %f, los %c no guardan los saltos de línea y así mi código se compila correctamente 
	scanf("%c", &operador);

//Condiciones con switch
	switch (operador){
		case '+':
			float suma = numero1 + numero2;
			printf("El resultado de la suma es:%f\n", suma);
			break;
		case '-':
			float resta = numero1 - numero2;
			printf("El resultado de la resta es:%f\n", resta);
			break;
		case '*':
			float multiplicacion = numero1 * numero2;
			printf("El resultado de la multiplicación es:%f\n", multiplicacion);
			break;
		case '/':
			float division = numero1 / numero2;
			printf("El resultado de la división es:%f\n", division);
			break;
		default:
			printf("Operador no válido\n");


	return EXIT_SUCCESS;
	}
}
