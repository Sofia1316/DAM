#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100

/**
 * *	Autor: Sofía López
 * */

struct Proveedor {
	char nombre[100];
	char dirección[100];
	char teléfono[100];
}

struct Artículo {
	char nombre[100];
	float precio;
	struct Proveedor proveedor; 
	//metemos dentro el 1º struct para almacenar la info 
	//del proveedor de cada artículo 
}

struct Inventario {
	struct Artículo artículos[MAX_ITEMS];
	int cantidades[MAX_ITEMS]; //declaro un array de max items de tamaño
	int totalArticulos;
}

int main(){
	struct Artículo artículo = {"jarrón", "5" {"nombre", "dirección", "teléfono"}}; 
	//declaración e inicialización de un artículo random

	//Aquí que miInventario ya está declarada, no puedo iniciarla así:
//miInventario = {}

	struct Inventario miInventario;	//declaración
	//Esta forma de inicializar un struct solo es válida
	//en la declaración
	
	miInventario.artículos[0] = artículo; 	//asigno como primer artículo del array el artículo que he creado a mano
	miInventario.cantidades[0] = 10; 	//inicialización

	printf("Nombre del artículo %s\n", miInventario.artículos[0].nombre);
	printf("Cantidad %d\n", miInventario.cantidades[0]);
	printf("Nombre del proveedor %s\n", miInventario.artículos[0].proveedor.nombre);

//la inicialización de una variable con llaves solo es valida en la declaración de esa variable 
//(solo pasa con los structs y los arrays que son los únicos que se inicializan con llaves)

	return EXIT_SUCCESS;
}
