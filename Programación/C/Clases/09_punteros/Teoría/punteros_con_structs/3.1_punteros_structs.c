#include <stdio.h>

int main() {
    int numero = 10;
    int trampa = 20;

    int * const ptr = &numero;  // ahora el ptr como tal no puedo cambiarlo porque es const 
                                // pero el contenido, es decir, número, si puedo 

    printf("Valor: %d\n", *ptr);

    // *ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido (de número)
    printf("Nuevo valor: %d\n", *ptr);

    // Vamos a trampearlo
    ptr = &trampa;
    *ptr = 30;
    printf("nuevo valor: %d\n", *ptr);

    return 0;
}