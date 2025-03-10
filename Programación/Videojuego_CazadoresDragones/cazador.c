#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"
#include "cazador.h"

void inicializar_cazador(cazador * guerrero, const char * nombre, const habilidad talento, const int vida, const int daño, const float oro){
	strcpy(guerrero -> nombre, nombre);
	guerrero -> talento = talento;
	guerrero -> vida = vida;
	guerrero -> daño = daño;
	guerrero -> oro = oro;
}

char * capacidad(habilidad * talento){
	switch(*talento){
		case 0:
			return "Ráfaga de fuego";
			break;
		case 1:
			return "Camuflaje";
			break;
		case 2:
			return "Velocidad";
			break;
		case 3:
			return "Daño explosivo";
			break;
		case 4:
			return "Resistencia";
			break;
		case 5:
			return "Ignifugo";
			break;
		default:
			return "No existe";
	}
}

void imprimir_cazador(cazador * guerrero){
	printf(GREEN "Nombre: " RESET "%s\n", guerrero -> nombre);
	printf(GREEN "Habilidad: " RESET "%s\n", capacidad(&guerrero -> talento));
	printf(GREEN "Vida: " RESET "%d\n", guerrero -> vida);
	printf(GREEN "Daño: " RESET "%d\n", guerrero -> daño);
	printf(GREEN "Oro: " RESET "%.0f\n", guerrero -> oro);
	puts("");
}

void imprimir_cazadores(cazador * guerrero){
	for(int i = 0; i < caz; i++){
		if(guerrero[i].vida != 0) { // Comprobamos que el cazador esté vivo 
			imprimir_cazador(&guerrero[i]);
		}
	}
}

cazador * seleccion_cazador(cazador * guerrero){
	char seleccion[MAX];
	
	printf("Escriba el nombre del cazador a escoger: ");
	scanf("%s", seleccion);

	for(int j = 0; j < caz; j++){
		if(strcasecmp(seleccion, guerrero[j].nombre) == 0){ // Si el nombre del cazador que el jugador ha introducido es el mismo del que tiene el puntero referente al nombre...
			if(guerrero[j].vida != 0){ // Comprobamos que el cazador esté vivo
				return &guerrero[j]; // Retorna la posición en la que se encuentra los datos del cazador
			} else {
				printf(RED "El cazador %s se murió\n" RESET, seleccion);
				return NULL; // Si o si se debe de seleccionar un cazador vivo
			}
		}
	}

	puts("Selección no válida"); 

	return NULL; 

}

cazador * muerte_cazador(cazador * guerrero){
	if(guerrero -> vida > 0){ // si el cazador sigue teniendo vida, le retornamos
		return guerrero;
	}

	printf(MAGENTA "Cazador inválido por el resto del juego\n" RESET);

	return NULL; // Si no quedan cazadores vivos, retornamos NULL
}
