#include <stdio.h>
#include <stdlib.h>

// autor: Sofía López

int main(){
	char str1[100];
	char str2[100];

	printf("Introduce un número:");
	scanf("%s", str1);
	printf("Introduce un número:");
	scanf("%s", str2);       
	//no hace falta un & porque en las cadenas de caracteres solo se indica el espacio de memoria reservado, no hace falta el final, ya que este deja de leer en el /cero (que está al acabar las palabras)
	printf("%s+%s\n", str1, str2);

return EXIT_SUCCESS;	
}
