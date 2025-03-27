/*Leer una cantidad N y luego rellenarlo con números enteros*/
/*Se pide imprimir el mayor y el menor, además de las veces que aparece cada uno de los repetidos*/

import java.util.Scanner;

public class ejercicio3 {
	
	static Scanner entrada = new Scanner(System.in);

	public static void main(String[] args) {
		int valor = 0;
		
		System.out.println("Introduce un número entero: ");
		valor= entrada.nextInt();
		entrada.nextLine();
		
		int [] rango = new int[valor];
		int posicion = 1;
		
		for (int i = 0; i < valor; i++) {
			System.out.println("Introduce el número " + posicion);
			rango[i]= entrada.nextInt();
			entrada.nextLine();
			posicion++;
		}
		
		entrada.close();
		int max=rango[0], min=rango[0];
		
		for (int i = 1; i < valor; i++) {
			if (rango[i]>max) {
				max = rango[i];
			} else {
				min = rango[i];
			}
		}
		
		int cantMax=0, cantMin=0;
		
		for (int i = 0; i < valor; i++) {
			if (rango[i] == max) {
				cantMax++;
			} else {
				if (rango[i] == min) {
					cantMin++;
				}
			}
		}
		
		System.out.println("El número máximo es " + max + "-->" + cantMax);
		System.out.println("El número mínimo es " + min + "-->" + cantMin);
	}
}
