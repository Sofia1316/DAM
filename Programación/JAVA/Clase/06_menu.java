import java.util.Scanner;

public class 06_menu {

	static Scanner entrada = new Scanner(System.in);

	public static void main(String[] args) {
		menu();
	}

	public static void menu() {
		int base = 0;
		int altura = 0;

		boolean salida = true;

		do {
			System.out.println("1 - Rectángulo");
			System.out.println("2 - Triángulo Rectángulo");
			System.out.println("3 - Triángulo normal");
			System.out.println("Resto de nº - Salida");
			System.out.println("Selecciona que tipo de figura quieres hacer ");
			
			boolean error = entrada.hasNextInt();

			if (error == true) {
				int respuesta = entrada.nextInt();
				
				if (respuesta == 1) {
					System.out.println("¿Relleno (1) o hueco (2)?");
					int respuesta2 = entrada.nextInt();
					entrada.nextLine();

					if (respuesta2 == 1) {
						RecRell(base, altura);
					} else if (respuesta2 == 2) {
						RecVac(base, altura);
					} else {
						System.out.println("Respuesta no válida");
					}

				} else if (respuesta == 2) {
					System.out.println("¿Relleno (1) o hueco (2)?");
					int respuesta3 = entrada.nextInt();
					entrada.nextLine();

					if (respuesta3 == 1) {
						TRR(altura);
					} else if (respuesta3 == 2) {
						TRV(altura);
					} else {
						System.out.println("Respuesta no válida");
					}

				} else if (respuesta == 3) {
					System.out.println("¿Relleno (1) o hueco (2)?");
					int respuesta4 = entrada.nextInt();
					entrada.nextLine();

					if (respuesta4 == 1) {
						TER(altura);
					} else if (respuesta4 == 2) {
						TEV(altura);
					} else {
						System.out.println("Respuesta no válida");
					}
				} else {
					System.out.println("Has salido del programa");
					salida = false;
				}
			} else {
				System.out.println("El valor introducido no es un número");
			}
		} while (salida == true);

		entrada.close();
	}

	public static int altura() {
		System.out.println("Introduce la altura: ");
		int resAlt = entrada.nextInt();
		entrada.nextLine();
		return resAlt;
	}

	public static int base() {
		System.out.println("Introduce la base: ");
		int resBas = entrada.nextInt();
		entrada.nextLine();
		return resBas;
	}

	private static void RecRell(int altura, int base) {
		base = base();
		altura = altura();

		System.out.println("\nRectángulo relleno:");
		for (int i = 0; i < altura; i++) {
			for (int j = 0; j < base; j++) {
				System.out.print("*"); // que se impriman los * de la base
			}
			System.out.println(); // que se acomoden los * de la altura junto a la base
		}
	}

	private static void RecVac(int altura, int base) {
		base = base();
		altura = altura();

		System.out.println("\nRectángulo sin relleno:");
		for (int i = 0; i < altura; i++) {
			for (int j = 0; j < base; j++) {
				if (i == 0 || i == altura - 1 || j == 0 || j == base - 1) { // indicamos cuales son las filas y columnas
																			// que tendrán bordes
					System.out.print("*");
				} else { // aquí se imprimen los espacios de dentro de los bordes
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}

	private static void TRR(int altura) {
		altura = altura();

		System.out.println("\nTriángulo rectángulo relleno:");
		for (int i = 1; i <= altura; i++) {
			for (int j = 0; j < i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}

	private static void TRV(int altura) {
		altura = altura();

		System.out.println("\nTriángulo rectángulo sin relleno:");
		for (int i = 1; i <= altura; i++) {
			for (int j = 0; j < i; j++) {
				if (j == 0 || j == i - 1 || i == altura) {
					System.out.print("*");
				} else {
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}

	private static void TER(int altura) {
		altura = altura();

		for (int i = 0; i < altura; i++) {
			for (int j = 0; j < altura - i; j++) { // Espacios
				System.out.print(" ");
			}
			for (int k = 0; k <= i * 2; k++) { // Asteriscos
				System.out.print("*");
			}
			System.out.println();
		}
	}

	private static void TEV(int altura) {
		altura = altura();

		for (int i = 0; i < altura; i++) {
			for (int j = 1; j <= altura - i; j++) { 
				System.out.print(" ");
			}

			// k == 1 (imprime el primer asterisco)
			// k == (2 * i - 1) (imprimimos el último asterisco de la fila en el borde derecho)
			for (int k = 1; k <= (2 * i - 1); k++) {
				if (k == 1 || k == (2 * i - 1) || k == altura * 2) {
					System.out.print("*");
				} else {
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}

}
