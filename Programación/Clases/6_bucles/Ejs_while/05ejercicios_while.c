#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero = 0, numero_secreto = 38; 

	printf("Adivina el número(1-100):");
	scanf("%d", &numero);

	while (numero != numero_secreto){
		if (numero_secreto < numero){
			printf("El número es más pequeño");
		} else 
			printf("El número es más grande");
		}
	
		scanf("%d", &numero);	
	}

	printf("Has acertado\n");

	//Para que me den números aleatorios: r = rand();
	//Y si quiero números entre el 0 y el 7, r = rand() % 8;
	//El while(1), es para que el bucle siempre sea positivo
	
	//Estructura en for:
	int r;
	
	//srand(10); Establece la semilla de generación de números aleatorios
	//srand(time(NULL)); está en la librería time.h 
	
	//srand(getpid()); es el identificador del proceso
	for (int i = 0;i<4; i++){
		//srand(10); pero esto haría que se calculase siempre el mismo
		//número aleatorio
		r = (rand () % 5) + 1; //dentro del paréntesis me genera números aleatorios entre 0 y 4 incluidos, al sumar 1 consigo números aleatorios entre 1 y 5
	       	printf("%d\n", r);	
	}
	
	return EXIT_SUCCESS;

	/* Construir una función que calcule un número aleatorio entre dos 
	 * valores dados como argumento
	 */ 
}
