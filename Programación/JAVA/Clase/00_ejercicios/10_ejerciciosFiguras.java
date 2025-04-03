import java.util.Scanner;

/*
Crea un programa en JAVA que dibuje un triángulo equilátero formado por  asteriscos(*). Se debe 
pedir la altura del triángulo por teclado. Además, añade  código adicional para que dibuje dicho 
rectángulo sin relleno
*/

public class ejercicioFiguras03 {
        
static Scanner entrada = new Scanner(System.in); 

    public static void main(String[] args) {
        // Triángulo equilátero relleno y sin relleno
        System.out.print("\nIntroduce la altura del triángulo equilátero: ");
        int alturaEquilatero = entrada.nextInt();
        
        // TRIÁNGULO EQUILATERO RELLENO
        System.out.print("\nIntroduce la altura del triángulo equilátero: ");
        for (int i = 1; i <= alturaEquilatero; i++) {
            // Imprimir espacios antes de los asteriscos
            for (int j = 1; j <= alturaEquilatero - i; j++) {
                System.out.print(" ");
            }
            // Imprimir los asteriscos
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }
            System.out.println();
        }
        
        // TRIÁNGULO EQUILATERO VACÍO
        for (int i = 1; i <= alturaEquilatero; i++) { // recorremos cada fila desde 1 hasta 5 (altura)
            for (int j = 1; j <= alturaEquilatero - i; j++) { // imprime los espacios antes de los *, por eso si la altura es 5, se imprimirán 4 espacios para dejar hueco al * de la punta, por eso al llegar a 5, no habrá espacios porque es la base del triangulo
                System.out.print(" ");
            }
            
            // imprimimos los espacios y los asteriscos del triángulo
            // k == 1 (imprime el primer asterisco)
            // k == (2 * i - 1) (imprimimos el último asterisco de la fila en el borde derecho)
            // i == altura (imprime toda la base del triángulo)
            for (int k = 1; k <= (2 * i - 1); k++) {
                if (k == 1 || k == (2 * i - 1) || i == alturaEquilatero) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        entrada.close();
    }
} 