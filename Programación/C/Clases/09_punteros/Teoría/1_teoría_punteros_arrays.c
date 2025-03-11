#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[5] = {10, 20, 30, 40, 50}; // Esto es equivalente a int *arr = {...
	int *p = arr; //no hay que poner un & porque 
	int suma;

	// Aunque haya hecho p + 1, +2 ..., las direcciones se van sumando de 4 en 4 (porque un entero ocupa 4)
	for (int i = 0; i < 5; i++) {
	printf("Elemento %d: %d (en la dirección %p)\n", i, *(p + i),p+i);
	}

	// Lo mismo pero con otro tipo de dato, el long, que en este caso en vez de 4 serán 8
	long long_arr[5] = {10, 20, 30, 40, 50};
	long *long_p = long_arr;
	
	for (int i = 0; i < 5; i++) {
	printf("Elemento %d: %ld (en la dirección %p)\n", i, *(long_p + i),long_p+i);
	}

	return 0;
}
