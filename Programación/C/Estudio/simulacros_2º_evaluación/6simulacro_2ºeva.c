#include <stdio.h>
#include <stdlib.h>

/*
Implemente un programa en C que realice las siguientes tareas:

1. Solicite al usuario dos números enteros positivos `n` y `m`.
2. Reserve memoria dinámicamente para una matriz de `n × m` elementos de tipo `int`.
3. Inicialice la matriz. Cada posición deberá ser la suma de la fila y la columna en la que se encuentre.
4. Calcule la suma de los elementos de cada fila y la almacene en un array dinámico. diferente.
5. Imprima la matriz y el array con las sumas por filas.
*/

int main(){
	int n;
	int m;

	printf("Introduce un nº positivo: ");
	scanf("%d", &n);
	printf("Introduce otro nº positivo: ");
	scanf("%d", &m);

    // Reservar memoria para la matriz
    int ** matriz = (int **) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *) malloc (m * sizeof(int));
    }

    // Inicializar la matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = i + j;
        }
    }

    // Reservar memoria para el array de sumas
    int *sumas_filas = (int *)malloc(n * sizeof(int));
    
    // Calcular la suma de cada fila
    for (int i = 0; i < n; i++) {
        sumas_filas[i] = 0;
        for (int j = 0; j < m; j++) {
            sumas_filas[i] += matriz[i][j];
        }
    }

    // Imprimir la matriz
    printf("\nMatriz generada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir el array de sumas
    printf("\nSuma de cada fila:\n");
    for (int i = 0; i < n; i++) {
        printf("Fila %d: %d\n", i, sumas_filas[i]);
    }

    // Liberar memoria
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(sumas_filas);
	return EXIT_SUCCESS;
}