package recursividad;

import java.util.Scanner;

public class recursividad01 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int base = 0;
		int potencia = 0;
		
		System.out.println("Introduce la base: ");
		if(entrada.hasNextInt()) {
			base = entrada.nextInt();
			if(base < 0) {
				System.out.println("Número no válido, debe de ser positivo");
			}
		}
		
		System.out.println("Introduce la base: ");
		if(entrada.hasNextInt()) {
			potencia = entrada.nextInt();
			if(potencia < 0) {
				System.out.println("Número no válido, debe de ser positivo");
			}
		}
		
		int imprimir = elevado(base, potencia);
		System.out.println("El número con base " + base + " y potencia " + potencia + " es " + imprimir);

	}
	
	public static int elevado(int base, int potencia) {
		// CASO BASE
		if (potencia == 0) {
            return 1;
        }
		
		// CASO RECURSIVO
        return base * elevado (base, potencia - 1);
        
	}

}
