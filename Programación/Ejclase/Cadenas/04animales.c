#include <stdio.h>
#include <stdlib.h>

int main(){
	char respuesta;
	printf("¿Perro(P) o gato(G)?");
	scanf("%c", &respuesta);

	if (respuesta == 'P'){
	char perro1[20] = "^..^      /";
	char perro2[20] = "/_/\\_____/";
	char perro3[20] = "   /\\   /\\ ";
	char perro4[20] = "  /  \\ /  \\ ";
	
	printf("%s\n", perro1);
	printf("%s\n", perro2);
	printf("%s\n", perro3);
	printf("%s\n", perro4);

	} else if (respuesta == 'G'){
	char gato1[20] = " /\\_/\\";
	char gato2[20] = "( o.o )";
	char gato3[20] = " > ^ <";
	
	printf("%s\n", gato1);
	printf("%s\n", gato2);
	printf("%s\n", gato3);
	} else printf("Tiene que ser un perro o un gato");
	
return EXIT_SUCCESS;
}
