#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TÍTULO 80
#define MAX_AUTOR 50
#define CANT_LIBROS 200

// Enum para los géneros literarios, en donde definimos cada uno pero solo se imprimirá el nº, es decir, ficcion es 1
typedef enum {
	FICCION,
	NO_FICCION,
	POESIA,
	TEATRO,
	ENSAYO,
} Categoria;

// struct de los datos principales de la biblioteca
typedef struct {
	int id;
	char título[MAX_TÍTULO];
	char autor[MAX_AUTOR];
	float precio;
	Categoria categoria; // llamamos al enum para que se quede dentro del struct
	int cantidad_disponible;
} Libros;

void InicializarLibro(Libros * datos, int id, char * título, char * autor, float precio, Categoria categoria, int cantidad_disponible){
    datos -> id = id;
    char * strncpy(datos->título, título);
    char * strncpy(datos->autor, autor);
    datos -> precio = precio;
    datos -> categoria = categoria;
    datos -> cantidad_disponible = cantidad_disponible;
}

// FUNCIÓN PARA IMPRIMIR UN ÚNICO LIBRO Y NO REPETIRLO EN VARIAS FUNCIONES
void imprimir_UnLibro(const Libros * UnLibro){ // ponemos un const en el caso de que no queramos que los valores de nuestro puntero cambien
    printf("%d, ", UnLibro->id); // con la -> apuntamos a la dirección de memoria del puntero, que en este caso, es UnLibro
    printf("%s, ", UnLibro->título); 
    printf("%s, ", UnLibro->autor);
    printf("%0.2f, ", UnLibro->precio);
    switch(UnLibro->categoria){ // La función de este switch transforma el nº de la categoría a la palabra en sí
       case 0:
            printf("FICCION, ");
            break;
        case 1:
            printf("NO_FICCION, ");
            break;
        case 2:
            printf("POESIA, ");
            break;
        case 3:
            printf("TEATRO, ");
            break;
        case 4:
            printf("ENSAYO, ");
            break;
        }
    printf("%d\n", UnLibro->cantidad_disponible);
}  


// APARTADO 1; Función para imprimir todos los libros
void imprimir_libros(const Libros * Catálogo){  // En todos las funciones de tipo void, ponemos en primer lugar el struct (Libros) y en segundo lugar
                                                // crearemos una variable para hacer referencia al puntero dentro de la propia función (Catálogo)
    for (int i = 0; i < 40; i++) {
	   imprimir_UnLibro(&Catálogo[i]); 
       // Pongo el &Catálogo para indicar una dirección de memoria
       // Pongo un [i] para evitar que solo se me imprima el primer valor del array en cada vuelta del bucle
	}
}

//APARTADO 2; Mostrar el libro que coincida con el ID o un mensaje de error.
void coincidencia(const Libros * Libro_id, int numero_libros, int ID){  
// En esta función añadimos la variable "int numero_libros" para que esta sepa cuántos libros hay en el array al que apunta el puntero "Libros"
// Esto se debe a que como tal el array no guarda su tamaño y (Libros * Libro_id) solo apunta al primer elemento del array

    int localizar = 0;
    for(int i = 0; i < numero_libros; i++) {
        if(Libro_id[i].id == ID){
            imprimir_UnLibro(&Libro_id[i]); // Esto hace que se imprima mi primer void y así evito la repetición de código, 
                                            // y dentro de los () pongo la nueva variable creada en la función
            localizar = 1; // esto hace que se me indique que tiene un valor "guardado" porque ha entrado dentro del bucle, por lo que localizar ya no es 0, es 1 
            break;
        } 
    }
    if(localizar == 0){
        printf("Libro no encontrado\n");
    } 
}

