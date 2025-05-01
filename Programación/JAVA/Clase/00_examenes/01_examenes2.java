/* 2.
Crea una aplicación que muestre por pantalla la siguiente figura: (3 puntos)
*******
*** ***
**   **
*     * 
*/

package examenes;
import java.util.Scanner;

public class examen2 {

	static Scanner entrada = new Scanner (System.in);
	public static void main(String[] args) {
		int relleno = 0;
		int vacio = 0;
		
		System.out.println("Introduce el tamaño de la figura: ");
		relleno = entrada.nextInt();
		
		while(relleno > 0) {
			for (int i = 0; i < relleno; i++) { // IZQUIERDA
				System.out.print("*");
			}
			for (int i = 0; i < vacio; i++) { // CENTRO
				System.out.print(" ");
			}
			for (int i = 0; i < relleno; i++) { // DERECHA
				System.out.print("*");
			}
			
			relleno = relleno - 1;
			vacio = vacio + 2;
			
			System.out.println();
		}
		
	}
}