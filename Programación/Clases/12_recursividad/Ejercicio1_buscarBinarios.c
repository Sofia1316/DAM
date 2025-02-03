#include <stdio.h>
#include <stdlib.h>

/*
el int array y el int buscar serán iguales mientras que el in y el fin se irán cambiando, ya que 
estos son posiciones del array. Por lo que, si quiero hacer la búsqueda binaria, debo buscar
un número partiendo el array de mitad en mitad
*/

int busq_bin(int * array, int a_buscar, int in, int fin){
	// caso base
	if();

	int mitad = (in+fin) / 2;
	if(a_buscar == array[mitad]){
		return 1; // porque lo ha encontrado
	} else if(a_buscar < array[mitad]){
		int ret = busq_bin(array,a_buscar,ini,fin);
		return ret;
	} else if(a_buscar > array[mitad]){
		int ret2 = busq_bin(array,a_busca);
	}

	// caso recursivo
	
}

int main(){
	int array[10] = {-5, 1, 9, 10, 11, 12, 17, 120, 150, 1500};

	int a_buscar = 120;

	int encontrado = busq_bin(array, a_buscar, 0, 9);

	return EXIT_SUCCESS;
}