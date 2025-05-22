package simulacro;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

public class Biblioteca {

	static Scanner entrada = new Scanner(System.in);
	static ArrayList<Libro> libros = new ArrayList<>();
	static ArrayList<Revista> revistas = new ArrayList<>();
	static ArrayList<Prestamo> prestamos = new ArrayList<>();
	static Usuario user1 = new Usuario("1", "Sofia");
	
	public static void main(String[] args) {
		menu();
		entrada.close();
	}
	
	public static void menu() {
		int respuesta;
		boolean salida = true;
		
		do {
			System.out.println("\nBIENVENIDO A LA BIBLIOTECA: ");
			System.out.println("\t1. Agregar artículo");
			System.out.println("\t2. Buscar artículo por ID");
			System.out.println("\t3. Prestar artículo");
			System.out.println("\t4. Devolver artículo");
			System.out.println("\t5. Mostrar biblioteca");
			System.out.println("\t6. Mostrar préstamos");
			System.out.println("\t7. Mostrar préstamos por usuario");
			System.out.println("\t8. Salir");
			System.out.print("Opción: ");
			
			if (entrada.hasNextInt()) {
				respuesta = entrada.nextInt();
				
				switch(respuesta) {
				case 1:
					System.out.println("Libro o revista? (1/2)");
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
					System.out.println("Libro o revista? (1/2)");
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
					System.out.println("Libro o revista? (1/2)");
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
					System.out.println("Libro o revista? (1/2)");
					respuesta = entrada.nextInt();
					
					if (respuesta == 1) {
						dLibro();
					} else if (respuesta == 2){
						dRevista();
					} else {
						System.out.println("Respuesta no válida");
					}
					break;
				case 5:
					mostrarBiblioteca();
					break;
				case 6:
					mostrarPrestamos();
					break;
				case 7:
					mostrarPrestamosUsuario();
					break;
				case 8:
					System.out.println("Has salido del programa");
					salida = false;
					break;
				default:
					System.out.println("Respuesta no válida, introduce un nº entre 1 y 8");
					salida = false;
					break;
				}
			} else {
				System.out.println("Debes introducir un nº entre 1 y 8");
				entrada.nextLine();
			}
			
		} while(salida == true);
	}
	
	public static void aLibro() {
		entrada.nextLine();
		
		System.out.print("ID: ");
		String id = entrada.nextLine();
		System.out.print("Titulo: ");
		String titulo = entrada.nextLine();
		System.out.print("¿Está disponible? (si/no)");
		String dispAux = entrada.nextLine();
		
		boolean disponible = false;
		if(dispAux.equals("si")) {
			disponible = true;
		} else if (dispAux.equals("no")) {
			disponible = false;
		} else {System.out.println("Introduce literalmente 'si' o 'no'");}
		
		System.out.println("Introduce el autor: ");
		String autor = entrada.nextLine();
		
		Libro libro = new Libro(id, titulo, disponible, autor);
		libros.add(libro);
		
		System.out.println("Libro creado");
	}
	
	public static void aRevista() {
		entrada.nextLine();

		System.out.print("ID: ");
		String id = entrada.nextLine();
		System.out.print("Titulo: ");
		String titulo = entrada.nextLine();
		System.out.print("¿Está disponible? (si/no)");
		String dispAux = entrada.nextLine(); 

		boolean disponible = false;
		if(dispAux.equals("si")) {
			disponible = true;
		} else if (dispAux.equals("no")) {
			disponible = false;
		} else {System.out.println("Introduce literalmente 'si' o 'no'");}
		
		System.out.println("Introduce el número de edición: ");
		int edicion = entrada.nextInt();
		
		Revista revista = new Revista(id, titulo, disponible, edicion);
		revistas.add(revista);
		
		System.out.println("Revista creado");
	}
	
	public static ArrayList<Libro> bLibro() {
		entrada.nextLine();
		boolean encontrado = false;
		
		if(libros == null) {
			System.out.println("No hay libros en la biblioteca");
		}
		
		System.out.println("Introduce el ID para buscarlo: ");
		String id = entrada.nextLine();
		
		for(Libro l : libros) {
			if(l.getId().equals(id)) {
				System.out.println("Libro encontrado");
				System.out.println(l);
				encontrado = true;
			} else {
				System.out.println("Libro no encontrado");
				encontrado = false;
			}
		}
		return libros;
	}
	
