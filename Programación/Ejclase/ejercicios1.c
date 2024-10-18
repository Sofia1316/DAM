#include <stdio.h>
#include <stdlib.h>

// autor: Sofía López

int main(){
	char str1[12];
	char str2[10];
	int posicion;

	printf("Introduce una palabra:");
	scanf("%s\n", str1);
	printf("¿Qué posición desea modificar?");
	scanf("%d\n", &posición);
	printf("¿Qué carácter desea poner?:");
	scanf("%s\n", str2);
	printf("La nueva palabra es: %s");	

return EXIT_SUCCESS;
}
