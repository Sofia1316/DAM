#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	int edad = 0;
		printf("Ingrese su edad:");
		scanf("%d", &edad);
	if (edad < 12){
		printf("Niño\n");
	} else if (edad > 12 && edad < 17){
		printf("Adolescente\n");
	} else if (edad > 18 && edad < 64){
		printf("Adulto\n");
	} else if (edad > 65){
		printf("Mayor\n");
	}	

	return EXIT_SUCCESS;

}
