#include <stdio.h>
#include <stdlib.h>

/*
Crea un programa que pida por pantalla un número entero y cree un array de enteros de ese mismo
tamaño inicializando con los números pares. Y luego que te imprima los números impares.
Después, imprímelo.
*/

int main(){
	int num;

	// PEDIMOS EL NÚMERO ENTERO
	printf("Introduce un número entero: ");
	scanf("%d", &num);

// NÚMERO PAR

	// CREAMOS EL ARRAY EN FUNCIÓN DE LO INTRODUCIDO
	int * arr_par = (int *) malloc (num*sizeof(int)); 

	// POR SI ACASO
	if(arr_par == NULL){
		printf("Error, no hay memoria\n");
		return EXIT_FAILURE;
	}

	// INICIALIZAMOS CON LOS NÚMEROS PARES
	for (int i = 0; i < num; ++i){
		arr_par[i] = 2*i;
		printf("Arr_par[%d]: %d\n", i, arr_par[i]);
	}

// NÚMERO IMPAR

	// CREAMOS EL ARRAY EN FUNCIÓN DEL ARR_PAR Y AÑADIENDO EL DOBLE DE ESPACIO DE MEMORIA (por eso el 2)
	int * arr_impar = (int *) realloc (arr_par, 2*num*sizeof(int)); 

	// POR SI ACASO
	if(arr_impar == NULL){
		free(arr_par);
		printf("Error, no hay memoria\n");
		return EXIT_FAILURE;
	}

	// INICIALIZAMOS CON LOS NÚMEROS IMPARES
	for (int i = num; i < num * 2; ++i){ // es por 2 ya que, si por ejemplo meto un 3, quiero el doble de memoria, es decir, 6
		arr_impar[i] = 2*i+1;
		printf("Arr_impar[%d]: %d\n", i, arr_impar[i]);
	}


	// LIBERAMOS LA MEMORIA QUE HEMOS METIDO A MANO Y COMO AL HACER EL ARRAY IMPAR LO CREAMOS CON UN REALLOC, LA DIREC.MEM ANTIGUA, ES DECIR, EL ARRAY PAR
	// SE LIBERARÁ Y SE CREARÁ LA NUEVA, QUE ES EL ARRAY IMPAR, ENTONCES SI AL FINAL DEL PROGRAMA INTENTAMOS LIBERAR LA PAR, NOS DARÁ UN ERROR 
	// DE QUE SE HA LIBERADO YA EL ARRAY DE PARES, POR LO QUE SOLO LIBERAMOS LOS IMPARES
	free(arr_impar);
	return EXIT_SUCCESS;
}