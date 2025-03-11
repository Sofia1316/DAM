#include <stdio.h>
#include <stdlib.h>

/*
Implemente un programa en C que realice las siguientes tareas:

1. Solicite al usuario un número entero positivo que determinará el tamaño de un array de `double`.
2. Reserve dinámicamente memoria para el array.
3. Inicialice el array con valores que sigan la siguiente fórmula:
valor[i]= 1/(i+1)
4. Imprima en pantalla el contenido del array.
*/

int main(){
	int positivo;

	printf("Introduce un nº positivo: ");
	scanf("%d", &positivo);

	double * arr = (double*) malloc (sizeof(double)*positivo);
	if(arr==NULL){
		printf("No hay memoria");
		return EXIT_FAILURE;
	}

	for(int i=0; i<positivo; i++){
		arr[i]= 1/(i+1);
	}

	for(int i=0; i<positivo; i++){
		printf("%2.f\n", arr[i]);
	}
	

return EXIT_SUCCESS;
}