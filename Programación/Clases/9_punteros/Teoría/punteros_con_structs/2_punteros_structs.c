#include <stdio.h>
#include <stdlib.h>

int main() {
    const int LIMITE = 100;  // Definir una constante

    int * trampa = &LIMITE; // Esta asingación genera un warning (que no un error, por lo que compila)

    printf("El valor de LIMITE es: %d\n", LIMITE);

    // LIMITE = 200;  // Esto daría un error porque LIMITE es constante
    
    /*
    *trampa = 200;
    printf("El valor de LIMITE es: %d\n", LIMITE);
    */
    
    return 0;
}