#include <stdio.h>
#include <stdlib.h>

/**
 * *      Autor: Sofía López
 * *
 * */

int main(){
	int condicion; //el = es un operador de asignación
	char c;
	scanf("%d", &condicion);
	c = (condicion % 2) ? 'I' : 'P' ;
	/* E equivalente a:
	 * 	if (condicion > 5){
	 * 		c = 'S';
	 * 	} else {
	 * 		c = 'N';
	 * 	}*/

		printf("%c", c);

	return EXIT_SUCCESS;

}
