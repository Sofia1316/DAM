#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"
#include "dragon.h"

void inicializar_dragon(dragon * wyvern, const char * nombre, const char * nivel, const ataque ataque, const int daño, const int vida, const float oro){
	strcpy(wyvern -> nombre, nombre); 
	strcpy(wyvern -> nivel, nivel); // hago uso de strcpy para copiar los elementos de título en el puntero datos, ya que con las cadenas de caracteres no se puede hacer uso de =
	wyvern -> ataque = ataque;
	wyvern -> daño = daño; // lo pongo con flechitas para apuntar al elemento de dentro del puntero que he creado en la función, en este caso wyvern
	wyvern -> vida = vida; 
	wyvern -> oro = oro;
}

void imprimir_dragon(dragon * wyvern){
	printf(RED "Nombre: " RESET "%s\n", wyvern -> nombre);
	printf(RED "Nivel: " RESET "%s\n", wyvern -> nivel);
	printf(RED "Ataque: " RESET);
	switch(wyvern->ataque){ // Para transformar el número del ataque a su palabra original
		case 0:
			printf("Fuego Negro (mayor daño que uno común)\n");
			break;
		case 1:
			printf("Descarga eléctrica (forma una nube que emite relámpagos)\n");
			break;
		case 2:
			printf("Escamas resistentes (especie de escudo)\n");
			break;
		case 3:
			printf("Ondas sónicas (detecta a los cazadores que se encuentran cercanos)\n");
			break;
		case 4:
			printf("Super velocidad\n");
			break;
		case 5:
			printf("Rugido aturdidor (debilita al oponente durante 1 turno)\n");
			break;
		default:
			printf("Este ataque no existe\n");
	}

	printf(RED "Daño: " RESET "%d\n", wyvern -> daño);
	printf(RED "Vida: " RESET "%d\n", wyvern -> vida);
	printf(RED "Oro: " RESET "%.0f\n", wyvern -> oro);
	printf("\n");
}

void imprimir_dragones(dragon * wyvern){
	for(int i = 0; i < drag; i++){
		if(wyvern[i].vida != 0){ // Comprobamos que el dragón esté vivo 
			imprimir_dragon(&wyvern[i]);
		}
	}
}

dragon * seleccion_dragon(dragon * wyvern){
	char escoger_dragon[MAX];

	printf("Escribe el nombre del dragón contra el que quieres luchar: ");
	scanf("%s", escoger_dragon);

	for(int i = 0; i < drag; i++){ // Mirando los 4 dragones
		if(strcasecmp(escoger_dragon, wyvern[i].nombre) == 0){ // Comprueba si el nombre introducido coincide con el que se encuentra dentro del puntero wyvern
			if(wyvern[i].vida > 0){ // Comprobamos que el dragón esté vivo
				return &wyvern[i]; // En el caso de que si, se retornaría la dirección de memoria de este para poder imprimirlo a través del main
			} else {
				printf(RED "El dragón %s se murió\n" RESET, escoger_dragon);
				return NULL; // Si o si se debe de seleccionar un dragón vivo
			}
		}
	}
	printf("Selección inválida\n"); 

	return NULL;
}

dragon * muerte_dragon(dragon * wyvern){
	if(wyvern -> vida > 0){ // si el dragón sigue teniendo vida, le retornamos
		return wyvern;
	}

	printf(MAGENTA "Dragón inválido por el resto del juego\n" RESET);

	return NULL; // Si no quedan dragones vivos, retornamos NULL
}
