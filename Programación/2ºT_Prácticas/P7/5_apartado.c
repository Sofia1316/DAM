#include <stdio.h>
#include <stdlib.h>

/*
1. Pedid al usuario las dimensiones `n` (filas) y `m` (columnas).
2. Reservad (o declarad) una matriz `n x m`.
3. Rellenadla con valores aleatorios, etc.
4. Calculad la **suma del contorno**:
    - Primera fila
    - Última fila
    - Primera columna
    - Última columna
5. Mostrad la suma y liberad la memoria (si la habéis reservado dinámicamente).
*/
int suma(int ** matriz, int n, int m);

int main(){
	int n, m;

	// N serán nuestras filas
	printf("Introduce un nº positivo para el número de filas: ");
	scanf("%d", &n);
		if(n <= 0){
			printf("Debes introducir un número positivo\n");
			return EXIT_FAILURE;
		}

	// M serán nuestras columnas
	printf("Introduce otro nº positivo para el número de columnas: ");
	scanf("%d", &m);
		if(m <= 0){
			printf("Debes introducir un número positivo\n");
			return EXIT_FAILURE;
		}

	// Reservar memoria para la matriz
	int ** matriz = (int **) malloc (n * sizeof(int)); // reservamos memoria para cada fila
	for (int i = 0; i < n; i++) {
	    matriz[i] = (int *) malloc (m * sizeof(int)); // reservamos memoria para cada columna, y ponemos matriz[i] ya que queremos reservar memoria para la columna de esa fila, es decir, si m vale 3, reservamos 3 "espacios" en el elemento 1 de esa fila
	}

	printf("Introduce valores para rellenar la matriz: \n");
	// Inicializamos la matriz y la rellenamos con valores positivos en función de cada posición de la matriz
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < m; j++){
	    	printf("Valor de la fila %d y columna %d: ", i, j);
	        if (scanf("%d", &matriz[i][j]) <= 0){
            	printf("Solo puedes introducir un número entero\n");
            	return EXIT_FAILURE;
            }
	    }
	} printf("\n");

	// Imprimir la matriz
	printf("Matriz:\n");
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < m; j++){
	        printf("%d\t", matriz[i][j]);
	    }
	    printf("\n");
	}

	//int suma_main = suma(matriz, n, m);	

free(matriz);
return EXIT_SUCCESS;
}

/*int suma(int ** matriz, int n, int m){
	int suma = 0; // inicializamos suma ya que esta variable almacenará las sumas

	// Suma de la primera fila
	for (int j = 0; j < m; j++){ // recorremos todos los números de la primera fila
    	suma += matriz[0][j];
	}

	// Suma de la última fila

	// Suma de la primera columna

	// Suma de la última columna
}*/