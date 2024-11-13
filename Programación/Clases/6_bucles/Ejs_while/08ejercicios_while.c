#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero = 0;
	float suma = 0; 
	int promedio = 0;

	printf("Introduce un número:");
	scanf("%d", &numero);

	while (1){	//Bucle infinito hasta que recibe un nº negativo
	if (numero < 0){
		printf("El número es negativo\n");
		break;
	} else { //en caso de ser positivo
		suma += numero;	//suma (0) + numero (por ejemplo, 8)
		promedio++;	//nº que se tienen que dividir entre el nº introducido (va sumando de 1 en 1)

		printf("El promedio es %f\n", suma / promedio);
		
		printf("Introduce otro número: ");
		scanf ("%d", &promedio);
	}
	}
	
	return EXIT_SUCCESS;
}
