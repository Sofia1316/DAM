import java.util.List;

public class inicio {
    public static void main(String[] args) throws Exception {
        Libro quijote = new Libro("Don Quijote de la Mancha", "Miguel de Cervantes", 1605, "Novela",
                "978-3-16-148410-0");
        Libro harryPotter = new Libro("Harry Potter y la piedra filosofal", "J.K. Rowling", 1997, "Fantasía",
                "978-0-7475-3271-9");

        Biblioteca biblioteca = new Biblioteca();
        biblioteca.agregarLibro(quijote);
        biblioteca.agregarLibro(harryPotter);

        List<Libro> librosPorAutor = biblioteca.buscarPorAutor("J.K. Rowling");
        System.out.println("Libros de J.K. Rowling:");
        for (Libro libro : librosPorAutor) {
            System.out.println(libro.getTitulo());
        }
    }
}
