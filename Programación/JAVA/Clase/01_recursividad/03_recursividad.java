/* Crea un método que compruebe si un número es binario. 
Un número binario está formado únicamente por ceros y unos */

package recursividad;
import java.util.Scanner;

public class recursividad03 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int num = 0;
		
		System.out.println("Introduce un número binario: ");
		num = entrada.nextInt();
		
		System.out.println("Es binario: " + bin(num));
		entrada.close();
	}
	
	public static boolean bin(int num) {
		// CASO BASE
		if(num < 10 && (num == 1 || num == 0)) {
			return true;
		} 

		// CASO RECURSIVO
		if(num % 10 != 0 && num % 10 != 1) {
			return false;
		}

		return bin(num / 10);

	}
}
