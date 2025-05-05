/*
3. Mostrar la serie de Fibonacci en un rango (2 puntos)
Crea una aplicación que muestre los números de la serie de Fibonacci que no superen un número límite indicado por el usuario.

La serie de Fibonacci comienza con 0 y 1, y cada número siguiente es la suma de los dos anteriores.

Ejemplo de salida si el usuario introduce 20:
0, 1, 1, 2, 3, 5, 8, 13

Requisitos:

Pedir al usuario el número límite superior.

Mostrar la serie hasta que el siguiente número supere el límite.

Se recomienda usar un método para generar la serie.
*/
package examenes;
import java.util.Scanner;

public class examen6 {

	static Scanner entrada = new Scanner(System.in);
	public static void main(String[] args) {        
        System.out.print("Introduce el número límite para la serie de Fibonacci: ");
        int limite = entrada.nextInt();
        
        System.out.print("Serie de Fibonacci hasta el límite " + limite + ": ");
        generarFibonacci(limite);
        
        entrada.close(); 
    }

    public static void generarFibonacci(int limite) {
        int a = 0, b = 1;

        System.out.print(a + ", " + b);

        int siguiente = a + b;
        while (siguiente <= limite) {
            System.out.print(", " + siguiente);
            a = b;
            b = siguiente;
            siguiente = a + b;
        }
        System.out.println(); 
	}
}

