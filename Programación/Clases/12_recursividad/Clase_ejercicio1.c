#include <stdio.h>
#include <stdlib.h>

/*
el int array y el int buscar serán iguales mientras que el in y el fin se irán cambiando, ya que 
estos son posiciones del array. Por lo que, si quiero hacer la búsqueda binaria, debo buscar
un número partiendo el array de mitad en mitad
*/
// siempre hay que comprobar que todos los condicionales de la función tengan un return

int busq_bin(int * array, int a_buscar, int in, int fin){
	int mitad = (in+fin) / 2;

	// caso base
	if(array[mitad] == a_buscar){
		return mitad; // devuelve la posición en la que está
	}
	if (ini > fin){
		return -1; // no lo ha encontrado
	}

	// caso recursivo
	if(a_buscar < array[mitad]){
		int ret = busq_bin(array,a_buscar,ini,mitad);
		return ret;
	} else if(a_buscar > array[mitad]){
		int ret2 = busq_bin(array,a_buscar,mitad+1,fin);
		return ret2;
	}
	
}

int main(){
	int array[10] = {-5, 1, 9, 10, 11, 12, 17, 120, 150, 1500};
	int a_buscar = 120;
	int encontrado = busq_bin(array, a_buscar, 0, 9);

	return EXIT_SUCCESS;
}