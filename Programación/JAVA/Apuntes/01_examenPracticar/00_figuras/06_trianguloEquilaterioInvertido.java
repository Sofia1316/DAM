package Figuras;

import java.util.Scanner;

public class figura00 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int altura = 0;
		
		System.out.print("Introduce la altura: ");
		altura = entrada.nextInt();
		
		for (int i = 0; i <= altura; i++) {
			for (int j = 0; j <= altura; j++) {
				System.out.print(" ");
			}
			for (int j = 0; j < altura - i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}

}
