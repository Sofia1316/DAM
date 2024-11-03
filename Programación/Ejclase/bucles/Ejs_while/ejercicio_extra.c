#include <stdio.h>
#include <stdlib.h> 
#include <time.h> //librería para la semilla de inicio

//Construir una función que calcule un número aleatorio entre dos valores dados como argumento

int main(){
	int min, max;
	int numero_aleatorio;

	printf("Valor mínimo del número aleatorio:");
	scanf("%d", &min);
	printf("Valor máximo del número aleatorio:");
	scanf("%d", &max);

	srand(time(0));
	numero_aleatorio = rand(min) % (max + 1);

	printf("El número aleatorio entre %d y %d es %d\n", min, max, numero_aleatorio);

	//Para que me den números aleatorios: r = rand();
	//Y si quiero números entre el 0 y el 7, r = rand() % 8;
	//El while(1), es para que el bucle siempre sea positivo
	//srand(time(NULL)); está en la librería time.h 
	//srand(getpid()); es el identificador del proceso

	return EXIT_SUCCESS; 
}
