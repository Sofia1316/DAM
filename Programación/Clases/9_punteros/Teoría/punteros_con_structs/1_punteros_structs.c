#include <stdio.h>
#include <stdlib.h>

// CÓMO FUNCIONAN LOS STRUCTS CON ARRAY

// Definimos las constantes
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20

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

return EXIT_SUCCESS;
}
