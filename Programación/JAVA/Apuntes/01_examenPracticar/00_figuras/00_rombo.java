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
			if (altura % 2 == 0) {
				System.out.println("Solo son válidos los números impares");
				System.exit(altura);
			}
		} else {
			System.out.println("Valor inválido");
		}
		
		// PARTE DE ARRIBA
		relleno = 1;
		vacio = altura / 2;
		
		while (relleno <= altura) {
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
		
		// PARTE DE ABAJO
		relleno = altura - 2; // empezamos quitando 2 ya que la línea más larga del medio del rombo es el final de la parte de arriba
		vacio = 1;
		
		while(relleno > 0) {
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

	}

}
