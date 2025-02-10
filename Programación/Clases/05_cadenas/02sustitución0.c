#include <stdio.h>
#include <stdlib.h>

int main (){
	char srt1[6];
	char caracter;

	//Para pedir la palabra al usuario con un máximo de 30 caracteres
	printf("Introduce una palabra:");
	scanf("%s", srt1);
	
	//Palabra original
	printf("La palabra es %s", srt1);

	//Para pedir la sustitución de /0
	printf("¿Qué carácter quieres incluir?");
	scanf(" %c", &caracter);

	//Palabra cambiada
	srt1[5] = caracter;
	srt1[6] = '\0';
	printf("Palabra cambiada es: %s\n", srt1);

return EXIT_SUCCESS;
}
