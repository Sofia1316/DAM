import java.util.Scanner;

/* Escribir un programa que pida números enteros hasta que se introduzca un valor  menor o igual a 
cero. A continuación debe mostrar la suma total de dichos  números. Se deben incluir todos los 
números que hemos ido introduciendo por  teclado. No se pueden utilizar Arrays. */

public class ejercicio3 {
	
	static Scanner entrada = new Scanner(System.in); 
	
	public static void main(String[] args) {
		int num = 1;
		int suma = 0;
		
		do {
			System.out.print("Introduce un número entero (o cero si quieres dejar de meter números): ");
			num = entrada.nextInt();
			entrada.nextLine();
			
			if(num > 0) {
				suma += num;
				System.out.println("Número introducido es " + num);
			}
			
		} while (num > 0);
		
		for (int i = 0; i < num; i++) {
			System.out.println("");
		}
		System.out.println("La suma de los números introducidos es de " + suma);
	}

}