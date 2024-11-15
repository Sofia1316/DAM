#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;

	printf("Elemento 1: %d\n", *p);
	p++;
	printf("Elemento 2: %d\n", *p);
	p += 2;
	printf("Elemento 4: %d\n", *p);
	printf("Elemento posición 0: %d\n", *p[0]); //4
	printf("Elemento posición 0: %d\n", *p[-2]); //2
	printf("Elemento posición 0: %d\n", *p[1]); //5

return EXIT_SUCCESS;
}
