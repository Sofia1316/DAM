#include <stdio.h>
#include <stdlib.h>
/*
Escriba un programa en C que realice las siguientes acciones:

- Solicite un número entero positivo que determinará el tamaño de un array de enteros.
- Reserve memoria dinámicamente para el array.
- Llene el array con los primeros `n` números primos.
- Libere la memoria correctamente.
*/

// Función para saber si el número es primo
int primo(int numero){
	if (numero < 2) return 0;

	for (int i = 2; i < numero; i++){
		if (numero%i == 0) return 0;
	}

	return 1;
}

int main(){
	int entero;

	printf("mete un número para el tamaño del array: ");
	scanf("%d", &entero);

	int * array = (int*) malloc (sizeof(int) * entero);
	if (array == NULL){
		printf("No hay memoria");
		return 1;
	}

	for(int i = 0; i < entero; i++){
		printf("Mete un número primo: ");
		scanf("%d", &array[i]);
	}

	for(int i = 0; i < entero; i++){
		if (primo(array[i])) {
            printf("El número %d es primo\n", array[i]);
        } else {
            printf("El número %d no es primo\n", array[i]);
        }
	}

free(array);
return EXIT_SUCCESS;
}

/*
**Pregunta para razonar:**

Al liberar la memoria con `free()`, ¿los datos almacenados en el array desaparecen inmediatamente? ¿Qué ocurre si intentamos acceder a ellos después de liberar la memoria?

Respuesta: Yo considero que la memoria aunque se haya "liberado", esa información sigue ahí puesta y escrita, al menos
hasta que otro programa sobreescriba sobre ella o el mismo programa la vuelva a usar por lo que, si intentas acceder
a ellos, a los datos almacenados del array, después de liberar la memoria, es probable que no se pueda realizar o hayan otras cosas
A pesar de ello, el comportamiento es impredecible, por lo que solo estoy deduciendo lo que podría pasar.
*/