#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	int condicion = 1;

	scanf("%d", &condicion);
	switch (condicion){
		case 0:
			printf("Vale 0\n");
		case 1:
			printf("Vale 1\n");
		case 2:
			printf("Vale 2\n");
		case 3: 
			printf("Vale 3\n");
			break
		default:
		printf("Ni 1, ni 2, ni 3, ni 0\n")

	return EXIT_SUCCESS;

}
