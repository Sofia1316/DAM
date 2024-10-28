#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int resto2, resto3, resto4, resto5;
	int sol1, sol2, sol3, sol4;
	int resultado = 0;
	int divisor = 1000;

	printf("Introduce un número para la suma de ellos:");
	scanf("%d", &i);
	while(divisor > 1){	
		sol1 = i / divisor; //1000
		resto2 = i % divisor;

		divisor = divisor / 10;

		sol2 = resto2 / divisor; //100
		resto3 = resto2 % divisor;

		divisor = divisor / 10;

		sol3 = resto3 / divisor; //10
		resto4 = resto3 % divisor;

		divisor = divisor / 10;

		sol4 = resto4 / divisor; //1
		resto5 = resto4 % divisor;
		
		resultado = sol1 + sol2 + sol3 + sol4;
		printf("%d\n", resultado);

	}
	
	return EXIT_SUCCESS;
}
