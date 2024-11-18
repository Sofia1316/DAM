#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){ //Aquí es dónde se van a realizar las preguntas
	float compra;
	printf("¿Cuál es el total de la compra realizada?:\n");
	scanf("%f", &compra);
	char rol;
	printf("¿Eres estudiante?¿Profesor?¿u otro?:\n");
	scanf("%s", &rol);

//Condiciones
	if (rol == 'E'){
		printf("%f\n", compra*0.85);
	} else if (rol == 'P'){
		printf("%f\n", compra*0.90);
	} else if (rol == 'O'){
		printf("No hay descuento, por lo que es:%0.f\n", compra);
	}

	return EXIT_SUCCESS;

}
