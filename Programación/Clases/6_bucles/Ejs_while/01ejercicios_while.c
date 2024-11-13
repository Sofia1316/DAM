#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 10;
	while(i>0){
		printf("%d,", i);
		i = i - 1;	
	}
	printf(".");
	return EXIT_SUCCESS;
}
