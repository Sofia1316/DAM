#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"
#include "cazador.h"
#include "dragon.h"
#include "combate.h"
#include "utilidades.h"

int drag = 4;
int caz = 4;

int main(){
	int escoger;

	// Para asegurarnos de que al principio no se ha seleccionado ningún dragón ni cazador
	cazador * seleccion = NULL;
	dragon * escoger_dragon = NULL;
	
	// APARTADO DE CAZADORES
	cazador * cazadores;
	reserva(cazador, cazadores, caz);

	inicializar_cazador(&cazadores[0], "Chayanne", velocidad, 170, 80, 0.0);
	inicializar_cazador(&cazadores[1], "Jericho", camuflaje, 220, 100, 0.0);
	inicializar_cazador(&cazadores[2], "Samira", rafaga_fuego, 150, 110, 0.0);
	inicializar_cazador(&cazadores[3], "Pantheon", daño_explosivo, 180, 150, 0.0);

	// APARTADO DE DRAGONES
	dragon * dragones;
	reserva(dragon, dragones, drag);

	inicializar_dragon(&dragones[0], "Caraxes", "Fácil", fuego_negro, 30, 400, 65.0);
	inicializar_dragon(&dragones[1], "Drogon", "Medio", escamas_resistentes, 40, 500, 80.0);
	inicializar_dragon(&dragones[2], "Vaghar", "Difícil", ondas_sonicas, 60, 600, 90.0);
	inicializar_dragon(&dragones[3], "Tairn", "Experto", descarga_electrica, 80, 800, 100.0);

	system("clear");

	printf(BLACK BG_CYAN "BIENVENIDOS A CAZADORES Y DRAGONES\n" RESET);
	puts("Selecciona una de las siguientes opciones:");
	printf(GREEN "\t1." RESET " Seleccionar cazador\n");
	printf(GREEN "\t2." RESET " Seleccionar dragón\n");
	printf(GREEN "\t3." RESET " Hora del combate\n");
	printf(GREEN "\t4." RESET " Añadir cazador\n");
	printf(GREEN "\t5." RESET " Añadir dragón\n");
	printf(GREEN "\tOtro." RESET " Salir del juego\n");
	scanf("%d", &escoger);

	system("clear");

	do{
		switch(escoger){
		case 1: // Seleccion del cazador.
			printf("Selecciona el cazador con el que quieres iniciar:\n\n");
			imprimir_cazadores(&cazadores[0]);

			// Creamos un puntero a cazador, donde guardaremos la posición del cazador que retorna la llamada de la función.
			seleccion = seleccion_cazador(&cazadores[0]);
			if(seleccion != NULL){
				imprimir_cazador(seleccion);
			}
			
			break;

		case 2: // Seleccion del dragon.
			printf("Selecciona al dragón contra el que quieres luchar\n\n");
			imprimir_dragones(&dragones[0]);

			// Llamamos a la función seleccion_dragon pasando la dirección de memoria del primer dragón y la función devolverá un puntero al dragón seleccionado por el usuario (dragon * escoger guarda la dirección del dragón elegido)
			escoger_dragon = seleccion_dragon(&dragones[0]);
			if(escoger_dragon != NULL){
				imprimir_dragon(escoger_dragon);
			}
			
			break;

		case 3: // Combate.
			if(seleccion == NULL && escoger_dragon == NULL){
				printf(RED "Selecciona un cazador y un dragón para poder combatir.\n" RESET);
			} else {
				combate(seleccion, escoger_dragon);
			}
			
			break;

		case 4: // Añadir cazador.
			cazadores = añadir_cazador(cazadores);
			
			break;

		case 5: // Añadir dragon.
			dragones = añadir_dragon(dragones);
			
			break;
			
		default: // Salida del juego.
			char validacion[4];
			
			puts("¿Seguro que deseas salir del juego?");
			scanf("%s", validacion);

			if(strcmp(validacion, "Si") == 0 || strcmp(validacion, "SI") == 0 || strcmp(validacion, "si") == 0){
				if(cazadores != NULL){ // Si cazadores tiene memoria reservada liberamos
					free(cazadores);
				}

				if(dragones != NULL){ // Si dragones tiene memoria reservada liberamos
					free(dragones);
				}
				
				puts("Gracias por jugar nuestro juego, ¡Nos vemos en la próxima!");

				return EXIT_SUCCESS;
			} else{
				break;
			}
		}

		puts("");

		puts("Selecciona una de las siguientes opciones:");
		printf(GREEN "\t1." RESET " Seleccionar cazador\n");
		printf(GREEN "\t2." RESET " Seleccionar dragón\n");
		printf(GREEN "\t3." RESET " Hora del combate\n");
		printf(GREEN "\t4." RESET " Añadir cazador\n");
		printf(GREEN "\t5." RESET " Añadir dragón\n");
		printf(GREEN "\tOtro." RESET " Salir del juego\n");
		scanf("%d", &escoger);

		system("clear");

	} while(escoger >= 1); // Lo metemos en un bucle para poder preguntar varias veces sobre qué opción deseamos escoger

	// LIBERAMOS MEMORIA
	free(cazadores);
	free(dragones);

	return EXIT_SUCCESS;
}
