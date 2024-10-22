#include <stdio.h>
#include <stdlib.h>

int main (){
	char srt1[10];
	char srt2[10];

	//Para pedir la palabra 1 al usuario con un máximo de 10 caracteres
	printf("Introduce una palabra:");
	scanf(" %s", srt1);
	//Para pedir la palabra 2 al usuario con un máximo de 10 caracteres
	printf("Introduce una palabra:");
	scanf(" %s", srt2);
	
	//Condicionales
	if (srt1 == srt2){
		printf("Las palabras son %s y %s\n", srt1,srt2);	
	} else if (srt1 < srt2){
		printf("La palabra %s es mayor a %s\n", srt1,srt2);
	} else printf("nada");
	

return EXIT_SUCCESS;
}
