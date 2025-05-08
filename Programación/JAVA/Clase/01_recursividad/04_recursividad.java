/*Crea un método que obtenga el número binario de un número N pasado como 
parámetro.*/
package recursividad;
import java.util.Scanner;

public class recursividad05 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int num = 0;
		
		System.out.println("Introduce un número: ");
		num = entrada.nextInt();
		
		int pasarBin = pasar(num);
		System.out.println("Binario de " + num + " es " + pasarBin);

	}
	
	public static int pasar(int num) {
		return num;
	}

}
