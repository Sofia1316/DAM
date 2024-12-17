  #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TÍTULO 80
#define MAX_AUTOR 50

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
void coincidencia(const Libros * Libro_id, int numero_libros){  
// En esta función añadimos la variable "int numero_libros" para que esta sepa cuántos libros hay en el array al que apunta el puntero "Libros"
// Esto se debe a que como tal el array no guarda su tamaño y (Libros * Libro_id) solo apunta al primer elemento del array
    
    int ID;
    printf("Introduce el id del libro que desees ver: ");
    scanf("%d", &ID);

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
void aumento(Libros * Stock, int numero_libros){ // Como en esta función queremos que se modifique el array de Libros, no ponemos el const
    int cantidad_añadir;
    int selección;

    printf("¿De qué libro deseas aumentar el stock? Introduce el ID: ");
    scanf(" %d", &selección);
    
    if(selección <= 40 && selección >= 0){
        for(int i = 0; i < numero_libros; i++){
            if(selección == Stock[i].id){
                printf("¿Qué cantidad deseas añadir al stock?: ");
                scanf(" %d", &cantidad_añadir);
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
void imprimir_categoría(const Libros * mostrar_categoría, int numero_libros){
    int argumento_introducido_categoría;

    // MOSTRAR MENÚ PARA VER QUÉ Nº CORRESPONDE A CADA CATEGORÍA
    printf("OPCIONES:\n");
    printf("\tFICCION = 0\n");
    printf("\tNO_FICCION = 1\n");
    printf("\tPOESIA = 2\n");
    printf("\tTEATRO = 3\n");
    printf("\tENSAYO = 4\n");

    printf("¿De qué categoría quieres ver los libros?: ");
    scanf(" %d", &argumento_introducido_categoría);

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

int main(){
	// ARRAY ESTÁTICO DE LOS LIBROS DE LA BIBLIOTECA (EN TOTAL SON 40)
	Libros datos[40] = {
	    {1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10},
        {2, "1984", "George Orwell", 12.49, FICCION, 5},
        {3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8},
        {4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12},
        {5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7},
        {6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9},
        {7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6},
        {8, "The Odyssey", "Homer", 17.49, FICCION, 4},
        {9, "Ulysses", "James Joyce", 25.00, FICCION, 2},
        {10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3},
        {11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11},
        {12, "The Iliad", "Homer", 18.50, FICCION, 7},
        {13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15},
        {14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20},
        {15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13},
        {16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6},
        {17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5},
        {18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8},
        {19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4},
        {20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14},
        {21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6},
        {22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8},
        {23, "Othello", "William Shakespeare", 10.99, TEATRO, 7},
        {24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5},
        {25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4},
        {26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10},
        {27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9},
        {28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3},
        {29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15},
        {30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10},
        {31, "Paradise Lost", "John Milton", 12.00, POESIA, 7},
        {32, "Beowulf", "Anonymous", 15.00, POESIA, 5},
        {33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4},
        {34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9},
        {35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11},
        {36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8},
        {37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5},
        {38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12},
        {39, "The Republic", "Plato", 16.00, ENSAYO, 6},
        {40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10}
	}; 

    // MENÚ PARA SELECCIONAR
    int opción;
    printf("¿Qué opción deseas seleccionar?\n");
    printf(" 1. Mostrar todos los libros.\n");
    printf(" 2. Mostrar el libro que coincida con el ID.\n");
    printf(" 3. Aumentar el stock de un libro introduciendo su ID.\n");
    printf(" 4. Mostrar todos los libros de la categoría que introduzcas.\n"); 
    printf(" 5. Mostrar los libros del autor dado.\n");
    
    scanf("%d", &opción);

    // Switch de "opción" para que imprima lo que elijas en el scanf
    switch(opción){
        case 1:
            // APARTADO 1; Mostrar todos los libros.
            imprimir_libros(datos);
            break;
        case 2:
            // APARTADO 2; Mostrar el libro que coincida con el ID (o mensaje de un error)
            coincidencia(datos, 40); // pongo el 40 porque como en el void de arriba (con el int numero_libros) le digo el tamaño del array
            break;
        case 3:
            //APARTADO 3; Aumentar el stock del libro ID en la cantidad dada como argumento e imprimir la información pertinente
            aumento(datos, 40);
            break;
        case 4:
            //APARTADO 4; Mostrar todos los libros de la categoría dada como argumento.
            imprimir_categoría(datos, 40);
            break;
        case 5:
            //SALIR DEL PROGRAMA
            return EXIT_SUCCESS;
        default:
            printf("Opción no válida");
        }

    return EXIT_SUCCESS;
}