	public static ArrayList<Revista> bRevista() {
		entrada.nextLine();
		boolean encontrado = false;
		
		if(revistas == null) {
			System.out.println("No hay revistas en la biblioteca");
		}
		
		System.out.print("Introduce el ID para buscarlo: ");
		String id = entrada.nextLine();
		
		for(Revista r : revistas) {
			if(r.getId().equals(id)) {
				System.out.println("Revista encontrado");
				System.out.println(r);
				encontrado = true;
			} else {
				System.out.println("Revista no encontrado");
				encontrado = false;
			}
		}
		
		return revistas;
	}

	public static boolean pLibro() {
		entrada.nextLine();
		boolean devuelto = false;
		
		if(libros == null) {
			System.out.println("No hay libros en la biblioteca");
		}
		
		System.out.print("Introduce el ID para cogerlo prestado: ");
		String prest = entrada.nextLine();
		
		System.out.print("Qué día lo estás cogiendo prestado: ");
		String fecha = entrada.nextLine();
		
		for(Libro l : libros) {
			if(l.getId().equals(prest)) {
				System.out.println("Libro encontrado");
				System.out.println(l);
				devuelto = true;
				l.prestar();
				Prestamo.getContadorPrestamos();
			} else {
				System.out.println("Libro no encontrado");
				devuelto = false;
			}
		}
		
		Prestamo prestamo = new Prestamo(null, user1, fecha);
		prestamos.add(prestamo);
		
		return devuelto;
		
	}
	
	public static boolean pRevista() {
		entrada.nextLine();
		boolean devuelto = false;
		
		if(revistas == null) {
			System.out.println("No hay revistas en la biblioteca");
		}
		
		System.out.print("Introduce el ID para cogerlo prestado: ");
		String prest = entrada.nextLine();
		
		System.out.print("Qué día lo estás cogiendo prestado: ");
		String fecha = entrada.nextLine();
		
		for(Revista r : revistas) {
			if(r.getId().equals(prest)) {
				System.out.println("Revista encontrado");
				System.out.println(r);
				devuelto = true;
				r.prestar();
				Prestamo.getContadorPrestamos();
			} else {
				System.out.println("Revista no encontrado");
				devuelto = false;
			}
		}
		
		return devuelto;
		
	}
	
	public static boolean dLibro() {
		entrada.nextLine();
		boolean devuelto = false;
		
		if(libros == null) {
			System.out.println("No hay libros en la biblioteca");
		}
		
		System.out.print("Introduce el ID para devolverlo: ");
		String prest = entrada.nextLine();
		
		for(Libro l : libros) {
			if(l.getId().equals(prest)) {
				System.out.println("Libro encontrado");
				System.out.println(l);
				//devuelto = true;
				l.devolver();
			} else {
				System.out.println("Libro no encontrado");
				devuelto = false;
			}
		}
		
		Prestamo prestamo = new Prestamo(null, user1, prest);
		prestamos.add(prestamo);
		
		return devuelto;
		
	}
	
	public static boolean dRevista() {
		entrada.nextLine();
		boolean devuelto = false;
		
		if(libros == null) {
			System.out.println("No hay revistas en la biblioteca");
		}
		
		System.out.print("Introduce el ID para devolverlo: ");
		String prest = entrada.nextLine();
		
		for(Revista r : revistas) {
			if(r.getId().equals(prest)) {
				System.out.println("Revista encontrada");
				System.out.println(r);
				devuelto = true;
				r.devolver();
			} else {
				System.out.println("Revista no encontrada");
				devuelto = false;
			}
		}
		
		Prestamo prestamo = new Prestamo(null, user1, prest);
		prestamos.add(prestamo);
		
		return devuelto;
		
	}
	
	public static void mostrarBiblioteca() {
		entrada.nextLine();
		boolean vacio = true;
		
		if(libros != null) {
			System.out.println(libros);
			vacio = false;
		}
		if(revistas != null) {
			System.out.println(revistas);
			vacio = false;
		}
		if(vacio == true) {
			System.out.println("La biblioteca está vacía");
		}
	}
	
	public static void mostrarPrestamos() {
		entrada.nextLine();
		
		if(prestamos != null) {
			System.out.println(prestamos);
		}
	}
	
	public static void mostrarPrestamosUsuario() {
		entrada.nextLine();
		System.out.println("No me ha dado tiempo a hacerlo :)");
	}

}
