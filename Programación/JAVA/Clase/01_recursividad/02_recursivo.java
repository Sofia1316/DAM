// Crea un método que dado un número positivo, lo imprima invertido por pantalla.
package recursividad;
import java.util.Scanner;

public class recursividad02 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int positivo = 0;
		
		System.out.println("Introduce un número positivo grande");
		positivo = entrada.nextInt();
		
		reverso(positivo);
	}
	
	public static int reverso(int positivo) {
		// CASO BASE
		if(positivo == 0) {
			return positivo;
		}
		
		// CASO RECURSIVO
    	System.out.print(positivo % 10); // se saca el resto, por ejemplo de 54 --> 4
    	return reverso(positivo / 10); // para poder sacar el resto de dígitos, en nuestro caso, 50 / 10 = 5
    	// por lo que me acaba de imprimir un 54
	}

}
