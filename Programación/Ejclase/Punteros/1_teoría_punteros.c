#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[5] = {10, 20, 30, 40, 50}; // Esto es equivalente a int *arr = {...
	int *p = arr; //no hay que poner un & porque ya es un entero
	int suma;

	// Aunque haya hecho p + 1, +2 ..., las direcciones se van sumando de 4 en 4
	for (int i = 0; i < 5; i++) {
	printf("Elemento %d: %d (en la dirección %p)\n", i, *(p + i),p+i);
	}

	// Lo mismo pero con otro tipo de dato, el long, que en este caso en vez de 4 serán 8
	long long_arr[5] = {10, 20, 30, 40, 50};
	long *long_p = long_arr;
	
	for (int i = 0; i < 5; i++) {
	printf("Elemento %d: %ld (en la dirección %p)\n", i, *(long_p + i),long_p+i);
	}

	// Apartado de suma los elementos de un array
	for (int i = 0; i < 5; i++) {
	suma += *(p+i); //se pone un p + i porque lo que quiero sumar es el 20, no el 10
	printf("La suma de todos los elementos del array es: %d", suma);
	}

	// Apartado de los números negativos	
	long arr[5] = {10, 20, 30, 40, 50};
	// ¿p en donde tengo que inicializarlo?
	int *p = ;
	//int *p = arr+5; --> la más correcta es esta, porque se mueve por encima supuestamente, ya que no coge ninguna dirección como tal, por lo que no accedes a ninguna dirección que no es tuya
	//int *p = &arr[5]; --> cuando accedes a esto, accedes a la sexta posición (dirección) y la coges, pero si entras en esa dirección puede ser que el código se rompa (puede estar reservada para otra cosa)

	for (int i = 5; i > 0; i--) {
		printf("Elemento %d: %d\n", i, *(p - i)); //te compila bajando del cero
	}

	return 0;
}
