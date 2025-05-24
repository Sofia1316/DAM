package examen1;

import java.util.Scanner;

public class main {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		// Nombre de biblioteca
		Biblioteca biblio = new Biblioteca("Biblioteca de Sofi");
		
		// Creamos artículos
		Libro libro1 = new Libro("1", "Los juegos del hambre", true, "Suzanne collins");
		Revista revista1 = new Revista("2", "ABC", true, 13);
		
		// Creamos usuarios
		Usuario user1 = new Usuario("3", "Sofia López");
		Usuario user2 = new Usuario("4", "Paula Burgos");
		
		int respuesta;
		boolean salida = true;
		
		do {
			System.out.println("\nBienvenido a la biblio elije una opción:");
			System.out.println("1. Agregar artículo");
			System.out.println("2. Buscar artículo por ID");
			System.out.println("3. Prestar artículo");
			System.out.println("4. Devolver artículo");
			System.out.println("5. Mostrar todos los artículos");
			System.out.println("6. Mostrar los préstamos");
			System.out.println("7. Mostrar los préstamos por usuario");
			System.out.println("Default. Salir");
			System.out.print("Opción: ");
			
			if(entrada.hasNextInt()) {
				respuesta = entrada.nextInt();
				
				switch(respuesta) {
				case 1:
					entrada.nextLine();
					biblio.agregarArticulo(libro1);
					biblio.agregarArticulo(revista1);
					System.out.println("Libro y revista agregada");
					break;
					
				case 2:
					entrada.nextLine();
					System.out.println("Introduce el id: ");
					String respuesta2 = entrada.nextLine();
					
					Articulo resultado = biblio.buscarArticuloID(respuesta2);
					if(resultado != null) {
						System.out.println("Artículo encontrado: " + resultado);
					} else {
						System.out.println("No hay ningún artículo con esa ID");
					}
					break;
					
				case 3:
					entrada.nextLine();
					System.out.print("Introduce el ID del artículo que quieres:");
				    String ida = entrada.nextLine();

				    System.out.print("Introduce el ID del usuario:");
				    String idu = entrada.nextLine();

				    Usuario usuario = null;
				    if (idu.equals(user1.getIdUsuario())) {
				        usuario = user1;
				    } else if (idu.equals(user2.getIdUsuario())) {
				        usuario = user2;
				    } else {
				        System.out.println("no existe el usuario");
				    }

				    System.out.print("Introduce la fecha:");
				    String fecha = entrada.nextLine();

				    boolean prestado = biblio.prestarArticulo(ida, usuario, fecha);
					break;
					
				case 4:
					entrada.nextLine();
					System.out.println("Introduce el ID del libro a devolver");
					String id = entrada.nextLine();
					biblio.devolverArticulo(id);
					break;
					
				case 5:
					entrada.nextLine();
					biblio.mostarTodo();
					break;
					
				case 6:
					entrada.nextLine();
					biblio.mostarPrestamos();
					break;
					
				case 7:
					entrada.nextLine();
					System.out.print("Introduce el ID del usuario: ");
					String idUsu = entrada.nextLine();

					biblio.mostarPresUser(idUsu);
					
					break;
				default:
					System.out.println("Saliendo del programa");
					salida = false;
					break;
				}
			} else {
				System.out.println("Opción no válida, introduce un nº entero");
			}
			
		} while (salida == true);
		
		entrada.close();
	}
		
}
