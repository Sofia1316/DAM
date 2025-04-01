public class HolaMundo{
    public static void main(String[] args){
        System.out.println("Hola Mundo");
    }
}

/*
print = imprime de forma normal
println = imprime con un salto de línea incluido
*/

// Escribe un programa que pinte por pantalla una pirámide rellena a base de asteriscos. La base de la pirámide debe estar formada por 9 asteriscos.
public class ejercicio1 {
    public static void main(String[] args) {
        int altura = 5; // Número de filas de la pirámide

        for (int i = 1; i <= altura; i++) {
            // Imprimir espacios antes de los asteriscos
            for (int j = 1; j <= altura - i; j++) {
                System.out.print(" ");
            }
            
            // Imprimir los asteriscos
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }
            
            // Salto de línea
            System.out.println();
        }
    }
}

// Igual que el programa anterior, pero esta vez la pirámide estará hueca (se debe ver únicamente el contorno hecho con asteriscos).
public class ejercicio2 {
    public static void main(String[] args) {
        int altura = 5; // número de filas

        for (int i = 1; i <= altura; i++) { // recorremos cada fila desde 1 hasta 5 (altura)
            for (int j = 1; j <= altura - i; j++) { // imprime los espacios antes de los *, por eso si la altura es 5, se imprimirán 4 espacios para dejar hueco al * de la punta, por eso al llegar a 5, no habrá espacios porque es la base del triangulo
                System.out.print(" ");
            }
            
            // imprimimos los espacios y los asteriscos del triángulo
            // k == 1 (imprime el primer asterisco)
            // k == (2 * i - 1) (imprimimos el último asterisco de la fila en el borde derecho)
            // i == altura (imprime toda la base del triángulo)
            for (int k = 1; k <= (2 * i - 1); k++) {
                if (k == 1 || k == (2 * i - 1) || i == altura) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            
            System.out.println();
        }
    }
}
