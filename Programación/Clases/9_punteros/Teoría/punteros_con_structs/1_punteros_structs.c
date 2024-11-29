#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// CÓMO FUNCIONAN LOS STRUCTS CON ARRAY

// Definimos las constantes
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
#define MAX_BUFFER 200

// struct de estudiante
typedef struct {
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
} Estudiante;

// Inicializar estudiante
/*
// OPCIÓN 1 (que no funciona debido a que esa memoria se reserva y al llegar al return, esta se libera y el
// programa puede llegar a reventar, aparte de que esta memoria se muere y no se mantiene):
Estudiante inicializar(char * nombre, int edad, float nota){
	// Creo una variable de tipo estudiante
	Estudiante estudiante_nuevo;
	// Inicializo el estudiante --> estudiante_nuevo.edad = edad....
	return estudiante_nuevo;
}

// OPCIÓN 2 (que tampoco funciona porque no hay espacio en donde meter esos datos porque no he reservado memoria):
Estudiante * inicializar(char * nombre, int edad, float nota){
	Estudiante * estudiante_nuevo;
	return estudiante_nuevo;
}

// OPCIÓN 3 (opción de memoria dinámica, que funciona pero aún no lo daremos)
Estudiante * inicializar(char * nombre, int edad, float nota){
	Estudiante * estudiante_nuevo = malloc; //memoria dinámica
	return estudiante_nuevo;
}
*/
// OPCIÓN 4 (en donde le paso la dirección de memoria con el espacio ya reservada)
// (dirección de estudiante -- dirección de char -- entero -- float)
// en esta función paso por valor y paso por referencia a su vez, ya que el entero y el float son como los locales
void inicializar(Estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){
	// esto no compila porque estudiante a rellenar es un puntero, no un estudiante literal. Por eso habría que hacer 
	// (*estudiante_a_rellenar).edad, es decir, acceder al contenido del puntero para así poder acceder al campo edad
	// del estudiante. Pero lo que pasa es que eso está feo, entonces es preferible usar el operador ->
	
	estudiante_a_rellenar.edad = edad;
	estudiante_a_rellenar.nota = nota;
	estudiante_a_rellenar.nombre = nombre; // es incorrecto porque lo que se iguala las direcciones de memoria, no el contenido
					       // como tal, entonces estás igualando a un valor vacío básicamente (por eso necesitamos)
					       // el strcpy (reforzar en casa el porqué)
	strcpy(estudiante_a_rellenar.nombre, nombre);
}

// Función de cumple, la cual tiene que recibir un puntero a estudiante porque va a modificar la variable en sí, no el valor de la variable
// y la variable que recibo es la de cumpleanero y en void ya que no necesito que me devuelva nada
// accede al campo edad e incrementarlo
void cumpleanios(Estudiante * cumpleanero){
	cumpleanero->edad++; //pongo la flecha porque estoy refiriendome a un puntero
}

// Crea una función que cree un string (cadena de texto) con la información del estudiante. Puedes empezar creando una función que imprima por
// pantalla la info de un estudiante
// 27/11 VAMOS A CREAR UNA FUNCIÓN PARA IMPRIMIR UN ESTUDIANTE HACIÉNDOLO DE DOS FORMAS

// OPCIÓN 1
// Recibe un estudiante y muestra por pantalla todos sus datos (podríamos hacerlo por valor pero es más fácil y rápido hacerlo por referencia = const)
// Esto hará que no cambie el contenido de Estudiante
void imprimirEstudiante(const Estudiante * estudiante_a_imprimir){
	printf("Nombre: %s\n", estudiante_a_imprimir->nombre);
	printf("Edad: %d\n", estudiante_a_imprimir->edad);
	printf("Nota: %f\n", estudiante_a_imprimir->nota);
}

