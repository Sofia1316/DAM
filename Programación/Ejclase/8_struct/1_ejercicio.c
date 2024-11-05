#include <stdio.h>
#include <stdlib.h>

/**
 * *	Autor: Sofía López
 * */

//Definimos las variables
struct estudiante{
	char nombre[50];
	int edad;
	float promedio;
}

//Preguntas sobre los datos espefíficos del struct
int main(){
	struct estudiante persona;
	printf("Introduce el nombre del estudiante: ");
	scanf("%s",persona.nombre);
	printf("Introduce la edad del estudiante: ");
	scanf("%d",&persona.edad);
	printf("Introduce el promedio del estudiante: ");
	scanf("%f",&persona.promedio);
	
//Imprimir esos datos
	printf("Los datos del estudiante son:\n
		Nombre:%s\n
		Edad:%d\n
		Promedio:%f\n", persona.nombre, persona.edad, persona.promedio);
					    
	return EXIT_SUCCESS;
}
