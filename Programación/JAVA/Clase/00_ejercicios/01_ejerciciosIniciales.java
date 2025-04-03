import java.util.Scanner;

//  Dado un número, determinar cuántos dígitos tiene. No se pueden utilizar ni  variables ni funciones de tipo String.
public class ejercicio2 {

	static Scanner entrada = new Scanner(System.in);
	
	public static void main(String[] args) {
		int num = 0;
		int contador = 0;
		
		System.out.println("Introduce un número entero");
		num = entrada.nextInt();
		entrada.nextLine();
		
		if(num == 0) {
			System.out.println("El número solo contiene 1 dígito");
		}
		
		while(num > 0) {
			num /= 10; // al dividirlo entre 10 nos vamos asegurando de que ese número se le quite 1 cifra
			contador++; // aumentamos el contador en el caso de entrar en el bucle
		}
		
		System.out.println("El número tiene " + contador + " dígitos");
		entrada.close();
	}

}