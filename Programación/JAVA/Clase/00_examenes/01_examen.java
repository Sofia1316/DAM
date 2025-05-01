/* 1.
Crea una apliación que sea una calculadora con las funciones: sumar, restar, multiplicar, dividir y calcular el porcentaje de un número. (5 puntos)
- Se de debe crear un menú donde el usuario eligirá entre las diferen funciones o salir.
- En cada función se le pedirá al usuario que introduzca cuantos y con que números con los que quiere operar.
- La aplicación no se termina hasta que el usuario elige la función de salir y puede eligir el resto de funciones todas las veces que quiera.
- No se necesita contro de errores. Se recomienda estructurar en diferentes métodos.
*/

package examenes;
import java.util.Scanner;

public class examen1 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		menu();
		entrada.close();
	}
	
	public static void menu() {
		int respuesta;
		
		while(true) {
			System.out.println("-- CALCULADORA --");
			System.out.println("\t1 - SUMA");
			System.out.println("\t2 - RESTA");
			System.out.println("\t3 - MULTIPLICACIÓN");
			System.out.println("\t4 - DIVISIÓN");
			System.out.println("\t5 - PORCENTAJES");
			System.out.println("\t6 - SALIR");
		
			System.out.print("Opción: ");
			if(entrada.hasNextInt()) {
				respuesta = entrada.nextInt();
				if(respuesta > 7 || respuesta < 1) {
					System.out.println("Debes de introducir un número entre 1 y 6");
				} else {
					funciones(respuesta);
				}
			} else {
				System.out.println("Debes de introducir un número entre 1 y 6");
				entrada.next();
			}
		}
		
	}
	
	public static void funciones(int respuesta) {
		switch(respuesta) {
			case 1:
				suma();
				break;
			case 2:
				resta();
				break;
			case 3:
				multiplicacion();
				break;
			case 4:
				division();
				break;
			case 5:
				porcentaje();
				break;
			case 6:
				System.out.println("Has salido del programa");
				System.exit(0); // para cerrar el programa
				break;
			default:
				System.out.println("Respuesta no válida");
				break;
		}
	}
	
	public static int[] pregunta() {
		int cantidad = 0;
		
		System.out.println("Con cuántos números quieres operar?: ");
		if(entrada.hasNextInt()) {
			cantidad = entrada.nextInt();
		} else {
			System.out.println("Debes de introducir un número");
			entrada.next();
		}
		
		// ARRAY para almacenar los números que vaya introduciendo
		int[] numeros = new int[cantidad];
		
		for (int i = 0; i < cantidad; i++) {
			System.out.println("Introduce el número " + (i+1) + ": ");
			if(entrada.hasNextInt()) {
				numeros[i] = entrada.nextInt();
			} else {
				System.out.println("Debes de introducir un número");
				entrada.next();
			}
		}
		return numeros;
			
	}
	
	public static void suma() {
		int array[] = pregunta();
		int resultado = array[0];
		
		for (int i = 1; i < array.length; i++) {
			resultado += array[i];
		}
		System.out.println("La suma es: " + resultado);
	}
	
	public static void resta() {
		int array[] = pregunta();
		int resultado = array[0];
		
		for (int i = 1; i < array.length; i++) {
			resultado -= array[i];
		}
		System.out.println("La resta es: " + resultado);
	}
	
	public static void multiplicacion() {
		int array[] = pregunta();
		int resultado = array[0];
		
		for (int i = 1; i < array.length; i++) {
			resultado *= array[i];
		}
		System.out.println("La multiplicación es: " + resultado);
	}
	
	static public void division() {
		int array[] = pregunta();
		int resultado = array[0];
		
		for (int i = 1; i < array.length; i++) {
			resultado /= array[i];
		}
		System.out.println("La división es: " + resultado);
	}
	
	static public void porcentaje() {
		System.out.print("Introduce la base: ");
        int base = entrada.nextInt();
        System.out.print("Introduce el porcentaje: ");
        int porc = entrada.nextInt();

        double resultado = (base * porc) / 100;
        System.out.println(porc + "% de " + base + " es: " + resultado);
	}

}