#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cazador.h"
#include "dragon.h"
#include "utilidades.h"

cazador * añadir_cazador(cazador * cazadores){
	char nombre[MAX];
	habilidad talento;
	int vida;
	int daño;

	caz++;
	cazador * cazador_nuevo = (cazador *)realloc(cazadores, caz * sizeof(cazador));
	if(cazador_nuevo == NULL){
		puts("ERROR: Falta de memoria.");
		exit(EXIT_FAILURE);
	}
	cazadores = cazador_nuevo;

	getchar();
	printf("Introduce el nombre del nuevo cazador: ");
	fgets(nombre, MAX, stdin);
	nombre[strlen(nombre) - 1] = '\0';

	printf("¿Qué habilidad prefieres? ¿Ignifugo (4) o resistencia (5)?");
	scanf("%u", &talento);

	printf("¿Cuál es la vida?: ");
	scanf("%d", &vida);

	printf("¿Qué daño puede hacer?: ");
	scanf("%d", &daño);

	inicializar_cazador(&cazadores[caz - 1], nombre, talento, vida, daño, 0.0);
	
	printf("Se ha añadido el cazador correctamente\n");

	return cazadores;
}

dragon * añadir_dragon(dragon * dragones){
	char nombre[MAX];
	char nivel [MAX];
	ataque ataque;
	int daño;
	int vida;
	float oro;
	
	drag++;
	dragon * dragon_nuevo = (dragon *)realloc(dragones, drag * sizeof(dragon)); // Al cambiar la dirección de sitio para añadir, comenzamos poniendo los 4 dragones en esa nueva memoria
	if(dragon_nuevo == NULL){
		puts("ERROR: Falta de Memoria.");
		exit(EXIT_FAILURE);
	}
	dragones = dragon_nuevo; // por lo que reemplazamos la memoria antigua por la memoria nueva

	getchar();
	printf("Introduce el nombre del nuevo dragon: ");
	fgets(nombre, MAX, stdin);
	nombre[strlen(nombre) - 1] = '\0';

	printf("El nivel determinado para el nuevo dragón será de intermedio\n");
	strcpy(nivel, "Intermedio");

	printf("¿Qué ataque prefieres? ¿Velocidad (4) o rugido_ensordecedor (5)?");
	scanf("%u", &ataque);

	printf("¿Qué daño puede hacer?: ");
	scanf("%d", &daño);

	printf("¿Cuál es la vida?: ");
	scanf("%d", &vida);

	printf("¿Cuánto oro tiene?: ");
	scanf("%f", &oro);

	inicializar_dragon(&dragones[drag - 1], nombre, nivel, ataque, daño, vida, oro); // un -1 porque comienza en 0 el listado de dragones
	
	printf("Se ha añadido el dragón correctamente\n");

	return dragones;
}