//APARTADO 3; Aumentar el stock del libro ID en la cantidad dada como argumento e imprimir la información pertinente
void aumento(Libros * Stock, int numero_libros, int selección, int cantidad_añadir){ // Como en esta función queremos que se modifique el array de Libros, no ponemos el const
    
    if(selección <= 40 && selección >= 0){
        for(int i = 0; i < numero_libros; i++){
            if(selección == Stock[i].id){
                Stock[i].cantidad_disponible = Stock[i].cantidad_disponible + cantidad_añadir; //para poder sumar lo introducido con el stock del puntero
                printf("El stock nuevo del libro con id %d es de %d\n", selección, Stock[i].cantidad_disponible);
                break; 
            } 
        }
    } else {
        printf("El ID introducido no existe\n");
    }
}

//APARTADO 4; Mostrar todos los libros de la categoría dada como argumento.
void imprimir_categoría(const Libros * mostrar_categoría, int numero_libros, int argumento_introducido_categoría){

    if(argumento_introducido_categoría < 5 && argumento_introducido_categoría >= 0){
        for(int i = 0; i < numero_libros; i++){
            if(argumento_introducido_categoría == mostrar_categoría[i].categoria){ // Para comprobar si lo introducido con la categoría es lo mismo
                imprimir_UnLibro(&mostrar_categoría[i]);
            } 
        }
    } else {
        printf("Esta categoría no existe\n");
    }
}

