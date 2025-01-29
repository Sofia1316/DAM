#include <stdio.h>
#include <stdlib.h>

int modificar_elemento(int valor, int n){
	int nuevo = 0;
	for(int i = 0; i < n; i++){
		nuevo = n + 5;
		printf("%ls", &nuevo);
	}
	return nuevo;
}

int modificar_por_referencia(int *valor, int n){
	int nuevo = 0;
	for(int i = 0; i < n; i++){
		nuevo = n + 5;
		printf("%ls", &nuevo);
	}
	return nuevo;

}

int main(){
	int n;

	printf("Introduce un número positivo para el tamaño del array: ");
	scanf("%d", &n);

	if(n < 0){
		printf("Número no válido, debe de ser positivo");
	}

	int * array = (int*) malloc (sizeof(int)*n);
	if(array == NULL){
		printf("Error, no hay memoria disponible: ");
		return EXIT_SUCCESS;
	}

	printf("Introduce %d valores numéricos:\n", n);
	for(int i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < n; i++){
		printf("Valor introducido: %d\n", array[i]);
	}

	int valor;

	printf("Dirección antes de valor: %p\n", array);
	modificar_elemento(valor, n);
	printf("Dirección después de valor: %p\n", array);

	printf("Dirección antes de referencia: %p\n", array);
	//modificar_por_referencia(valor, n);
	printf("Dirección después de referencia: %p\n", array);

free(array);
return EXIT_SUCCESS;
}

/*
Pregunta 1: 
Lo que sucede es que el paso por valor simplemente cambia las cifras de forma estática por decirlo de alguna forma, es decir, no se modifica la memoria dinámica, ni nada del estilo en ningún momento ya que como bien dice el nombre, es paso por valor, sólo se cambia la cifra y ya.
Por otro lado, cuando hacemos el paso por referencia, si que estamos modificando la memoria ya que estamos haciendo uso de punteros, y estos a su vez, cambian la memoria dinámica. Por lo tanto, si por ejemplo cambio el valor del array sumándole 10 números, solo se cambiará eso, el número, pero si lo hago en el paso por referencia se cambiará la memoria por lo que si lo compruebo con un %p para mirar la dirección de memoria, esta habrá cambiado.

Pregunta 2:
Pues no lo recuerdo muy bien, pero si un int ocupaba 1, y un float un 4, creo que el double ocupaba 8, por lo que si por ejemplo meto un 2, ese se multiplica por 8. Si, eso se puede calcular con el sizeof como por ejemplo hacemos en el malloc, que ponemos sizeof(double) para indicar que debe de tener como "referencia" lo que ocupa el double en bits y estos se multiplican por el número que le metes, quedándote una cosa así: 
sizeof(double)*n
*/