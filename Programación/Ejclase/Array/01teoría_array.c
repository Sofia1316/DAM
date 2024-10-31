#include <stdio.h>
#include <stdlib.h>

int main(){
	char palabra[10] = "Hola";
	//palabra[4]; tiene un \0
	
	int numero[5] = {10, 20, 30 ,40, 50};

	for (int i=0; i<5; i++){
	printf("%d", numero[3]); //40
	}

	return EXIT_SUCCESS;
}
