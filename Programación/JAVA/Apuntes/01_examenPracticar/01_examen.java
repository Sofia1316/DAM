/*
2. Dibujo de una pirámide invertida (3 puntos)
Crea una aplicación que muestre una pirámide invertida, como esta:

*********
 *******
  *****
   ***
    *

El usuario introduce el número de líneas de la pirámide.
Debe mostrarse centrada horizontalmente.
Usa bucles para generar la figura.
*/

package examenes;

public class examen5 {

	public static void main(String[] args) {
		for (int i = 0; i < 5; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }

            for (int k = 0; k < 9 - 2 * i; k++) {
                System.out.print("*");
            }

            System.out.println();
        }

	}

}
