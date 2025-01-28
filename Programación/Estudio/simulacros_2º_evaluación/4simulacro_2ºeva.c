#include <stdio.h>
#include <stdlib.h>

/*
Implemente un programa en C que realice las siguientes tareas:

1. Solicite al usuario un número entero positivo que determinará el tamaño de un array de `double`.
2. Reserve dinámicamente memoria para el array.
3. Inicialice el array con valores que sigan la siguiente fórmula:
valor[i]= 1/(i+1)
4. Imprima en pantalla el contenido del array.
5. Aumente el tamaño del array al doble de su tamaño original y complete los nuevos valores con la misma fórmula.
6. Imprima en pantalla el contenido del array después de la expansión.
7. Libere la memoria utilizada correctamente.
*/

int main(){
	int positivo;

	printf("Introduce un número positivo: ");
	scanf("%d", &positivo);

	if (positivo <= 0) {
        printf("El número tiene que ser positivo\n");
        return EXIT_FAILURE;
    }

	double * array = (double*) malloc (positivo*sizeof(double));
	if (array == NULL){
		printf("No hay memoria disponible");
		return EXIT_FAILURE;
	}

	for(int i = 0; i < positivo; i++){
		array[i]= 1 / (i+1);
	} 

	printf("Contenido del array 1: \n");
	for(int i = 0; i < positivo; i++){
		printf("%f\n", array[i]);
	} 

	// AUMENTO EL DOBLE CON UN REALLOC
	int tamaño_nuevo = 2 * positivo;

	printf("Dirección antes de realloc: %p\n", array);

	double * array2 = (double*) realloc (array, tamaño_nuevo * sizeof(double));
	if (array2 == NULL){
		printf("No hay memoria disponible");
		return EXIT_FAILURE;
	}

	printf("Dirección después de realloc: %p\n", array); // si dan la misma dirección de memoria quiere decirse que se expandió en el mismo lugar, es decir, se expandió a continuación de donde acababa el malloc 

	for(int i = 0; i < tamaño_nuevo; i++){
		array2[i]= 1 / (i+1);
	} 

	printf("Contenido del array con el realloc (el doble): \n");
	for(int i = 0; i < tamaño_nuevo; i++){
		printf("%f\n", array2[i]);
	} 

free(array2);
return EXIT_SUCCESS;
}

/*
Parte 3: Razonando (2 p)

1. ¿Qué ocurre en la memoria cuando usamos `realloc()` para expandir un array? ¿Se conservan los valores anteriores? ¿Siempre se puede expandir en el mismo bloque de memoria o se busca un espacio nuevo obligatoriamente? Consulta las direcciones de memoria para consultarlo.
    *Pista:  printf(”%p” , direccion_de_memoria);  para imprimir direcciones de memoria.*
2. Utilice `valgrind` para comprobar si hay fugas de memoria y adjunte una captura de pantalla con la salida del comando.

Respuesta: 
¿Se conservan los valores anteriores?
Sí, cuando se usa realloc() para expandir un array, los valores existentes en el bloque original se copian automáticamente al nuevo bloque de memoria, si es necesario. Sin embargo, si el bloque original no puede ampliarse, se asigna un nuevo bloque más grande con el contenido.

¿Siempre se puede expandir en el mismo bloque de memoria?
No, realloc() intenta expandir el bloque de memoria en su ubicación actual si hay suficiente espacio contiguo disponible. Si no es posible, asigna un nuevo bloque en otra ubicación y copia los valores existentes. Por esta razón, el puntero devuelto por realloc() puede ser diferente al original.
*/