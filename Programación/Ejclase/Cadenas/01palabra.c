#include <stdio.h>
#include <stdlib.h>

int main (){
	char srt1[4];
	char srt2[10];
	char caracter[10];
	int posicion;

	//Para pedir la palabra al usuario con un máximo de 12 caracteres
	printf("Introduce una palabra:");
	scanf("%s", srt1);
	
	//Para saber qué caracter se desea cambiar
	printf("¿Qué posición desea modificar?");
	scanf("%d", &posicion);
	posicion = -1;

	//Por cuál caracter se quiere cambiar 
	printf("¿Qué carácter desea poner?:");
	scanf("%c", &caracter);

	//Trasformación de la palabra
	srt1[posicion] = caracter;

	//Resultado
	printf("La palabra nueva es:%s\n", srt2);

return EXIT_SUCCESS;
}