// OPCIÓN 2.1 (FUNCIÓN DE IMPRIMIR SIN LOS PRINTFS)
//Una función que reciba un estudiante y lo convierta en una cadena de texto (FUNCIÓN WARNING)
void EstudianteToString(const Estudiante * datos){
	char retval[MAX_BUFFER];

	/*OPCIÓN CON PRINTF*/ printf("El estudiante %s de %d anios ha sacado un %f", datos->nombre, datos->edad, datos->nota);
	/*OPCIÓN DE SNPRINTF; dónde, cuánto y el qué*/
	snprintf(retval, MAX_BUFFER, "El estudiante %s de %d años ha sacado un %f", datos->nombre, datos->edad, datos->nota);

return retval; 	//pero cuando acaba esta desaparece, ya que es una variable local y te saldrá un warning de aviso, 
				//y como quiero que siga existiendo, tendré que hacerla en main, que aquí se utiliza y aquí se rellena
}

// OPCIÓN 2.2 (FUNCIÓN DE IMPRIMIR SIN LOS PRINTFS)
//Una función que reciba un estudiante y lo convierta en una cadena de texto
void EstudianteToString(const Estudiante * datos, char * retval){ //la variable "char*retval" se pone para que esto no desaparezca y apareza en el main
	char retval[MAX_BUFFER];
	snprintf(retval, MAX_BUFFER*sizeof(char), "El estudiante %s de %d años ha sacado un %f", datos->nombre, datos->edad, datos->nota)
// multiplicas el 200 por lo que ocupa un char, es decir, 1
return retval; 
}

// Función para cambiar el nombre del estudiante 
void cambiar_nombre_estudiante(Estudiante * NuevoNombre, char * NombreCambiado){
	strcpy(NuevoNombre->nombre, NombreCambiado);
	// Esto solo copia las direcciones de memoria, pero no rellena la memoria con el estudiante del nombre nuevo
}


int main(){
	Estudiante listado[MAX_ESTUDIANTES]; // Aquí se reserva la memoria para los estudiantes
					     				// Los 560 bytes se reservan aquí
	int num_estudiantes;

	// Creación de variables
	int edad;
	float nota;
	char nombre[MAX_NOMBRE];

	printf("%p", listado);
	printf("Sizeof listado: %lu", sizeof(listado)); // 560
	printf("Sizeof estudiantes: %lu", sizeof(Estudiante)); //28

	// Inicializar los estudiantes con scanf
	printf("¿Cuántos estudiantes desea inicializar?: ");
	scanf("%d", &num_estudiantes);

	// Bucle que pregunta los datos de los alumnos
	for(int i = 0; i < num_estudiantes; i++){
		printf("Introduce la edad:");
		scanf("%d\n", &edad);
		printf("Introduce la nota:");
		scanf("%f\n", &nota);
		printf("Introduce el nombre:");
		scanf("%s\n", nombre);

		/*inicializar(*no hay que ponerle un & porque listado es un puntero a estudiante, y así se puede almacenar únicamente 
			      los datos del primer estudiante*listado
				*dirección de memoria de un estudiante* --> nombre, edad, nota);
		*/
		
		inicializar(&listado[i], nombre, edad, nota);
	}
	// también se puede así, : printf("Edad antigua de %s: %d\n", listado[0].nombre, listado->edad);
	printf("Edad antigua de %s: %d\n", listado[0].nombre, listado[0].edad);
	cumpleanios( &listado[0] /*Dirección de memoria*/);
	printf("Edad nueva: %d\n", listado[0].edad);

	// Imprimir algunos estudiantes
	imprimirEstudiante(&listado[1]);

	// Imprimir estudiante a rellenar (que es lo mismo porque reserva el espacio y se rellena con los datos del estudiante)
	char StringARellenar[MAX_BUFFER];
	EstudianteToString(&listado[0],StringARellenar);
	printf("%s\n", StringARellenar); // este imprime el printf de la función de arriba, es decir, EstudianteToString

	// Cambiar nombre del alumno; Imprime el nombre antiguo y el nombre nuevo introducido
	printf("Anterior nombre del alumno: %s\n", listado[0].nombre);
	char NuevoNombre[MAX_NOMBRE];
	printf("Introduce el nuevo nombre: ");
	scanf("%s", NuevoNombre);
	cambiar_nombre_estudiante(&listado[0],NuevoNombre);
	imprimirEstudiante(&listado[0]);


return EXIT_SUCCESS;
}
