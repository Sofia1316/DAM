package examen3;

import java.util.Scanner;

public class main {

	static Scanner entrada = new Scanner(System.in);
	
	static Perro perr1 = null;
	static Propietario prop = null;
	
	public static void main(String[] args) {
		// NOMBRE VETERINARIO
		Veterinario vet = new Veterinario("Veterinario de sofi");
		
		// ANIMALES Y PROPIETARIOS
		Perro perro1 = new Perro("1", "Kuma", 6, true, "akita");
		Gato gato1 = new Gato("2", "Silvestre", 4, true, "anaranjado");
		Propietario prop1 = new Propietario("3", "miri");
		Propietario prop2 = new Propietario("4", "sofi");
		
		int respuesta;
		String respuesta2;
		boolean salida = true;
		
		do {
			System.out.println("\nBIENVENIDOS AL VETERINARIO:");
			System.out.println("1. Agregar animales y propietarios predeterminados");
			System.out.println("2. Añadir nuevos");
			System.out.println("3. Buscar animales por id");
			System.out.println("4. Mostrar animales");
			System.out.println("5. Hacer una consulta nueva");
			System.out.println("6. Finalizar una consulta");
			System.out.println("7. Mostrar todas las consultas");
			System.out.println("8. Mostrar consultas por propietario");
			System.out.println("9. Número total de consultas");
			System.out.println("default. salir");
			System.out.print("Opción: ");
			
			if(entrada.hasNextInt()) {
				respuesta = entrada.nextInt();
				
				switch(respuesta) {
				case 1:
					entrada.nextLine();
					vet.agregarAnimal(gato1);
					vet.agregarAnimal(perro1);
					vet.agregarPropietario(prop1);
					vet.agregarPropietario(prop2);
					System.out.println("Animales y propietarios agregados");
					break;

				case 2:
					entrada.nextLine();
					System.out.println("perro o propietario? (1/2)");
					respuesta = entrada.nextInt();
					entrada.nextLine();
					
					if(respuesta == 1) {
						System.out.print("Introduce id: ");
						String id = entrada.nextLine();
						System.out.print("Introduce un nombre: ");
						String nombre = entrada.nextLine();
						System.out.print("Edad: ");
						int edad = entrada.nextInt();
						entrada.nextLine();
						System.out.println("Están atendidos: ");
						String atn = entrada.nextLine();
						
						boolean atendido = true;
						if(atn.equals("si")) {
							atendido = true;
						} else if(atn.equals("no")) {
							atendido = false;
						} 
						
						System.out.println("Introduce la raza");
						String raza = entrada.nextLine();
						
						Perro perr1 = new Perro(id, nombre, edad, atendido, raza);
						vet.agregarAnimal(perr1);
						System.out.println("Perro agregado: " + perr1);
						
					} else if(respuesta == 2) {
						System.out.print("Introduce id: ");
						String id = entrada.nextLine();
						entrada.nextLine();
						System.out.print("Introduce un nombre: ");
						String nombre = entrada.nextLine();
						
						Propietario p1 = new Propietario(id, nombre);
						vet.agregarPropietario(p1);
						System.out.println("Propietario agregado: " + p1);
					} else {
						System.out.println("respuesta no válida");
					}
					break;
					
				case 3:
					entrada.nextLine();
					System.out.println("Introduce el id");
					String id = entrada.nextLine();
					
					Animal resultado = vet.buscarID(id);
					if(resultado != null) {
						System.out.println(resultado);
					} else {
						System.out.println("Animal no encontrado");
					}
					break;
				case 4:
					entrada.nextLine();
					vet.mostrar();
					
					break;
				case 5:
					entrada.nextLine();
					System.out.println("Introduce el id del animal");
					String ida = entrada.nextLine();
					System.out.println("Introduce el id del propietario");
					String idu = entrada.nextLine();
					System.out.println("Introduce la fecha");
					String fecha = entrada.nextLine();
					System.out.println("Y cual es el motivo");
					String motivo = entrada.nextLine();
					
					vet.nuevaConsulta(ida, idu, fecha, motivo);
					
					break;
				case 6:
				    entrada.nextLine();
				    System.out.print("Introduce el ID del animal: ");
				    String idFinal = entrada.nextLine();
				    vet.finalizarConsulta(idFinal);
				    
				    break;
				case 7:
					entrada.nextLine();
					vet.mostrarConsultas();
					
					break;
				case 8:
					entrada.nextLine();
					System.out.println("Introduce el id del usuario");
					String idU = entrada.nextLine();
		
					vet.mostrarCU(idU);
					
					break;
				case 9:
					entrada.nextLine();
					System.out.println(Consulta.getContadorConsultas());
					break;
				default:
					System.out.println("Saliendo del programa");
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
