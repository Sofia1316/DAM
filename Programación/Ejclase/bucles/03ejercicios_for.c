#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	
	//Suma de los primeros diez números
	int i = 0;
	int suma = 0;

	for (i = 0; i<=10; i ++){	
		suma += i;	
	}

	printf("El resultado de la suma es: %d\n" ,suma);	

	return EXIT_SUCCESS;

}
