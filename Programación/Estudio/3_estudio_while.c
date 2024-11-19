#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 4: Validación de Contraseña
Escribe un programa que pida al usuario una contraseña y le permita hasta tres intentos para ingresarla correctamente. 
Usa un bucle while. 
Si la contraseña es incorrecta en los tres intentos, muestra un mensaje de acceso denegado.
*/

int main(){
	char contraseña[10] = "Croqueta";
	char contraseña_nueva[10];
	int i;

	while(i < 3){
	printf("Introduce tu contraseña:");
	scanf("%s", contraseña_nueva);
	if (strcmp(contraseña_nueva, contraseña) == 0){
		printf("Contraseña correcta\n");
		return EXIT_SUCCESS;
	} else {
		printf("Contraseña incorrecta\n");
		i++;
		}
	}
	printf("Número de intentos superado\n");	
	
return EXIT_SUCCESS;
}
