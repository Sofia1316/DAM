#include <stdio.h>
#include <stdlib.h>

int main(){
	float x = 10.5;
	int *p;
	// genera un warning, pero compila
	p = %x;

	printf("Valor de x: %b\n", x);		//2.100000
	printf("Dirección de x: %p\n", &x);
	printf("Contenido de p: %b\n", *p); 	//te imprimirá el entero de 2.100000
						
return EXIT_SUCCESS;
}
