import java.util.Scanner;

/*
	Crea un programa que te pida una palabra y escriba las letras separadas por espacios. 
	Ejemplo, a partir de "Pepe" escribirá "P e p e ".
*/
public class ejercicio5{

	static Scanner entrada = new Scanner(System.in);
	
	public static void main(String[] args) {
		String nombre;
		
		System.out.println("Introduce una palabra: ");
		nombre = entrada.nextLine();

		for (int i = 0; i < nombre.length(); i++) {
			char caracter = nombre.charAt(i);
			int num = 0;
			System.out.print(caracter + " ");
		}
		entrada.close();
	}
}
