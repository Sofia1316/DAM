#pragma once
#define MIN 25
#define MAX 200

extern int caz;

typedef enum{
	rafaga_fuego,
	camuflaje,
	velocidad,
	daño_explosivo,
	resistencia,
	ignifugo,
} habilidad;

typedef struct{
	char nombre[MIN];
	habilidad talento;
	int vida; // 200 MAX
	int daño;
	float oro; //%.0f
} cazador;

void inicializar_cazador(cazador * guerrero, const char * nombre, const habilidad talento, const int vida, const int daño, const float oro);

char * capacidad(habilidad * talento); 

void imprimir_cazador(cazador * guerrero);

void imprimir_cazadores(cazador * guerrero);

cazador * seleccion_cazador(cazador * guerrero);

cazador * muerte_cazador(cazador * guerrero);
