#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa en C que realice las siguientes acciones:

1. Solicite un número entero positivo `n`.
2. Reserve memoria dinámicamente para una matriz cuadrada de `n × n` enteros.
3. Rellene la matriz con valores ingresados por el usuario.
4. Implemente una función que intercambie la primera y la última fila de la matriz.
5. Libere la memoria correctamente.
*/

/* Función para intercambiar la primera y última fila de la matriz */
void intercambiar_filas(int **matriz, int n) {
    for (int j = 0; j < n; j++) {
        int temp = matriz[0][j];
        matriz[0][j] = matriz[n - 1][j];
        matriz[n - 1][j] = temp;
    }
}

int main() {
    int n;

    printf("Introduce un número positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número debe ser positivo.\n");
        return EXIT_FAILURE;
    }

    // Reservar memoria para la matriz
    int **matriz = (int **)malloc(n * sizeof(int *));
    if (matriz == NULL) {
        printf("Error al asignar memoria para la matriz.\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Error de memoria");
            for (int k = 0; k < i; k++) {
                free(matriz[k]);
            }
            free(matriz);
            return EXIT_FAILURE;
        }
    }

    // Rellenar la matriz con valores ingresados por el usuario
    printf("Introduce los valores de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Intercambiar la primera y última fila
    intercambiar_filas(matriz, n);

    // Imprimir la matriz modificada
    printf("\nMatriz después del intercambio de filas:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar memoria correctamente
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return EXIT_SUCCESS;
}
