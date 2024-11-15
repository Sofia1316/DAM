#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[5] = {1,2,3,4,5};

	// Recorrer el array y sumarlo (ejemplo 1 roto)
	for(int * p = arr; *p <= 5 ; p++){ //el contenido de p empieza en 1
		printf("%d", *p);
	}

	// Este bucle de arriba compilará, no dará error e imprimirá hasta el 5
	// A partir de ahí imprimirá cosas random de la memoria
	
	// Recorrer el array y sumarlo (ejemplo 2 arreglado)
	for(int * p = arr; p <= &arr[4] ; p++){ // para que el bucle finalice en 5 y no siga pasando a más = &arr[4]
						// además, tenemos que poner un & porque queremos parar en la direc.mem
		printf("%d", *p);
	}
	printf("Sizeof arr: %ld\n", sizeof(arr)); //20
	printf("Sizeof int: %ld\n", sizeof(int)); //4
	printf("Elementos del array: %ld\n", sizeof(arr/sizeof(int))); //5

	// En vez de poner el p <= arr[4]
	int numElementos = sizeof(arr)/sizeof(int); //esto se hace para que sea de forma genérica
						    // sizeof(arr) = te dice que tienes 20 porque cada nº es 4
						    // sezeof(int) = te dice que tienes 4 

	for(int * p = arr; p < &arr[numElementos] ; p++){ 
	 	
	
	// El recorrido del bucle normal
	char palabra[10] = "gratis";
	for (char *l = palabra; *l != '\0'; l++)
		printf("%c", *l);

	//hacer ejercicio 6 del notion!!

return EXIT_SUCCESS;
}
