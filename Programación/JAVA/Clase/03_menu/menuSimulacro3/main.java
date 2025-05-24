package examen2;

import java.util.Scanner;

public class main {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		// BIBLIOTECA
		Biblioteca biblio = new Biblioteca("Biblioteca de prueba");
		
		// CREAMOS ARTÍCULOS
		Libro libro = new Libro("1", "HP", true, "JKR");
		Revista revista = new Revista("2", "Hola", true, 13);
		
		// CREAMOS USUARIOS
		Usuario user1 = new Usuario("3", "Sofia");
		Usuario user2 = new Usuario("4", "Patri");
		
		int respuesta;
		String respuesta2;
		boolean salida = true;
		
		do {
			System.out.println("\nBienvenidos a la biblioteca:");
			System.out.println("1. agregar artículo");
			System.out.println("2. buscar artículo");
			System.out.println("3. coger artículo");
			System.out.println("4. dejar artículo");
			System.out.println("5. mostrar biblioteca");
			System.out.println("6. mostrar préstamos");
			System.out.println("7. mostrar préstamos por usuario");
			System.out.println("default. salir");
			System.out.print("OPCIÓN: ");
			
			if(entrada.hasNextInt()) {
				respuesta = entrada.nextInt();
				
				switch(respuesta) {
				case 1: 
					entrada.nextLine();
					biblio.agregarArticulo(libro);
					biblio.agregarArticulo(revista);
					System.out.println("Artículos agregados correctamente");
					break;
				case 2: 
					entrada.nextLine();
					System.out.println("Introduce el id: ");
					respuesta2 = entrada.nextLine();
					biblio.buscarArticulo(respuesta2);
					break;
				case 3: 
					entrada.nextLine();
					System.out.println("Introduce el id del artículo que quieras: ");
					String id = entrada.nextLine();
					
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
				    
					System.out.println("Introduce la fecha: ");
					String fecha = entrada.nextLine();
					biblio.prestarArticulo(id, usuario, fecha);
					break;
				case 4: 
					entrada.nextLine();
					System.out.println("Introduce el id a devolver: ");
					String id2 = entrada.nextLine();
					biblio.devolverArticulo(id2);
					System.out.println("Artículo devuelto");
					break;
				case 5: 
					entrada.nextLine();
					biblio.mostrar();
					break;
				case 6: 
					entrada.nextLine();
					biblio.mostrarPrestamos();
					break;
				case 7: 
					entrada.nextLine();
					System.out.println("Introduce el id del usuario: ");
					id = entrada.nextLine();
					biblio.mostarPU(id);
					break;
				default:
					System.out.println("Has salido del programa");
					salida = false;
					break;
				}
			} else {
				System.out.println("Respuesta no válida");
				entrada.nextLine();
			}
			
		} while(salida == true);
		
		entrada.close();
	}

}
