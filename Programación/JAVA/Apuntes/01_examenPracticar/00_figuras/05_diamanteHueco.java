package Figuras;

import java.util.Scanner;

public class figura00 {

    static Scanner entrada = new Scanner(System.in);

    public static void main(String[] args) {
        int relleno = 0;
        int vacio = 0;
        int altura = 0;

        System.out.print("Introduce el tamaño del diamante (impar): ");
        altura = entrada.nextInt();


        // Parte de arriba
        relleno = 1;
        vacio = altura / 2;

        while (relleno <= altura) {
            for (int i = 0; i < vacio; i++) {
                System.out.print(" ");
            }

            if (relleno == 1) {
                System.out.println("*"); // solo un asterisco en el pico
            } else {
                System.out.print("*"); // borde izquierdo
                for (int i = 0; i < relleno - 2; i++) {
                    System.out.print(" ");
                }
                System.out.println("*"); // borde derecho
            }

            relleno = relleno + 2;
            vacio = vacio - 1;
        }

        // Parte de abajo
        relleno = altura - 2;
        vacio = 1;

        while (relleno > 0) {
            for (int i = 0; i < vacio; i++) {
                System.out.print(" ");
            }

            if (relleno == 1) {
                System.out.println("*");
            } else {
                System.out.print("*");
                for (int i = 0; i < relleno - 2; i++) {
                    System.out.print(" ");
                }
                System.out.println("*");
            }

            relleno = relleno - 2;
            vacio = vacio + 1;
        }
    }
}