// argc; número de argumentos recibidos
// argv; array de cadenas de caracteres
int main(int argc, char ** argv){
    
    // inicializarLibro(direc.memor.donde guardar el libro (en este caso, &datos[i]), id, título, autor...);
    // ARRAY DE MEMORIA DINÁMICA DE LOS LIBROS DE LA BIBLIOTECA
    Libros * datos_dinámicos = (Libros *) malloc (sizeof(Libros) * CANT_LIBROS);

    // POR SI ACASO
    if(datos_dinámicos == NULL){
        printf("Error, no hay memoria\n");
        return EXIT_FAILURE;
    }

    InicializarLibro(&datos_dinámicos[0], 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10);
    InicializarLibro(&datos_dinámicos[1], 2, "1984", "George Orwell", 12.49, FICCION, 5);
    InicializarLibro(&datos_dinámicos[2], 3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8);
    InicializarLibro(&datos_dinámicos[3], 4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12);
    InicializarLibro(&datos_dinámicos[4], 5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7);
    InicializarLibro(&datos_dinámicos[5], 6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9);
    InicializarLibro(&datos_dinámicos[6], 7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6);
    InicializarLibro(&datos_dinámicos[7], 8, "The Odyssey", "Homer", 17.49, FICCION, 4);
    InicializarLibro(&datos_dinámicos[8], 9, "Ulysses", "James Joyce", 25.00, FICCION, 2);
    InicializarLibro(&datos_dinámicos[9], 10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3);
    InicializarLibro(&datos_dinámicos[10], 11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11);
    InicializarLibro(&datos_dinámicos[11], 12, "The Iliad", "Homer", 18.50, FICCION, 7);
    InicializarLibro(&datos_dinámicos[12], 13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15);
    InicializarLibro(&datos_dinámicos[13], 14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20);
    InicializarLibro(&datos_dinámicos[14], 15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13);
    InicializarLibro(&datos_dinámicos[15], 16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6);
    InicializarLibro(&datos_dinámicos[16], 17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5);
    InicializarLibro(&datos_dinámicos[17], 18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8);
    InicializarLibro(&datos_dinámicos[18], 19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4);
    InicializarLibro(&datos_dinámicos[19], 20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14);
    InicializarLibro(&datos_dinámicos[20], 21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6);
    InicializarLibro(&datos_dinámicos[21], 22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8);
    InicializarLibro(&datos_dinámicos[22], 23, "Othello", "William Shakespeare", 10.99, TEATRO, 7);
    InicializarLibro(&datos_dinámicos[23], 24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5);
    InicializarLibro(&datos_dinámicos[24], 25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4);
    InicializarLibro(&datos_dinámicos[25], 26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10);
    InicializarLibro(&datos_dinámicos[26], 27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9);
    InicializarLibro(&datos_dinámicos[27], 28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3);
    InicializarLibro(&datos_dinámicos[28], 29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15);
    InicializarLibro(&datos_dinámicos[29], 30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10);
    InicializarLibro(&datos_dinámicos[30], 31, "Paradise Lost", "John Milton", 12.00, POESIA, 7);
    InicializarLibro(&datos_dinámicos[31], 32, "Beowulf", "Anonymous", 15.00, POESIA, 5);
    InicializarLibro(&datos_dinámicos[32], 33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4);
    InicializarLibro(&datos_dinámicos[33], 34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9);
    InicializarLibro(&datos_dinámicos[34], 35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11);
    InicializarLibro(&datos_dinámicos[35], 36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8);
    InicializarLibro(&datos_dinámicos[36], 37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5);
    InicializarLibro(&datos_dinámicos[37], 38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12);
    InicializarLibro(&datos_dinámicos[38], 39, "The Republic", "Plato", 16.00, ENSAYO, 6);
    InicializarLibro(&datos_dinámicos[39], 40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10);

/*
1. Ejecutable
Palabra en referencia a la función que quieras llamar, como "mostrar" para ver todo el catálogo de libros
2. Que necesite un argumento; mostrar 
3. Que necesite dos argumentos; mostrarID, categoría y autor
4. Que necesite 3 argumentos; aumentar y añadirN

Por ejemplo; ./P6_GestiónBiblioteca_SofíaLópez.out mostrarID 4 (y entonces se imprime el libro con el ID 4)
*/

    if(argc == 1){
        // aquí te imprime el ejecutable

    } else if(argc == 2){
        // en este condicional llamaremos a las funciones que necesiten solo dos argumentos en la línea de comandos, en este caso, el ejecutable y la llamada a la función
        if(strcmp(argv[1], "mostrar") == 0){ // strcmp compara las cadenas de caracteres 
            printf("Llamo a mi función mostrar todos los libros\n");
            imprimir_libros(datos, CANT_LIBROS); // llamamos a la función
        } 

    } else if (argc == 3){
        // en este condicional, llamamos a las funciones que necesiten más de dos argumentos en la línea de comandos
        if (strcmp(argv[1], "mostrarID") == 0){ // para mostrar los libros en función del id
            printf("Llamo a mi función mostrar\n");
            int ID = atoi(argv[2]); // aquí meto un atoi porque el ID es un entero, pero el argv es un char*, entonces o transformamos de cadena de caracteres a un entero
            coincidencia(datos, 40, ID);

        } else if (strcmp(argv[1], "categoría") == 0){ // imprimir en función de la categoría
            printf("Llamo a mi función de imprimir los libros de la misma categoría\n");
            int argumento_introducido_categoría = atoi(argv[2]);
            imprimir_categoría(datos, 40, argumento_introducido_categoría);

        } else if (strcmp(argv[1], "mostrarA") == 0){ // para imprimir los libros en función del autor
            printf("Llamo a mi función para buscar los libros de un autor determinado\n");
        }
    } else if (argc == 4){
        if (strcmp(argv[1], "aumentar") == 0){ // para aumentar la cantidad disponible
            printf("Aumentar el stock, en función del ID, poniendo la cantidad que quiero\n");
            int selección = atoi(argv[2]);
            int cantidad_añadir = atoi(argv[3]);
            aumento(datos, 40, selección, cantidad_añadir);

        } else if (strcmp(argv[1], "añadirN") == 0){ // este para añadir nuevos libros
            printf("Llamo a mi función añadir\n");
        }
    }

   // BUCLE FOR PARA LOS VALORES DEL MAIN
    printf("\n");
    printf("Lista de argumentos:\n");
    for(int i = 0; i < argc; i++){
        printf("Argumento %d: %s\n", i, argv[i]);
        // argc; número de argumento
        // argv[0] es el nombre del programa
        // argv[1] "mostrar"
        // argv[2] es 15, debido a que al compilar pones ./(nombre_ejecutable) (mostrar) (15)
    }

    free(datos_dinámicos);
    return EXIT_SUCCESS;
}