#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float suma(float numero1, float numero2){
	return numero1+numero2;
}

float resta(float numero1, float numero2){
	return numero1-numero2;
}

float multiplicacion(float numero1, float numero2){
	return numero1*numero2;
}

float division(float numero1, float numero2){
	return numero1/numero2;
}

int main(){
	char operacion;	
	printf("¿Qué tipo de operación quieres hacer?:\n");
	scanf("%c", &operacion);
	
	float numero1, numero2;
	printf("Escribe el primer número:\n");
	scanf("%f", &numero1);
	printf("Escribe el segundo número;\n");
	scanf("%f", &numero2);
	
	
//Operaciones	
	double resultado_suma = suma(numero1,numero2);
	double resultado_resta = resta(numero1,numero2);
	double resultado_multiplicacion = multiplicacion(numero1,numero2);
	double resultado_division = division(numero1,numero2);
	
//Condiciones	
	if (operacion == 'S'){ //SUMA
	printf("El resultado de la suma es:%f\n", resultado_suma);
		
	} else if (operacion == 'R') { //RESTA
 	printf("El resultado de la resta es:%f\n", resultado_resta);

	} else if (operacion == 'M') { //MULTIPLICACIÓN
	 printf("El resultado de la multiplicacion es:%f\n", resultado_multiplicacion);
	
	} else if (operacion == 'D') { //DIVISIÓN
	  printf("El resultado de la division es:%f\n", resultado_division);
	}

 	return 0;
}
