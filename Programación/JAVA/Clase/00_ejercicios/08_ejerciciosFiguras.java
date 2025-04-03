import java.util.Scanner;

/*
Crear un programa en JAVA que dibuje un rectángulo formado por asteriscos(*).  Se deben pedir 
base y altura por teclado. Además, añade código adicional para  que dibuje dicho rectángulo sin relleno
*/

public class ejercicioFiguras01 {
        
static Scanner entrada = new Scanner(System.in); 

    public static void main(String[] args) {
        System.out.print("Introduce la base del rectángulo: ");
        int base = entrada.nextInt();
        System.out.print("Introduce la altura del rectángulo: ");
        int altura = entrada.nextInt();
        
        // RECTÁNGULO CON RELLENO
        System.out.println("\nRectángulo relleno:");
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < base; j++) {
                System.out.print("*"); // que se impriman los * de la base
            }
            System.out.println(); // que se acomoden los * de la altura junto a la base
        }
        
        // RECTÁNGULO VACÍO
        System.out.println("\nRectángulo sin relleno:");
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < base; j++) {
                if (i == 0 || i == altura - 1 || j == 0 || j == base - 1) { // indicamos cuales son las filas y columnas que tendrán bordes
                    System.out.print("*");
                } else { // aquí se imprimen los espacios de dentro de los bordes
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        entrada.close();
    }
}  
