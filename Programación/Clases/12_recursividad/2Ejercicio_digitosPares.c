#include <stdio.h>
#include <stdlib.h>

/*
Escribe una función recursiva que, dado un número entero, cuente la numero de dígitos que son pares 
(por ejemplo, en 2846 hay 3 dígitos pares: 2, 8, 4, el 6 también es par, total 4).
*/

int contar_pares(int numero, int recuento);

int main(){
    int numero, recuento = 0;

    printf("Introduzca la numero de números:");
    scanf("%d", &numero);

    int imprimir = contar_pares(numero, recuento);
    printf("Número de dígitos pares: %d\n", imprimir);

    return EXIT_SUCCESS;
}

int contar_pares(int numero, int recuento){
    // Caso base: si el número es 0, se sale ya que la numero de números es 0
    if (numero == 0) {
        return recuento;
    }

    int ultimo = numero % 10; // para que te de el último número

    // Si el dígito es par, aumentamos el contador
    if (ultimo % 2 == 0){
        recuento++;
    } 

    int ret = contar_pares(numero / 10, recuento); // en el return, el número lo dividimos entre 10 para quitar el último valor que ya hemos comprobado
    return ret;
}
