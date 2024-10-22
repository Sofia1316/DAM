#include <stdio.h>
#include <stdlib.h>

int main (){
	char srt1[30];
	char srt2;
	int posicion;

	//Para pedir la palabra al usuario con un máximo de 30 caracteres
	printf("Introduce una palabra:");
	scanf("%s", srt1);
	
	//Para saber qué posición de caracter se desea cambiar
	printf("¿Qué posición desea modificar?");
	scanf("%d", &posicion);

	//Por cuál caracter se quiere cambiar 
	printf("¿Qué carácter desea poner?:");
	scanf(" %c", &srt2);

	//Trasformación de la palabra
	srt1[posicion] = srt2;

	//Resultado
	printf("La palabra nueva es:%s\n", srt1);

return EXIT_SUCCESS;
}
