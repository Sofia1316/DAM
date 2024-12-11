#include <stdio.h>
#include <stdlib.h> // Para malloc, free, etc.

int main() {
    int * p_error = malloc(sizeof(int)); // Reservar espacio para un int
    // Aquí hay un casting implícito
    // Malloc devuelve un void, por lo que hay que convertirlo para poder utilizarlo

    int * p = (int *) malloc(sizeof(int)); // Esta es la buena práctica, ya que es un casting implícito

    // En el caso de que al intentar reservar un espacio de memoria y tu ordenador no tiene espacio, este te
    // dará un NULL, dando a entender que el MALLOC ha fallado, ya que no hay memoria disponible
    if (p == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }

    *p = 42; // Usamos la memoria
    printf("El valor es: %d\n", *p);
    free(p); // Liberamos la memoria reservada que hemos metido de forma manual
    return 0;
}
/* TEMARIO DE CLASE SOBRE MEMORIA DINÁMICA

malloc; reserva la memoria, pero esa memoria puede tener algo de por sí
calloc; esa memoria que reserva, son todo ceros

int main() { 
    Libro a= {1, "T", "Autor", 12, 0, 10}; // este array reserva automáticamente el array
    Libro *p = &a // automáticamente reserva sizeof(Libro*)
    p = añadirLibro(); //
    p->id; // si se puede hacer
    free(p); // esta variable libera toda esa memoria que he guardado manualmente (Libera sizeof(Libro) bytes)

}   por lo que al llegar aquí, se libera todas las direcciones de memorias creadas automáticamente

void añadirLibro(){
    Libro * j = malloc (sizeof(Libro)); // en este caso, malloc te reserva un espacio para que entre un Libro
    pero en el caso de que quiera reservar espacios para 40 libros, sería (40 * sizeof(Libro)), es decir, lo estás multiplicando
    j -> id = 5 // y entonces se te reserva en el espacio (que te ha dado malloc) en el apartado del ID
    j -> cantidad_disponible = 7 // esta también se reserva en el espacio que el malloc te ha dado
    return(); // esto es la inicialización de libro
}

Pero entonces, cuando se termina las funciones, como por ejemplo el void o el main, al crear una una variable se crea un espacio
de memoria de forma automática, y al acabar la función, se libera automáticamente (del HEAP se queda vacío cuando se acabe por ejemplo el main)
Pero si queremos eliminar la manual creada del malloc, pondré free(y el nombre de la variable que quiero liberar)
}

CASO DE QUERER CREAR UNA MEMORIA MANUAL PARA LOS 40 LIBROS

int main(){
    Libro * catálogo = malloc(sizeof(Libros) * 40);
    showbook(catálogo); // este imprime el primero
    showbook(catálogo + 3); // este imprime el cuarto, ya que en realidad este 3 es (3 * sizeof(Libro)). Por lo que
    no pasas de ID al autor, si no que salta de una dirección de memoria a otra (de una dirección de memoria de un libro a otro)
    free(catálogo);    

el realloc, libera, reserva y copia
}

*/
