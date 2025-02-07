#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. Pedid al usuario cuántos enteros quiere introducir (`n`) o utiliza el argumento dado por línea de comandos. Se deben codificar ambas funcionalidades.
2. **(Obligatorio usar memoria dinámica)**: reservad un array de tamaño `n` para guardar esos enteros.
3. Pedid por pantalla los `n` valores o utiliza los argumentos dados por línea de comandos. Se deben codificar ambas funcionalidades.
4. Ordenadlos con el método que prefiráis. Debe implementarse un algoritmo de ordenación. La máxima puntuación en este apartado se obtendrá cuando no se utilice un array auxiliar.
5. Imprimid los valores ordenados.
*/

int Burbuja(const void * n1, const void * n2){  
    return(*(int *)n1 - *(int *)n2);
}

void Anaidir(int * lista, const int cantidad){
    int control;
    
    printf("Escriba cada número a añadir a la lista\n");
    for(int i = 0; i < cantidad; i++){
         control = scanf("%d", &lista[i]);

         if(control == 0){
            printf("Valor inválido\n");
            
            free(lista);

            exit(EXIT_FAILURE); 
         }
    }
}

void Mostrar(int * lista, const int cantidad){
    for(int j = 0; j < cantidad; j++){
        printf("Número[%d]: %d\n", j, lista[j]);
    }

}


int main(int argc, char ** argv){
    int cantidad;

    if(argc == 1){
        printf("¿Qué cantidad de números quieres procesar?\n");
        scanf("%d", &cantidad);

        int * lista = (int *)malloc(cantidad * sizeof(int));

        if(lista == NULL){
            printf("Error, falta de memoria\n");
            return EXIT_FAILURE;
        }

        Anaidir(&lista[0], cantidad);
    
        qsort(lista, cantidad, sizeof(lista[0]), Burbuja);

        Mostrar(&lista[0], cantidad);
        
        free(lista);

        return 0;
    }
    else
    if(argc == 3){
        if(strcmp(argv[1], "comparar") == 0){
            cantidad = atoi(argv[2]);

            int * lista = (int *)malloc(cantidad * sizeof(int));

            if(lista == NULL){
                printf("Error, falta de memoria\n");
                return EXIT_FAILURE;
            }

            Anaidir(&lista[0], cantidad);

            qsort(lista, cantidad, sizeof(lista[0]), Burbuja);

            Mostrar(&lista[0], cantidad);

            free(lista);

            return 0;
        }
    }
    else{
        printf("Inválido\n");
        return EXIT_SUCCESS;
    }
}