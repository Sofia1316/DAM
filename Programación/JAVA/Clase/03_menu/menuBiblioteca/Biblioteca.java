package menuBiblio;

import java.util.ArrayList;
import java.util.Scanner;

public class Biblioteca {

	static Scanner entrada = new Scanner(System.in);
	
	static ArrayList<Libros> libros = new ArrayList<>();
	static ArrayList<Revistas> revistas = new ArrayList<>();
	static Prestamo prestamo = null;
	
	public static void main(String[] args) {
		menu();
		entrada.close();
	}

	public static void menu() {
		boolean salida = true;
		
		do {
			System.out.println("\nBIENVENIDOS A LA BIBLIOTECA DE ESCRIBAS: ");
			System.out.println("\t1. Agregar artículo");
			System.out.println("\t2. Buscar artículo por ID");
			System.out.println("\t3. Coger prestado un artículo");
			System.out.println("\t4. Mostrar biblioteca");
			System.out.println("\t5. Salir");
			System.out.print("OPCIÓN: ");
			
			if(entrada.hasNextInt()) {
				int respuesta = entrada.nextInt();
				
				switch(respuesta) {
				case 1:
					System.out.println("¿Libro (1) o revista (2)?");
					respuesta = entrada.nextInt();
					
					if (respuesta == 1) {
						aLibro();
					} else if (respuesta == 2){
						aRevista();
					} else {
						System.out.println("Respuesta no válida");
					}
					break;
				case 2:
					System.out.println("¿Libro (1) o revista (2)?");
					respuesta = entrada.nextInt();
					
					if (respuesta == 1) {
						bLibro();
					} else if (respuesta == 2){
						bRevista();
					} else {
						System.out.println("Respuesta no válida");
					}
					break;
				case 3:
					System.out.println("¿Libro (1) o revista (2)?");
					respuesta = entrada.nextInt();
					
					if (respuesta == 1) {
						pLibro();
					} else if (respuesta == 2){
						pRevista();
					} else {
						System.out.println("Respuesta no válida");
					}
					break;
				case 4:
					mostrarBiblio();
					break;
				case 5:
					System.out.println("Programa finalizado");
					salida = false;
					break;
				default:
					System.out.println("Respuesta inválida");
					break;
				}
			} else {
				System.out.println("Introduce un número entre 1 y 5");
				entrada.nextLine();
			}
			
		} while(salida == true);
	}
	
	public static void aLibro() {
		entrada.nextLine();
		
		System.out.print("ID: ");
		int id = entrada.nextInt();
		entrada.nextLine();
		
		System.out.print("Título: ");
		String titulo = entrada.nextLine();
		
		System.out.println("¿Está disponible? (si/no): ");
		String disponible = entrada.nextLine();
		
		boolean disp = false;
		if(disponible.equals("si")) {
			disp = true;
		} else if(disponible.equals("no")){
			disp= false;
		} else {
			System.out.println("Respuesta no válida, introduce 'si' o 'no'");
		}
		
		System.out.println("Introduce el autor del libro: ");
		String autor = entrada.nextLine();
		
		Libros nuevoLibro = new Libros(id, titulo, disp, autor);
		libros.add(nuevoLibro);
		System.out.println("Libro creado");
	}
	
	public static void aRevista() {
		entrada.nextLine();
		
		System.out.print("ID: ");
		int id = entrada.nextInt();
		entrada.nextLine();
		
		System.out.print("Título: ");
		String titulo = entrada.nextLine();
		
		System.out.print("¿Está disponible? (si/no): ");
		String disponible = entrada.nextLine();
		
		boolean disp = false;
		if(disponible.equals("si")) {
			disp = true;
		} else if(disponible.equals("no")){
			disp= false;
		} else {
			System.out.println("Respuesta no válida, introduce 'si' o 'no'");
		}
		
		System.out.println("Introduce el número de edición: ");
		int edicion = entrada.nextInt();
		
		Revistas nuevaRevista = new Revistas(id, titulo, disp, edicion);
		revistas.add(nuevaRevista);
		
		System.out.println("Revista creada");
	}
	
	public static void bLibro() {
		entrada.nextLine();
		System.out.print("Introduce el ID del libro a buscar: ");
	    int idBuscado = entrada.nextInt();
	    boolean encontrado = false;

	    for (Libros l : libros) {
	        if (l.getIdArt() == idBuscado) {
	            System.out.println("Libro encontrado:");
	            System.out.println(l);
	            encontrado = true;
	            break;
	        }
	    }

	    if (!encontrado) {
	    	System.out.println("ID no encontrado");
	    }
	}

	public static void bRevista() {
		entrada.nextLine();
		System.out.print("Introduce el ID de la revista a buscar: ");
	    int idBuscado = entrada.nextInt();
	    boolean encontrado = false;

	    for (Revistas r : revistas) {
	        if (r.getIdArt() == idBuscado) {
	            System.out.println("Revista encontrado:");
	            System.out.println(r);
	            encontrado = true;
	            break;
	        }
	    }

	    if (!encontrado) {
	        System.out.println("ID no encontrado");
	    }
	}
	
	public static void pLibro() {
		entrada.nextLine();
		
		System.out.print("Introduce el ID del libro a prestar: ");
	    int idBuscado = entrada.nextInt();
	    boolean encontrado = false;

	    for (Libros l : libros) {
	        if (l.getIdArt() == idBuscado) {
	            encontrado = true;
	            if (l.isDisponibilidad()) {
	                l.prestar(); // Cambiar disponibilidad a false

	                entrada.nextLine(); // limpiar buffer
	                System.out.print("Introduce la fecha del préstamo (dd/mm/aaaa): ");
	                String fecha = entrada.nextLine();

	                prestamo = new Prestamo(l, fecha);
	                System.out.println("Artículo prestado correctamente:");
	                System.out.println(prestamo);

	            } else {
	                System.out.println("Este libro no está disponible.");
	            }
	            break;
	        }
	    }

	    if (!encontrado) {
	        System.out.println("No se encontró ningún libro con ese ID.");
	    }
	}
	
	public static void pRevista() {
		entrada.nextLine();
		
		System.out.print("Introduce el ID de la revista a prestar: ");
	    int idBuscado = entrada.nextInt();
	    boolean encontrado = false;

	    for (Revistas r : revistas) {
	        if (r.getIdArt() == idBuscado) {
	            encontrado = true;
	            if (r.isDisponibilidad()) {
	                r.prestar(); // Cambiar disponibilidad a false

	                entrada.nextLine(); // limpiar buffer
	                System.out.print("Introduce la fecha del préstamo (dd/mm/aaaa): ");
	                String fecha = entrada.nextLine();

	                prestamo = new Prestamo(r, fecha);
	                System.out.println("Artículo prestado correctamente:");
	                System.out.println(prestamo);

	            } else {
	                System.out.println("Este libro no está disponible.");
	            }
	            break;
	        }
	    }

	    if (!encontrado) {
	        System.out.println("No se encontró ningún libro con ese ID.");
	    }
	}
	
	public static void mostrarBiblio() {
		entrada.nextLine();
		
	    if (libros.isEmpty() && revistas.isEmpty()) {
	        System.out.println("La biblioteca está vacía");
	        
	    } else {
	        System.out.println("Libros:");
	        for (Libros l : libros) {
	            System.out.println(l);
	        }

	        System.out.println("\nRevistas:");
	        for (Revistas r : revistas) {
	            System.out.println(r);
	        }
	    }
	}
}
