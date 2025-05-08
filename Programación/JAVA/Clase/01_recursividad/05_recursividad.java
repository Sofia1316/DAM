/*Crea un método que compruebe si una palabra está ordenada alfabéticamente.*/
package recursividad;
import java.util.Scanner;

public class recursividad06 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		System.out.println("¿Está ordenado 'abc'?: " + estaOrdenado("abc"));

	}
	
	public static boolean estaOrdenado(String palabra) {
		String aux = palabra.toLowerCase();
		
        if (aux.length() < 2) {
            return true;
        }

        // Comparamos letras consecutivas
        for (int i = 0; i < aux.length() - 1; i++) {
            if (aux.charAt(i) > aux.charAt(i + 1)) {
                return false;
            }
        }
        return true; 
	}

}
