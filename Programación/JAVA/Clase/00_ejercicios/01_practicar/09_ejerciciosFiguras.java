import java.util.Scanner;

/*
Crea un programa en JAVA que dibuje un triángulo rectángulo formado por  asteriscos(*). Se debe 
pedir la altura del triángulo por teclado. Además, añade  código adicional para que dibuje dicho triángulo sin relleno
*/

public class ejercicioFiguras02 {
        
static Scanner entrada = new Scanner(System.in); 

    public static void main(String[] args) {
        System.out.print("Introduce la altura del triángulo rectángulo: ");
        int alturaTriangulo = entrada.nextInt();
        
        // TRIÁNGULO RECTÁNGULO RELLENO
        System.out.println("\nTriángulo rectángulo relleno:");
        for (int i = 1; i <= alturaTriangulo; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        
        // TRIÁNGULO RECTÁNGULO VACÍO
        System.out.println("\nTriángulo rectángulo sin relleno:");
        for (int i = 1; i <= alturaTriangulo; i++) {
            for (int j = 0; j < i; j++) {
                if (j == 0 || j == i - 1 || i == alturaTriangulo) {
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