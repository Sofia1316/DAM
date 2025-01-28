#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. Escriba un programa en C que realice las siguientes acciones:
   
    - Defina una función `char* invertir(char *palabra)` que:
        - Imprima en orden inverso los caracteres en la palabra recibida como argumento
        - Guarde en un array nuevo la palabra invertida.
        - La función debe devolver el puntero donde se encuentra la palabra invertida.
    
    - En el main:
        - Solicite un número entero positivo que determinará el tamaño de un array de caracteres (para almacenar una palabra).
        - Reserve memoria dinámicamente para la palabra.
        - Solicite al usuario que introduzca una palabra.
        - Llama a la función invertir
    - Imprima la palabra inicial
*/

// Función para invertir la palabra
char * invertir(char * palabra) {
    int longitud = strlen(palabra); // uso strlen para que me cuente los caracteres que contiene "palabra"

    char * invertida = (char*) malloc ((longitud + 1) * sizeof(char)); // le sumo 1 ya que este comienza en 0
    if (invertida == NULL) {
        printf("Error al reservar memoria.\n");
        exit(1);
    }

    // Usar un bucle para copiar la palabra en orden inverso
    for (int i = 0; i < longitud; i++) {
        invertida[i] = palabra[longitud - 1 - i];
    }
    invertida[longitud] = '\0'; // Asegurar el terminador nulo

    return invertida;
}

int main() {
    int tam;
    char *palabra;

    // Solicitar el tamaño del array
    printf("Ingrese un número entero positivo para el tamaño de la palabra: ");
    scanf("%d", &tam);

    // Reservar memoria para la palabra
    palabra = (char*)malloc((tam + 1) * sizeof(char));
    if (palabra == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    // Solicitar la palabra al usuario
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    // Llamar a la función invertir
    char *invertida = invertir(palabra);

    // Imprimir la palabra original e invertida
    printf("Palabra original: %s\n", palabra);
    printf("Palabra invertida: %s\n", invertida);

    // Liberar la memoria asignada
    free(palabra);
    free(invertida);

    return 0;
}
