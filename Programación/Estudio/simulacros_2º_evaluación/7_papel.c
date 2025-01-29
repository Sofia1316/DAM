#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa en C que realice las siguientes acciones:

1. Solicite un número entero positivo que representará el tamaño de un array de caracteres (una palabra).
2. Reserve memoria dinámicamente para la palabra.
3. Solicite al usuario que introduzca la palabra.
4. Implemente una función `int contar_vocales(char *palabra)` que devuelva el número de vocales en la palabra.
5. Libere la memoria utilizada correctamente.
*/

int contar_vocales(char *palabra) {
    int contador = 0;

    while (*palabra) {
        char c = *palabra;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
        palabra++;
    }
    return contador;
}

int main(){
	int positivo;

	printf("Introduce el tamaño del array: ");
	scanf("%d", &positivo);

	char * palabra = (char*) malloc ((positivo+1) * sizeof(char));
	if(palabra==NULL){
		printf("Error de memoria");
		return EXIT_FAILURE;
	}

	printf("Introduzca una palabra: ");
	scanf("%s", palabra);

	int num_vocales = contar_vocales(palabra);
    printf("Número de vocales en la palabra: %d\n", num_vocales);

	free(palabra);
	return EXIT_SUCCESS;
}