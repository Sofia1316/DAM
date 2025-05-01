/* 3.
Crea una aplicación que muestre los números primeros en un rango determinado por el usuario. Por ejemplo: Los números primos entre 1 y 10 son: el 2, 3, 5 y 7. (2 puntos)
Los números primos son aquellos que solo son divisibles por 1 y por sí mismos.
*/

package examenes;
import java.util.Scanner;

public class examen3 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {
		int rangoMax = 0;
		int rangoMin = 0;
		
		System.out.print("Introduce el rango máximo de números primos: ");
		rangoMax = entrada.nextInt();
		System.out.print("Introduce el rango mínimo de números primos: ");
		rangoMin = entrada.nextInt();
		
		if(rangoMin < 2 || rangoMax < 2 || rangoMin > rangoMax) {
			System.out.println("Número no válido, debe de ser mayor que 1");
		} else {
			System.out.print("Los números primos son: ");
			for (int j = rangoMin; j <= rangoMax; j++) {
                if (esPrimo(j)) {
                    System.out.print(j + " ");
                }
            }
		}

	}
	
    public static boolean esPrimo(int numero) {
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                return false;
            }
        }
        return true;
    }

}
