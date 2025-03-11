#include <stdio.h>

int main() {
    int numero = 10;
    int trampa = 20;

    const int *ptr = &numero;  // El valor apuntado es constante (por lo que no se puede modificar el número)
                                // pero el ptr puedes cambiarlo porque no es const

    printf("Valor: %d\n", *ptr);

    // *ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido (de número)
    printf("Nuevo valor: %d\n", *ptr);

    // Vamos a trampearlo
    ptr = &trampa;
    printf("nuevo valor: %d\n", *ptr);

    return 0;
}