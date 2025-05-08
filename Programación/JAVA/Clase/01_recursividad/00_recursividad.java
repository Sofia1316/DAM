package recursividad;

import java.util.Scanner;

public class recursividad00 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int numero = 0;
		
		System.out.println("Introduce un número grande: ");
		numero = entrada.nextInt();
		
		int cantidad = contarDigitos(numero);
		System.out.println("Cantidad de dígitos: " + cantidad);
	}
	
	public static int contarDigitos(int n) {
        // CASO BASE
        if (n < 10)return 1; // si el número es menor a 10, tiene solo un dígito
        // Llamada recursiva: divide el número por 10 y suma 1
        return 1 + contarDigitos(n / 10);
    }
}
