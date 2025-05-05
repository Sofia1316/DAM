/*
1. Aplicación de gestión de notas (5 puntos)
Crea una aplicación que permita registrar y analizar notas de estudiantes. El menú debe incluir las siguientes opciones:

- Añadir nota
- Mostrar todas las notas
- Calcular la nota media
- Mostrar cuántas notas son aprobadas (>= 5)
- Salir

Requisitos:

El usuario podrá introducir tantas notas como desee (entre 0 y 10).
Las notas se almacenan en una lista o array dinámico.
El programa solo termina cuando el usuario elige la opción "Salir".
Se recomienda dividir en funciones/métodos independientes.
No se necesita control de errores.
*/

package examenes;
import java.util.Scanner;

public class examen4 {

	static Scanner entrada = new Scanner(System.in);
	static int cantidad = 5; // defino que solo haya 5 alumnos
	static String[] nombres = new String[cantidad];
	static int[] notas = new int[cantidad];
	
	public static void main(String[] args) {
		menu();

	}
	
	public static void menu() {
		int respuesta;
		
		while(true){
			System.out.println("\n--- MENÚ DE GESTIÓN DE NOTAS ---");
	        System.out.println("1. Añadir nota");
	        System.out.println("2. Mostrar todas las notas");
	        System.out.println("3. Calcular la nota media");
	        System.out.println("4. Mostrar cuántas notas son aprobadas (>= 5)");
	        System.out.println("5. Salir");
	        System.out.print("Elige una opción: ");
	        
	        if(entrada.hasNextInt()) {
	        	respuesta = entrada.nextInt();
	        	if(respuesta > 6 || respuesta < 1) {
	        		System.out.println("Respuesta no válida, introduce un dígito entre 1 y 5");
	        	} else {
	        		funciones(respuesta);
	        	}
	        } else {
	        	System.out.println("Valor introducido no es válido");
	        	entrada.next();
	        }
		}
	}
	
	public static void funciones(int respuesta) {
		switch(respuesta) {
		case 1:
			añadir();
			break;
		case 2:
			mostrar();
			break;
		case 3:
			calcularMedia();
			break;
		case 4:
			notasAprobadas();
			break;
		case 5:
			System.out.println("Has salido del programa");
			System.exit(0);
			break;
		default:
			System.out.println("Respuesta no válida");
			break;
		}
	}
	
	public static void añadir() {
		entrada.nextLine(); // limpiar el buffer
		
        for (int i = 0; i < cantidad; i++) {
            System.out.print("Introduce el nombre del alumno " + (i + 1) + ": ");
            nombres[i] = entrada.nextLine();

            System.out.print("Introduce la nota de " + nombres[i] + ": ");
            notas[i] = entrada.nextInt();
            entrada.nextLine(); // limpiar el salto de línea
        }
	}
	
	public static void mostrar() {
		 System.out.println("\n--- LISTADO DE NOTAS ---");
	     for (int i = 0; i < cantidad; i++) {
	    	 System.out.println(nombres[i] + ": " + notas[i]);
	     }
	}
	
	public static void calcularMedia() {
		int suma = 0;
        for (int i = 0; i < cantidad; i++) {
            suma += notas[i];
        }
        double media = (double) suma / cantidad;
        System.out.printf("La nota media es: %.2f\n", media);
	}
	
	public static void notasAprobadas() {
		int aprobados = 0;
        for (int i = 0; i < cantidad; i++) {
            if (notas[i] >= 5) {
                aprobados++;
            }
        }
        System.out.println("Número de aprobados: " + aprobados);
	}

}
