#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;

//INCREMENTO	
	i = i + 1; 		// 0 = 0 + 1
	printf("%d\n",i); 	//1
	
	i += 1; 		// 1 + 1. Incrementa en 1
	printf("%d\n",i); 	// 2

	i += 3; 		// 2 + 3. Incrementa en 3
	printf("%d\n",i); 	// 5

	i++;			// i += 1; i = i + 1 Son 3 formas equivalentes
	printf("%d\n",i); 	// 1
	
//DECREMENTO
	i -= 5; 		// 5 - 5. Decrementa en 5
	printf("%d\n",i); 	// 0
	i--; 			// i-=1 ; i = i - 1
	printf("%d\n",i); 	// 0

//OTRAS OPCIONES

	printf("Otras opciones: \n");
	printf("%d\n",i++); // 0 porque incrementa después de leer el valor.
	printf("%d\n",i); // 1
	printf("%d\n",++i); // 2 porque primero incrementa y después devuelve el valor.
	
	// Análogamente ocurre con i--; --i;

	return EXIT_SUCCESS;
}
