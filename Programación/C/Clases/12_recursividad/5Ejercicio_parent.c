#include <stdio.h>
#include <stdlib.h>

/*
Dada una cadena que contiene paréntesis (por ejemplo, "((()))(())", crea una función
recursiva que calcule la profundidad máxima de anidamiento (en el ejemplo la profundidad
es 3). [Solo puedes esperar cadenas como ((()))(()) o ((()))(((())))()(()) pero no 
“((()(()(())))” porque esas son para el siguiente ejercicio]
*/

int profundidad(char * cadena, int balance);

int main(){
	char * cadena = "((()))(())";
	int balance = 0;

	int imprimir = profundidad(cadena, balance);
	printf("Profundidad: %d\n", imprimir);

	return EXIT_SUCCESS;
}

int profundidad(char * cadena, int balance){
	// caso base
	static int profundidad_max = 0;
	if(*cadena == '\0'){ 
		return profundidad_max;
	}
	if(balance > profundidad_max){
		profundidad_max = balance;
	}

	// caso recursivo
	if(*cadena == '('){ // en el caso de meter el if de balance > p.m, se restará 1
		return profundidad(cadena+1, balance+1);
	} else if (*cadena == ')'){
		return profundidad(cadena+1, balance-1);
	}
}