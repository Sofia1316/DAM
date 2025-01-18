#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 9: Series Numéricas con operador ternario
Crea un programa que imprima la serie Fibonacci hasta un número N dado por el usuario. 
Usa un bucle while y un operador ternario para decidir si imprimir un valor de la serie.
*/

int main() {
    int N;

    // Solicitar al usuario el límite de la serie
    printf("Introduce un número N para generar la serie Fibonacci hasta N: ");
    scanf("%d", &N);

    // Variables iniciales de la serie
    int a = 0, b = 1, next = 0;

    // Generar y mostrar la serie Fibonacci
    printf("Serie Fibonacci hasta %d:\n", N);
    while (next <= N) {
        // Operador ternario para imprimir el valor
        (next <= N) ? printf("%d ", next) : 0;

        // Calcular el siguiente valor de la serie
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n"); // Salto de línea final
    return 0;
}

