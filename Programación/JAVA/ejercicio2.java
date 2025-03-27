import java.util.Iterator;
import java.util.Scanner;

public class ejercicio2 {
	// OPCIÓN 1; 3 arrays
	/*
	public static void main(String[] args) {
		int alumnos = 0;
		
		System.out.println("Introduce el número de alumnos que quieres registrar");
		Scanner entrada= new Scanner(System.in);
		alumnos= entrada.nextInt();
		entrada.nextLine();
		
		String[] nombre = new String[alumnos];
		int [] edad = new int[alumnos];
		String[] apellido = new String[alumnos];
		
		for (int i = 0; i < alumnos; i++) {
			System.out.println("Introduzca su nombre(cadena)");
			nombre[i]=entrada.nextLine(); 
			
			System.out.println("Introduzca edad");
			edad[i]=entrada.nextInt();
			entrada.nextLine();
			
			System.out.println("Introduzca apellido");
			apellido[i]=entrada.nextLine();
		
		}
		
		for (int i = 0; i < alumnos; i++) {
			System.out.println("Nombre: " + nombre[i] +  " edad: " + edad[i] + " apellido: " + apellido[i]);
		}
		
		entrada.close();
		
	}
	*/
	
	// OPCIÓN 2; 1 array
	static Scanner entrada = new Scanner(System.in);
	
	public static void main(String[] args) {
		int cantidad = 0;
		cantidad = cantidadAlumnos();
		altaAlumnos(cantidad);
	}
	
	private static int cantidadAlumnos() {
		System.out.println("Introduce el número de alumnos: ");
		int cantidad=entrada.nextInt();
		entrada.nextLine();
		return cantidad;
	}
	
	public static void altaAlumnos(int cantidad) {
		Scanner entrada= new Scanner(System.in);
		int numeroAlumnos=1;
		int longitud=cantidad*3;
		String [] alumnos=new String[longitud];
		
		for (int i = 0; i < longitud; i+=3) {
			System.out.println("Introduce el nombre del alumno: " + numeroAlumnos);
			alumnos[i]=entrada.nextLine();
			
			System.out.println("Introduce el apellido del alumno: ");
			alumnos[i+1]=entrada.nextLine();
			
			System.out.println("Introduce el edad del alumno: ");
			int edad = entrada.nextInt();
			entrada.nextLine();
			
			alumnos[i+2]=Integer.toString(edad); // casting para que la int entre en el array de string
			entrada.nextLine();
			numeroAlumnos++;
		}
		
		System.out.println("LISTADO ALUMNOS:");
		for (int i = 0; i < alumnos.length; i++) {
			System.out.println("-" + alumnos[i]);
		}
	}

}
