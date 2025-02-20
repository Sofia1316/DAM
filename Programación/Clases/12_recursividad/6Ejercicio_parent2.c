#include <stdio.h>
#include <stdlib.h>

/*
Dada una cadena que solo contiene los caracteres '(' y ')', determina recursivamente si 
cada paréntesis abierto tiene su correspondiente paréntesis cerrado en el orden 
correcto. Por ejemplo, "(()())" está balanceada, mientras que "(()" no.
*/

int profundidad(char * cadena, int balance);

int main(){
	char cadena[11];
	int balance = 0;

	printf("Introduce una cadena de paréntesis aleatorios: ");
	scanf("%s", cadena);

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