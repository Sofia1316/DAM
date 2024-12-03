#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TÍTULO 80
#define MAX_AUTOR 50
#define MAX_BUFFER 300

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
	Categoria categoria;
	int cantidad_disponible;
} Libros;

// APARTADO 1; Función para imprimir todos los libros
void imprimir_libros(const Libros * Libros){
    for (int i = 0; i < 40; i++) {
		printf("%d, %s, %s, %0.2f, %d, %d\n", Libros[i].id, Libros[i].título, Libros[i].autor, Libros[i].precio, Libros[i].categoria, Libros[i].cantidad_disponible);
	}
}

//APARTADO 2; Mostrar el libro que coincida con el ID o un mensaje de error.
void coincidencia(const Libros * Libros, int numero_libros){
    int ID;
    printf("Introduce el id del libro que desees ver: ");
    scanf("%d", &ID);

    int localizar = 0;
    for(int i = 0; i < numero_libros; i++) {
        if(Libros[i].id == ID){
            printf("%s, %s, %0.2f, %d, %d\n", 
            Libros[i].título, Libros[i].autor, Libros[i].precio, Libros[i].categoria, Libros[i].cantidad_disponible);
            localizar = 1;
            break;
        } 
    } 
    
    if(!localizar){
        printf("Libro no encontrado\n");   
    }
}

//APARTADO 3; Aumentar el stock del libro ID en la cantidad dada como argumento e imprimir la información pertinente
void aumento(Libros * Stock){
    int cantidad_añadir;
    int selección;

    printf("¿De qué libro deseas aumentar el stock?: ");
    scanf(" %d", &selección);
    if(selección <= 40 && selección >= 0){
        printf("¿Qué cantidad deseas añadir al stock?: ");
        scanf(" %d", &cantidad_añadir);
        Stock->cantidad_disponible = Stock->cantidad_disponible + cantidad_añadir;
        printf("El stock nuevo es de %d\n", Stock->cantidad_disponible);
        // Se pone con flecha para referirnos al puntero al que estamos apuntando en los () de la función, y entonces
        // ponemos un = para poder modificarla y, en este caso, sumarle la cantidad que hemos metido en el scanf
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

	// APARTADO 1; MOSTRAR TODOS LOS LIBROS
	imprimir_libros(datos);

	// APARTADO 2; MOSTRAR LIBRO QUE COINCIDA CON EL ID (o mensaje de un error)
    coincidencia(datos, 40);

    //APARTADO 3; Aumentar el stock del libro ID en la cantidad dada como argumento e imprimir la información pertinente
    aumento(datos);

	return EXIT_SUCCESS;

/* APUNTES DE LA PRÁCTICA 6

FUNCIÓN PARA TODOS LOS LIBROS
void printfAllBooks(Libro * Catálogo){ // apuntamos a el primer valor del array
    for(int i = 0; i < MAX_BUFFER; i++){
        imprimirlibro(solo_un_libro);
    }
}

FUNCIÓN PARA UN LIBRO
void printfBooks(Libro * Catálogo){ // apuntamos a el primer valor del array
    printf("Id: %d", Catálogo->id);
}

*/

}
