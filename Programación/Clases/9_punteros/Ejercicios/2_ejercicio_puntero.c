#include <stdio.h>
#include <stdlib.h>

/*
Escribe un programa que calcule la suma de todos los elementos de un array utilizando punteros.
*/

int main(){
	int arr[5] = {10, 20, 30, 40, 50}; // Esto es equivalente a int *arr = {...
	int *p = arr; //no hay que poner un & porque 
	int suma;
	
	for (int i = 0; i < 5; i++) {
	suma += *(p+i); //se pone un p + i porque lo que quiero sumar es el 20, no el 10
	printf("La suma de todos los elementos del array es: %d", suma);
	}


return EXIT_SUCCESS;
}
