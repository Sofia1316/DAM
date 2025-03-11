#include <stdio.h>
#include <stdlib.h>

/*
1. Escriba un programa en C que realice las siguientes acciones (3p.)
    1. Pedir un entero que determinará el tamaño de la palabra.
    2. Reservar dinámicamente espacio para una palabra de esa longitud.
    3. Leer por pantalla una palabra de esa longitud. [Es responsabilidad del usuario introducir una palabra de la longitud exacta que ha introducido anteriormente. No es necesario controlar erorres de este tipo]
    4. Llamar a la función `capitalizar` para cada uno de los caracteres. (Función implementada más abajo)
    5. Imprimir la palabra.
*/

char capitalizar (char letra_minuscula){
	letra_minuscula = letra_minuscula + 'Z' - 'z';
	printf("%c\n",letra_minuscula);
	return letra_minuscula;
}

int main(int argc, char**argv){
	int positivo;

	printf("Introduce un nº positivo: ");
	scanf("%d", &positivo);

	char * palabra = (char*) malloc (sizeof(char) * positivo);
	if(palabra == NULL){
		printf("No hay memoria disponible");
		return EXIT_FAILURE;
	}

	printf("Introduce la palabra: ");
    scanf("%s", palabra);

    // Capitalizar cada carácter de la palabra
    for (int i = 0; i < positivo; i++) {
        palabra[i] = capitalizar(palabra[i]);
    }

    // Imprimir la palabra capitalizada
    printf("Palabra capitalizada: %s\n", palabra);

free(palabra);
return EXIT_SUCCESS;
}

/*
**Pregunta 1 (1p.):** ¿Los cambios que realiza la función capitalizar son persistentes al terminar la función? Es decir, ¿la palabra introducida por el usuario ha sido modificada en memoria o no? En caso de responder negativamente, modifica la función para que los cambios que realiza sean persistentes en el main. En caso de responder afirmativamente, realiza un diagrama de memoria en el que expliques cómo ocurre esa modificación.
Respuesta: Yo creo que si que se realizan cambios en la memoria a pesar de mantener la misma longuitud, ya que la palabra cambia caracteres, aunque sea de minuscula a mayuscula

**Pregunta 2 (1p.):** ¿Qué ocurre si se introduce una palabra de más longitud de la reservada? Por ejemplo, qué ocurriría si se reserva memoria para una palabra de longitud 5 y se introduce por pantalla “murciélago”. ¿Podría imprimirse la palabra? ¿Se imprimiría correctamente? ¿Por qué?
Respuesta: El comportamiento en esos casos sería impredecible, ya que puede dar un core dump, que la palabra se imprima por trozos, que no se imprima nada o que se dé la suerte de que la memoria que hay a continuación esté libre y se pueda imprimir la palabra entera
*/