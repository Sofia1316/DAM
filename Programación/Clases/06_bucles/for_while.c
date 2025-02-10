#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;
	for(i = 0; i<5; i = i+1){
		printf("%d", i);
	}
	printf("Terminado el for\n");

	//Traducimos al while
	
	i = 0;
	while(i<5){ //Condición
		printf("%d", i); //el interior del for
		i = i+1; //Código entre vueltas	
	}
	printf("Terminado el while\n");

	return EXIT_SUCCESS;
}
