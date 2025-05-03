package Figuras;

import java.util.Scanner;

public class figura00 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int relleno = 0;
		int vacio = 0;
		int altura= 0;
		
		System.out.print("Introduce la altura (nº impar): ");
		if(entrada.hasNextInt()) {
			altura = entrada.nextInt();
			relleno = altura;
			if (altura % 2 == 0) {
				System.out.println("Solo son válidos los números impares");
				System.exit(altura);
			}
		} else {
			System.out.println("Valor inválido");
		}
		
		while (relleno > 0) {
			for (int i = 0; i < vacio; i++) {
				System.out.print(" ");
			}
			for (int i = 0; i < relleno; i++) {
				System.out.print("*");
			}
			System.out.println();

			relleno = relleno - 2;
			vacio = vacio + 1;
		}
		
		// PARTE DE ABAJO
		relleno = 3; // empezamos en 3 porque la última línea superior fue 1
        vacio = (altura-vacio) - 1;
		
		while(relleno <= altura) {
			for (int i = 0; i < vacio; i++) {
				System.out.print(" ");
			}
			for (int i = 0; i < relleno; i++) {
				System.out.print("*");
			}
			System.out.println();
			
			relleno = relleno + 2;
			vacio = vacio - 1;
		}

	}

}
