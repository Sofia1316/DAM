#include <stdio.h>
#include <stdlib.h>

int main() {
   	int numero;
	int esperado = 1;

   	printf("Cuenta del 1 al 10:");

   while (esperado <= 10) {
        scanf("%d", &numero);
	if (numero != esperado) {
		printf("Número incorrecto\n");
		return 0;
        } 
		esperado++;
    }

    printf("Has contado bien\n");
    
return EXIT_SUCCESS;
}
