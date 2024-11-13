#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 *
 * Autor: Sofía López
 *
 */

int calcularRaíz(){
	int valor;
	double raíz;
	//parte del cálculo de una raíz cuadrada
	printf("La raíz cuadrada de %d es %lf\n", valor, raíz);
	scanf("%d", &valor);
	raíz = sqrt(valor);
	printf("La raíz cuadrada de %d es %lf\n", valor, raíz);
	return 0; //Como todo ha ido bien, devuelvo un 0,
}

 void calcularArea(){
	double radio,area;
	//Parte del cálculo del área del círculo
	printf("Introduce el radio del círculo para calcular el área\n");
	scanf("%lf", &radio);
	area = radio * radio * M_PI; //M_PI está definido en un math.h, es una constante con el valor de pi
	printf("El área del círculo es:%lf\n", area);	

}

int main(){
	calcularRaíz();
	calcularRaíz();
	calcularRaíz();

	calcularArea();
	calcularArea();
	calcularArea();	

return 0;
}
