#include <stdio.h>
#include <stdlib.h>

// Escribe una función que cuente el número de vocales en una cadena usando punteros

// Función para contar las vocales
int contarVocales(char *cadena){
    int contador = 0;
    char *p = cadena; // Para recorrer la cadena

    while (*p != '\0') { // Mientras no lleguemos al final de la cadena
        // Para ver si es una vocal
	if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'){
            contador++; // almacena el nº de cuantas hay
	}
        p++;
	} return contador;
}

int main(){
	char palabra[] = "Croqueta";
	int numVocales = contarVocales(palabra);

	printf("La palabra es: %s\n", palabra);
	printf("El número de vocales en la cadena es: %d\n", numVocales);

return EXIT_SUCCESS;
}
