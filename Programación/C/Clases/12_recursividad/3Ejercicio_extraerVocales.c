#include <stdio.h>
#include <stdlib.h>

/*
Dada una cadena, crea una función recursiva que imprima una cadena que contenga únicamente las vocales de la original, 
en el mismo orden. (Puedes imprimir caracter a caracter)
*/

char * vocales(char * cadena, char * recuento, int posicion, int aumento);

int main(){
	char cadena[20];
	char recuento[20];
	int posicion = 0; // para que aumente la posición de la cadena
	int aumento = 0; // para que aumente la posición del recuento

	printf("Introduce una palabra para devolverte las vocales: ");
	scanf(" %s", cadena);

	char * imprimir = vocales(cadena, recuento, posicion, aumento);
	printf("La cadena %s tiene %s vocales\n", cadena, imprimir);

	return EXIT_SUCCESS;
}

char * vocales(char * cadena, char * recuento, int posicion, int aumento){
	// caso base
	if(cadena[posicion]=='\0'){ 
		recuento[aumento] = '\0'; // al igual que hay que almacenar las vocales, el \0 también para indicar que la cadena ha terminado y así evitar acceder a memoria
		return recuento;
	}

	// caso recursivo
	if(cadena[posicion]=='a' || cadena[posicion]=='e' || cadena[posicion]=='i' || cadena[posicion]=='o' || cadena[posicion]=='u' || cadena[posicion]=='A' || cadena[posicion]=='E' || cadena[posicion]=='I' || cadena[posicion]=='O' || cadena[posicion]=='U'){
		recuento[aumento] = cadena[posicion];
		aumento++;
	}

	return vocales(cadena, recuento, posicion+1, aumento);
}