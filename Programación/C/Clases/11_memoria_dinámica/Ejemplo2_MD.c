#include <stdio.h>
#include <stdlib.h> // Para malloc, free, etc.

int main() {
    int n = 5;

    // int *arr = (int *)calloc(n, sizeof(int)); // Reserva e inicializa a cero, 
    // por lo que esta reserva la memoria pero no la toca
    // int arr[5]; esto es la reserva estática

    int * arr = (int *) malloc(5*sizeof(int)); // quiero un espacio de 5 por 4 bits = 20 bits de espacio

    if (arr == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }

    // arr[i] estará inicialmente en 0
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
        // Al haber reservado con malloc, no se sabe cual es el valor que se va a almacenar
    }

    /*LO MISMO CON CALLOC*/
    int * arr2 = (int *) calloc(5,sizeof(int)); // este indica que quiere 5 espacios de memoria con 4 bits cada uno 
    // este reserva la memoria y la inicializa a 0
    if (arr2 == NULL){
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    free(arr);
    free(arr2);
    return 0;
}

