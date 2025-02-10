#include <stdio.h>
#include <stdlib.h>

int main(){
	int * dir = NULL; // Lo estoy inicializando a la nada, porque no se puede poner ningún valor
			  // ya que ese valor lo considerará como una dirección de memoria
				
	printf("Dirección de memoria: %d\n", dir); // 0 
	printf("Contenido de esa dirección: %d\n", *dir); // core dump


return EXIT_SUCCESS;
}
