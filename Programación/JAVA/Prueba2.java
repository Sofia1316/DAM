import java.util.Scanner;

public class Prueba2 {

	public static void main(String[] args) {
		String nombre;
		System.out.println("Introduzca su nombre(cadena)");
		// Creamos un objeto, empezando con el nombre de la clase, el nombre que le queremos dar al objeto y lo igualamos a la palabra reservada new y el siguiente scanner es un constructor (es el cómo vamos a utilizar ese objeto, por ejemplo, tenemos la clase objeto de alumno y este tiene ciertas características) por lo que cuando el alumno llega al colegio y le quieren dar de alta, simplemente mete el nia y ya está todo guardado ahí), por lo que el nia es el system.in
		Scanner entrada= new Scanner(System.in);
		 // aquí es en donde lo llegamos a usar el scanner, por lo que en nuestra variable nombre estaremos guardando datos
		nombre=entrada.nextLine(); // pero el next solo acepta cadenas, entonces si quiero meter un valor entero sería nextInt (igual con float = nextFloat)
		System.out.println("Hola, " + nombre);
		// si hemos abierto un canal hacia el exterior, en este caso, recibir datos del teclado, pues lo suyo es cerrarlo
		
		System.out.println("Introduzca edad");
		int edad=entrada.nextInt();
		entrada.nextLine(); // para limpiar el buffer
		System.out.println("Edad, " + edad);
		
		System.out.println("Introduzca apellido");
		String apellido=entrada.nextLine();
		System.out.println("Apellido, " + apellido);
		
		entrada.close();
	}

}
