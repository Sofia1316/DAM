#define MIN 25
#define MAX 200

extern int drag; // lo ponemos con un extern para poder modificar el valor (en caso de eliminar o de añadir)

typedef enum{
	fuego_negro, // hace más daño que el fuego común
	descarga_electrica, // forma nubes que emiten rayos
	escamas_resistentes, // como un escudo resistente a los ataques
	ondas_sonicas, // detecta a los cazadores cercanos
	super_velocidad, // más rápido de lo normal
	rugido_aturdidor, // debilita a tu oponente un turno
} ataque;

typedef struct{
	char nombre[MIN];
	char nivel[MIN];
	ataque ataque;
	int daño;
	int vida;
	float oro;
} dragon;

// Función que rellena la memoria dinámica, es decir, el malloc del main es quien reserva en un inicio una memoria de 4 dragones todo a cero, pero además llamo a la función con sus datos correspondientes (dando además su posición en la memoria, por ejemplo &inicializar_dragon[3] es la posición 4) y ESTA FUNCIÓN se encargará de rellenar todo lo que estaba inicializado a 0 con esos datos
void inicializar_dragon(dragon * wyvern, const char * nombre, const char * nivel, const ataque ataque, const int daño, const int vida, const float oro);

// Función para imprimir un único dragón
void imprimir_dragon(dragon * wyvern);

// Función para que se impriman todos los dragones (que en un inicio son 4 pero luego se pueden añadir)
void imprimir_dragones(dragon * wyvern);

// Función que devuelve un puntero al struct dragon, pudiendo seleccionarlo y devolver su dirección de memoria
dragon * seleccion_dragon(dragon * wyvern);

// Función para hacer un realloc y que, al dragón muerto, se cambie a la última posición para "eliminar" al dragón muerto
dragon * muerte_dragon(dragon * wyvern);
