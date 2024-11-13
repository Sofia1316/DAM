#include <stdio.h>
#include <stdlib.h>

//

int main(){
	int arr[5] = {10, 20, 30, 40, 50};
	
	// 1.1 CLASE EJERCICIO
	
	// ¿p en donde tengo que inicializarlo? --> al final para que recule hasta el principio del código, en este caso, el final es 5
	int *p = ;

	//DOS OPCIONES PARA PONER ESE 5:
		//1. int *p = arr+5; --> la más correcta es esta, porque se mueve por encima supuestamente, ya que no coge ninguna dirección como tal, 
		//por lo que no accedes a ninguna dirección que no es tuya
	
		//2. int *p = &arr[5]; --> cuando accedes a esto, accedes a la sexta posición (dirección) y la coges, pero si entras en esa dirección 
		//puede ser que el código se rompa (puede estar reservada para otra cosa)

	for (int i = 5; i > 0; i--) {
		printf("Elemento %d: %d\n", i, *(p - i)); //te compila bajando del cero
	}

	// 1.2 EJERCICIO EXTRA
	int *p = &arr[4];

	for (int i = 4; i >= 0; i--) {
		printf("Elemento %d: %d\n", i, *(p - i)); //te compila bajando del cero

return EXIT_SUCCESS;
}
