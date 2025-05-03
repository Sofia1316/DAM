package Figuras;

import java.util.Scanner;

public class figura00 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int lado = 0;
		
		System.out.println("Introduce el tamaño del cuadrado: ");
		lado = entrada.nextInt();
		
		for (int i = 0; i < lado; i++) {
			for (int j = 0; j < lado; j++) {
				if (i == j || i + j == lado - 1) { 
					System.out.print("*");
				} else {
					System.out.print(" ");
				}
			}
			System.out.println();
		}
		
	}

}
