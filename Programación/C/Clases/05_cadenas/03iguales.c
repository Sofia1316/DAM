#include <stdio.h>
#include <stdlib.h>

int main (){
	char str1[10] = "iguales";
	char str2[10] = "iguales";

	//Operador ==
	
	//En este condicional te imprimirá son distintas debido a 
	//que a pesar de ser las mismas palabras, la cadena de caracteres 
	//imprimen la dirección de memoria, la cual no es la misma entre una
	//palabra y otra
	if (str1 == str2){
		printf("Las palabras son iguales\n");	
	} else {
		printf("Las palabras son distintas\n");
	} 

	//Operador <
	
	//Al definir primero str1, el str2 es el mayor, ya que eso depende
	//de como esté la memoria organizada
	if (str1 < str2){
		printf("Las palabra 2 es mayor\n");	
	} else {
		printf("Las palabra 1 es mayor\n");
	} 

	//Comparar caracteres
	
	/* En bucle
	 * for (int i=0; i<8; i++){
	 * 	if (srt1[i] == srt2[i]){
	 * 		printf("%c", srt1[i]);
	 * 		}
	 * 	}
	 * 
	*/

	//En condicional
	if (str1[0] == str2[0]){
		printf("Los primeros caracteres son iguales\n");
		if (str1[1] == str2[1]){
			printf("los segundos también son iguales\n");
		}
	} else printf ("Los primeros caracteres no son iguales\n");

	return EXIT_SUCCESS;
}
