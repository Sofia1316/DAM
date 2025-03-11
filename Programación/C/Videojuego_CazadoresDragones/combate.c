#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"
#include "cazador.h"
#include "dragon.h"

int batalla_comienzo(cazador * guerrero, dragon * wyvern){
	printf("Cazador y Dragón: El duelo mortal...¡Que empiece el combate!\n");
	printf("\n");
	
	printf("   ( •_•)  \n");
	printf("   <)   )╯  \n");
	printf("    /  \\   \n");
	
	printf(BG_GREEN "%s" RESET "(Vida: %d, Habilidad: %d, Daño: %d, Oro: %0.2f)\n", guerrero->nombre, guerrero->vida, guerrero->talento, guerrero->daño, guerrero->oro);
	
	printf("Contra\n");
       	
	printf("                   ,  ,              \n");
	printf("                   \\\\ \\\\         \n");
	printf("                   ) \\\\ \\\\    _p_  \n");
	printf("                   )^)\\))\\))  /  *\\  \n");
	printf("                    \\_|| || / /^`-'    \n");
	printf("           __       -\\ \\\\--/ /   \n");
	printf("         <'  \\\\___/   ___. )'  \n");
	printf("              `====\\ )___/\\\\   \n");
	printf("                   //     `\"      \n");
	printf("                   \\\\    /  \\   \n");

	printf(BG_RED "%s" RESET "(Vida: %d, Nivel: %s, Ataque: %d, Daño: %d, Oro: %0.2f)\n", wyvern->nombre, wyvern->vida, wyvern->nivel, wyvern->ataque, wyvern->daño, wyvern->oro);
	
	return EXIT_SUCCESS;
}

int turno_cazador(cazador * guerrero, dragon * wyvern){
	// Indicamos que el cazador le ha quitado vida al dragón que sea
	printf("El cazador %s ha causado %d daño al dragón %s\n", guerrero -> nombre, guerrero -> daño, wyvern -> nombre);
	// Se la quitamos vida al dragón en función de su ataque
	wyvern -> vida -= guerrero -> daño;
	// Condicional que indique que si la vida del dragón es menor a 0 entonces el cazador lo ha derrotado, y el oro se añade al del cazador
	if(wyvern -> vida <= 0){
		wyvern -> vida = 0; //nos aseguramos de que la vida se pare eb el 0 y no de números negativos
		printf("El cazador %s ha derrotado al dragón %s\n", guerrero -> nombre, wyvern -> nombre);
		guerrero -> oro += wyvern -> oro;
		printf(YELLOW "El cazador %s ahora tiene %0.2f de oro\n" RESET, guerrero -> nombre, guerrero -> oro);
		return EXIT_FAILURE;
	} else {
		printf("Vida del dragón: %d\n", wyvern->vida);
		printf("Vida del cazador: %d\n", guerrero->vida);
		puts("");
		return EXIT_SUCCESS;
	}
}

int turno_dragon(cazador * guerrero, dragon * wyvern){
	// Indicamos que el dragón le ha quitado vida al cazador que sea
	printf("El dragón %s ha atacado al cazador %s causando %d de daño\n", wyvern -> nombre, guerrero -> nombre, wyvern -> daño);
	// Se la quitamos vida al cazador en función de su ataque
	guerrero -> vida -= wyvern -> daño;
	// Condicional que indique que si la vida del cazador a 0 entonces el dragón lo ha derrotado 
	if(guerrero -> vida <= 0){
		guerrero -> vida = 0;
		printf(RED "El dragón %s ha derrotado al cazador %s" RESET, wyvern->nombre, guerrero->nombre);
		puts("");
		printf(RED "Game over (el dragón te ha papeado)\n" RESET);
		return EXIT_FAILURE; // retorna un 1 en el caso de el cazador se muera
	} else {
		printf("Vida del dragón: %d\n", wyvern -> vida);
		printf("Vida del cazador: %d\n", guerrero -> vida);
		return EXIT_SUCCESS; // retorna un 0 en el caso de que el combate siga
	}
}

int combate(cazador * guerrero, dragon * wyvern){
	int turno = 1;

	// Verifica que ambos hayan sido seleccionados
	if (guerrero == NULL) {
		printf(RED "Selecciona un cazador antes\n" RESET);
		return EXIT_FAILURE;	
	}
	
	if (wyvern == NULL) {
		printf(RED "Selecciona un dragón antes\n" RESET);
		return EXIT_FAILURE;
	}

	batalla_comienzo(guerrero, wyvern);

	while(guerrero->vida > 0 && wyvern->vida > 0){
		puts("-- * -- * -- * -- * -- * -- * -- * -- * -- * -- * -- * -- * -- * -- * -- * --\n");
		printf(BG_YELLOW "Turno %d:" RESET, turno);
		puts("");
		turno_cazador(guerrero, wyvern);

		system("sleep 1");

		turno_dragon(guerrero, wyvern);
		turno++;

		system("sleep 2"); // Comando de bash que suspende la ejecución por una cantidad de tiempo dada (en este caso segundos).
	}
	// Lo igualamos para que la dirección de memoria antigua se cambie por la nueva del realloc
	wyvern = muerte_dragon(wyvern);

	// Si el guerrero muere, cambia su referencia al siguiente
	guerrero = muerte_cazador(guerrero);
	
	return EXIT_SUCCESS;
}
