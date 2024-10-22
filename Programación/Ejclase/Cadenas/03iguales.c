#include <stdio.h>
#include <stdlib.h>

int main (){
	char str1[10] = "iguales";
	char str2[10] = "iguales";

	//Operador ==
	if (str1 == str2){
		printf("Las palabras son iguales\n");	
	} else {
		printf("Las palabras son distintas\n");
	} 
	

	//Operador <
	if (str1 < str2){
		printf("Las palabra 2 es mayor\n");	
	} else {
		printf("Las palabra 1 es mayor\n");
	} 

	//Comparar caracteres
	if (str1[0] == str2[0]){
		printf("Los primeros caracteres son iguales\n");
		if (str1[1] == str2[1]){
			printf("los segundos también son iguales\n");
		}
	} else printf ("Los primeros caracteres no son iguales\n");


return EXIT_SUCCESS;
}
