#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	int suma = 0; 
	
	while(1){ //bucle infinito hasta que haya un nº impar
	printf("Introduce un número:");
	scanf("%d", &numero);
	
	if(numero % 2 != 0){ //el bucle se termina si el nº es impar
		printf("Es un número impar\n");
		break;
	} else 	//si es unº par, el valor que se vaya metiendo nuevo
		//se sumará al anterior, por ejemplo, metes 4 y la suma
		//es 4, luego al meter un 2, serán 6   
	suma += numero; //suma = suma + numero
	printf("Suma de los números pares es %d\n", suma);
	}

	return EXIT_SUCCESS;
}
