extern int caz;

#define reserva(variable, nombre, cantidad){ \
	nombre = (variable *) malloc (cantidad * sizeof(variable)); \
	if(nombre == NULL){ \
		puts("ERROR: Falta de Memoria."); \
		return EXIT_SUCCESS; \
	} \
} \


cazador * añadir_cazador(cazador * guerrero);

dragon * añadir_dragon(dragon * dragones);
