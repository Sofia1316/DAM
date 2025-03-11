#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	double raíz;
	int valor;

	double radio, area;

	//Parte del cálculo de una raíz cuadrada
	printf("Introduce un número para calcular su raíz\n");
	scanf("%d", &valor);
	raíz = sqrt(valor);
	printf("La raíz cuadrada de %d es %lf\n", valor, raíz);

	//Parte del cálculo del área del círculo
	printf("Introduce el radio del círculo para calcular su área\n");
	scanf("%lf", &radio);
	area = radio * radio * M_PI; //M_PI está definido en math.h, es una constante con el valor de pi
	printf("El área del círculo es:%lf\n", area);			 

return EXIT_SUCCESS;
}
