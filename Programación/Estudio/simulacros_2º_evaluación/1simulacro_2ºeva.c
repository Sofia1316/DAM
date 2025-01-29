#include <stdio.h>
#include <stdlib.h>

/*
Implemente un programa en C que realice las siguientes tareas:
1. Solicite al usuario un número entero positivo que determinará el tamaño de un array de números de punto flotante (float ).
2. Cree un array de float con el tamaño especificado.
3. Rellene el array con valores comprendidos entre 0 y 1, de forma que cada elemento sea inversamente proporcional a su posición en el array. Por ejemplo, si el tamaño del array es 5, los valores serán:
	 Posición 0: 0/5 = 0.0
	 Posición 1: 1/5 = 0.2
	 Posición 2: 2/5 = 0.4
	 Posición 3: 3/5 = 0.6
	 Posición 4: 4/5 = 0.8
4. Imprima en pantalla el contenido del array.
5. Reduzca el tamaño del array a la mitad (puede redondear como desee).
6. Imprima en pantalla el contenido del array tras reducir su tamaño.
*/

int main(){
	int positivo;

	printf("Introduce el número positivo: ");
	scanf("%d", &positivo);

	// Creamos un malloc para poder asignar una memoria dinámica
	float * memoria = (float*) malloc (sizeof(float) * positivo);
	if(memoria == NULL){
		printf("Error, no hay memoria para poder aumentar el array\n");
		return EXIT_FAILURE;
	}

	for(int i = 0; i < positivo; i++){
		memoria[i] = (float)i / positivo;
		printf("Posición %d/%d = %lf\n", i, positivo, memoria[i]);
	}

	positivo = positivo / 2;

	// Recortamos el tamaño del array con un realloc
	float * recorte = (float*) realloc (memoria, positivo * sizeof(float));
	if(recorte == NULL){
		printf("Error, no hay memoria para poder aumentar el array\n");
		return EXIT_FAILURE;
	}

	printf("\n");

	memoria = recorte;

	printf("Lista recortada por la mitad: \n");
	for(int i = 0; i < positivo; i++){
		printf("Posición %d/%d = %lf\n", i, i, recorte[i]);
	}
	
free(recorte);
return EXIT_SUCCESS;
}

/*
Pregunta: Después de reducir el tamaño del array, ¿qué ocurre con los valores que ocupaban las posiciones de memoria que ya no forman parte del array? ¿Siguen ahí? ¿Es correcto acceder a ellas? Explique su respuesta.
Respuesta: 
Si se reduce el tamaño de un array, las posiciones de memoria que antes formaban parte del array podrían seguir existiendo, pero ya no estarán accesibles a través del puntero que se usa para manipular el array.
Acceder a esas posiciones de memoria es incorrecto y puede causar un comportamiento indefinido, como leer cosas random o un core dump.
*/