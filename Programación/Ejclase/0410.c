#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 *
 *  Autor: Sofía López
 *
*/

//OPCIÓN 1:
void es_vocal(char letra){
	if (letra == 'a' 
	||letra== 'A' 
	||letra=='E'
	||letra=='e'
	||letra=='i'
	||letra=='I'
	||letra=='o'
	||letra=='O'
	||letra=='U'
	||letra=='u'){
	printf("La letra %c es una vocal\n", letra);
} else printf("La letra %c no es una vocal\n", letra);
}	

//OPCIÓN 2:
void calcular_area_figura(char figura){
	float radio, lado;
	if (figura == '1'){
	printf("Introduce el radio del círculo:");
	scanf("%f", &radio);
	float area = 3.1416 * radio*radio;  //Se puede poner después de la librería math.h para que lo entienda, area = M_PI * pow(radio,2);
	printf("El área del círculo con radio %f es %f\n", radio,area);
} else if (figura == '2'){ 
	printf("Introduce el lado del cuadrado:");
	scanf("%f", &lado);
	float area = lado*lado;
	printf("El área del cuadrado con lado %f es %f\n", lado,area);
} else { printf("Error en la función calcular_area_figura\n");
}
}

//OPCIÓN 3:
double calcular_promedio_tres_num(double num1, double num2, double num3){
	double suma = num1 + num2 + num3;
	double promedio = suma / 3;
	return promedio;
}

double calcular_promedio_cuatro_num(double num1, double num2, double num3,double num4){
	double suma = num1 + num2 + num3 + num4;
	double promedio = suma / 4;
	return promedio;
}	

void calcular_promedio(int valor){
	double num1, num2, num3, num4;
	if (valor == 3){
	printf("Introduce el número 1: ");
	scanf("%lf", &num1);
	printf("Introduce el número 2: ");
	scanf("%lf", &num2);
	printf("Introduce el número 3: ");
	scanf("%lf", &num3);
	double promedio = calcular_promedio_tres_num(num1, num2, num3);
	printf("El promedio de %f, %f y %f es %f\n", num1, num2, num3, promedio);
	} else if (valor == 4){
	printf("Introduce el número 1: ");
	scanf("%lf", &num1);
	printf("Introduce el número 2: ");
	scanf("%lf", &num2);
	printf("Introduce el número 3: ");
	scanf("%lf", &num3);
	printf("Introduce el número 4: ");
	scanf("%lf", &num4);
	double promedio = calcular_promedio_cuatro_num(num1, num2, num3, num4);
	printf("El promedio de %f, %f, %f y %f es %f\n", num1, num2, num3, num4, promedio);
	} else printf("Tienen que ser 3 o 4 números");
}

//OPCIÓN 4
void convertir_hora_24_a_12(int hora24){
	if (hora24 < 0 || hora24 > 23){
		printf("Hora no válida\n");
	} else if (hora24 <= 11){
		printf("La hora en formato de 12 horas es %d AM\n", hora24);
	} else if (hora24 == 12){
		printf("La hora en formato de 12 horas es 12 PM\n");
	} else if (hora24 <= 23){
		printf("La hora en formato de 12 horas es %d PM\n", hora24 -12);
}
}

//OPCIÓN 5
void es_primo(int numero){ 
	if (numero > 1 && numero < 10){
		if (numero == 2 || numero == 3 || numero == 5 || numero == 7){
			printf("El número %d es primo\n", numero);
		} else printf ("El número %d no es primo\n", numero);
	} else printf("El número debe ser menor de 10\n");
}

//OPCIÓN 6
void comparar_3_numeros(int a, int b, int c){
	int mayor;
	if (a==b && b==c){
		mayor = a;
		printf("Los tres son iguales\n");
	} 
	else { 
		if (a > b){
			mayor = a;
			if (a > c){
				mayor = a;
			} else if (a < c){
				mayor = c;
			} else printf("Dos números son iguales\n"); 
		}
		else if (a < b){
			mayor = b;
			if (b > c){
				mayor = b;
			} else if (b < c){
				mayor = c;
			} else printf("Dos números son iguales\n"); 
		}
		else if (a < c){
			mayor = c;
			printf("Dos números son iguales\n");
		}
		else { 
		mayor = a;
		printf("Dos números son iguales\n");
		}
	} 
	printf("El mayor número es %d\n", mayor);
}

int main(){
	printf("Selecciona una opción:\n");
	printf("1. Verificar si una letra es una vocal.\n");
	printf("2. Calcular el área de una figura (círculo o cuadrado).\n");
	printf("3. Calcular el promedio de 3 o 4 números.\n");
	printf("4. Convertir una hora en formato de 24 horas a 12 horas.\n");
	printf("5. Verificar si un número menor de 10 es primo.\n");
	printf("6. Comparar tres números.\n");
	printf("7. Salir.\n\n");

	int numero;
	printf("Opción: ");
	scanf("%d", &numero);

//EJECUTABLES
	switch (numero){
		case 1:
			char letra;
			printf("Introduce una letra:");
			scanf(" %c", &letra); //Se pone un espacio entre las comillas y el %c debido a que el scanf anterior tiene guardado un salto de línea
			es_vocal(letra);
			break;
		case 2:
			char figura;
			printf("¿Qué figura deseas calcular (círculo=1, cuadrado=2)? ");
			scanf(" %c", &figura);
			calcular_area_figura(figura);
			break;
		case 3:
			int valor;
			printf("¿Cuántos números deseas promediar (3 o 4)? ");
			scanf(" %d", &valor);
			calcular_promedio(valor);
			break;
		case 4:
			int hora24;
			printf("Introduce la hora en formato 24 horas:");
			scanf(" %d", &hora24);
			convertir_hora_24_a_12(hora24);
			break;
		case 5:
			int numero;
			printf("Introduce un número menor de 10:");
			scanf(" %d", &numero);
			es_primo(numero);
			break;
		case 6:
			int a, b, c;
			printf("Introduce el número 1:");
			scanf("%d", &a);
			printf("Introduce el número 2:");
			scanf("%d", &b);
			printf("Introduce el número 3:");
			scanf("%d", &c);
			comparar_3_numeros(a, b, c);
			break;
		case 7:
			return EXIT_SUCCESS;
		default:
			return EXIT_SUCCESS;
}
}
