package Figuras;

import java.util.Scanner;

public class figura00 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int relleno = 1;
		int altura = 0;
		
		System.out.print("Introduce la altura: ");
		altura = entrada.nextInt();
		int vacio = (altura - 1) * 2; // si por ejemplo metes 5, la base serán 10-> 8 y 2 vacios-> 6 y 4 vacios...
		
		while(relleno <= altura) {
			for (int i = 0; i < relleno; i++) {
				System.out.print("*");
			}
			for (int i = 0; i < vacio; i++) {
				System.out.print(" ");
			}
			for (int i = 0; i < relleno; i++) {
				System.out.print("*");
			}
			System.out.println();
			
			vacio = vacio - 2;
			relleno = relleno + 1;
		}
		
	}

}
