import java.util.Scanner;

/*
Crea un programa en JAVA que reciba una palabra por teclado e indique si es  un palíndromo. Un 
palíndromo es una palabra que se lee igual de derecha a  izquierda, que de izquierda a derecha. 
Ejemplo: RECONOCER
*/
public class ejerciciosString04 {

	static Scanner entrada = new Scanner(System.in); 
	public static void main(String[] args) {
		String palabra;
		
		System.out.println("Introduce una palabra: ");
		palabra = entrada.nextLine();
		
        boolean esPalindromo = true;

        // int i = 0 (es el inicio de la cadena)
        // int j = palabra.length() - 1 (es el final de la cadena de caracteres)
        
        for (int i = 0, j = palabra.length() - 1; i < j; i++, j--) {
            // Si los caracteres no son iguales, no es palíndromo
            if (palabra.charAt(i) != palabra.charAt(j)) {
                esPalindromo = false; // indica que los caracteres no coinciden y no es palíndroma
                break;
            }
        }

        if (esPalindromo) {
            System.out.println("Palíndromo");
        } else {
            System.out.println("No palíndromo.");
        }
        entrada.close();
	}
}