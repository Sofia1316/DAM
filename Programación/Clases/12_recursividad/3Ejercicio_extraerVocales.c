#include <stdio.h>
#include <stdlib.h>

/*
Dada una cadena, crea una función recursiva que imprima una cadena que contenga únicamente las vocales de la original, 
en el mismo orden. (Puedes imprimir caracter a caracter)
*/

char * vocales(char * cadena, char * recuento, int posicion);

int main(){
	char cadena[20];
	char recuento[20];
	int posicion = 0;

	printf("Introduce una cadena para devolverte las vocales: ");
	scanf("%s", cadena);

	char * imprimir = vocales(cadena, recuento, posicion);
	printf("La cadena %s tiene %s vocales\n", cadena, imprimir);

	return EXIT_SUCCESS;
}

char * vocales(char * cadena, char * recuento, int posicion){
	// caso base
	if(cadena[posicion]=='\0'){ 
		return recuento;
	}

	// caso recursivo
	if(cadena[posicion]=='a' || cadena[posicion]=='e' || cadena[posicion]=='i' || cadena[posicion]=='o' || cadena[posicion]=='u' || cadena[posicion]=='A' || cadena[posicion]=='E' || cadena[posicion]=='I' || cadena[posicion]=='O' || cadena[posicion]=='U'){
		recuento[0] = cadena[posicion];
	}

	return vocales(cadena, recuento, posicion+1);
}