#include <stdio.h>
#include <stdlib.h>

/*
Un número triangular se define como la suma de los primeros n números naturales: Tn=1+2+3+...+n
Ejemplos:
- T1=1
- T2=1+2 = 3
- T3=1+2+3=6
- T4=1+2+3+4=10
Escribe una función recursiva que, dado un número nnn, retorne el número triangular correspondiente.
*/

int triangulo(int n, int suma);

int main(){
	int n, suma = 0;

	printf("Introduce un número para darte su valor triangular: ");
	scanf("%d", &n);

	int imprimir = triangulo(n, suma);
	printf("Esta es la suma triangular de %d: %d\n", n, imprimir);

	return EXIT_SUCCESS;
}

int triangulo(int n, int suma){
	// Caso base
	if(n <= 0){
		return suma;
	}

	// Caso recursivo
	suma += n;

	int ret = triangulo(n-1, suma);
	return ret;

}