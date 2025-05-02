// ARRAY 1; definición y acceso a ellos
public class array1 {

	static Scanner entrada = new Scanner (System.in);
    public static void main(String[] args) {
    	// definición del array y reserva de memoria en la misma línea
    	int[] x = new int[5]; // int[] x = {8, 33, 200, 150, 11};
    	x[0] = 8;
    	x[1] = 33;
    	x[2] = 200;
    	x[3] = 150;
    	x[4] = 11;
    	
        System.out.println("El array x tiene 5 elementos ¿cuál de ellos quiere ver?");
    	System.out.print("Introduzca un número del 0 al 4: ");
    	int indice = entrada.nextInt();
    	
        System.out.print("El elemento que se encuentra en la posición " + indice);
    	System.out.println(" es el " + x[indice]);
    }
}

// ARRAY 2; acceso a través de bucles
public class array2 {

	static Scanner entrada = new Scanner (System.in);
    public static void main(String[] args) {
    	int[] num = new int[10];
    	num[0] = 8;
    	num[1] = 33;
    	num[2] = 200;
    	num[3] = 150;
    	num[4] = 11;
    	num[5] = 88;
    	num[6] = num[2] * 10;
    	num[7] = num[2] / 10;
    	num[8] = num[0] + num[1] + num[2];
    	num[9] = num[8];
    	
        System.out.println("El array num contiene los siguientes elementos:");
    	
        for (int i = 0; i < 10; i++) {
    	    System.out.print(num[i] + " ");
    	}
    }
}

// ARRAY 3; en forma de matrices (array bidimensionales)
public class array3 {

	static Scanner entrada = new Scanner (System.in);
    public static void main(String[] args) {
    		int fila, columna;
    		int[][] n = {{20, 4}, {67, 33}, {0,7}};

    		for(fila = 0; fila < 3; fila++) {
    		    System.out.print("Fila: " + fila);
                for(columna = 0; columna < 2; columna++) {
                    System.out.printf("%10d ", n[fila][columna]);
    		}
    		System.out.println();
    	}
    }
}

/* JUEGO DEL TESORO
Se colocan una mina y un tesoro de forma aleatoria en un cuadrante de
cuatro filas por cinco columnas. El usuario intentará averiguar dónde está el tesoro.
*/
import java.util.Scanner;
public class juegoTesoro {

    static Scanner entrada = new Scanner(System.in);

    static final int VACIO = 0;
    static final int MINA = 1;
    static final int TESORO = 2;
    static final int INTENTO = 3;

    public static void main(String[] args) {
        int x;
        int y;
        int[][] cuadrante = new int[5][4];

        // inicializa el array
        for (x = 0; x < 4; x++) {
            for (y = 0; y < 3; y++) {
                cuadrante[x][y] = VACIO;
            }
        }

        // coloca la mina
        int minaX = (int) (Math.random() * 4);
        int minaY = (int) (Math.random() * 3);
        cuadrante[minaX][minaY] = MINA;

        // coloca el tesoro
        int tesoroX;
        int tesoroY;

        do {
            tesoroX = (int) (Math.random() * 4);
            tesoroY = (int) (Math.random() * 3);
        } while ((minaX == tesoroX) && (minaY == tesoroY));

        cuadrante[tesoroX][tesoroY] = TESORO;

        // juego
        System.out.println("¡BUSCA EL TESORO!");
        boolean salir = false;
        String c = "";

        do {
            // pinta el cuadrante
            for (y = 3; y >= 0; y--) {
                System.out.print(y + "|");
                for (x = 0; x < 5; x++) {
                    if (cuadrante[x][y] == INTENTO)
                        System.out.print("X ");
                    else
                        System.out.print("  ");
                }
                System.out.println();
            }

            System.out.println(" ----------\n 0 1 2 3 4\n");

            // pide las coordenadas
            System.out.print("Coordenada x: ");
            x = Integer.parseInt(entrada.nextLine());
            System.out.print("Coordenada y: ");
            y = Integer.parseInt(entrada.nextLine());

            // mira lo que hay en las coordenadas indicadas por el usuario
            switch (cuadrante[x][y]) {
                case VACIO:
                    cuadrante[x][y] = INTENTO;
                    break;
                case MINA:
                    System.out.println("Lo siento, has perdido.");
                    salir = true;
                    break;
                case TESORO:
                    System.out.println("Enhorabuena, has encontrado el tesoro.");
                    salir = true;
                    break;
                default:
                    break;
            }
        } while (!salir);

        // pinta el cuadrante final
        for (y = 3; y >= 0; y--) {
            System.out.print(y + " ");
            for (x = 0; x < 5; x++) {
                switch (cuadrante[x][y]) {
                    case VACIO:
                        c = "  ";
                        break;
                    case MINA:
                        c = "* ";
                        break;
                    case TESORO:
                        c = "€ ";
                        break;
                    case INTENTO:
                        c = "x ";
                        break;
                    default:
                        c = "  ";
                }
                System.out.print(c);
            }
            System.out.println();
        }
        System.out.println(" ----------\n 0 1 2 3 4\n");
    }
}

// EJERCICIOS
/* ej1; Escribe un programa que lea 10 números por teclado y que luego los muestre
en orden inverso, es decir, el primero que se introduce es el último en
mostrarse y viceversa.*/
public static void main(String[] args) {
    int [] array = new int[10];
    
    System.out.println("Introduce 10 números: ");
    for (int j = 0; j < array.length; j++) {
        System.out.print("Numero " + (j+1) + ": ");
        array[j] = entrada.nextInt();
    }
    
    System.out.print("Orden normal: ");
    for (int i = 0; i < array.length; i++) {
        System.out.print(array[i] + " ");
    }
    
    System.out.print("Orden inverso: ");
    for (int i = 9; i >= 0; i--) {
        System.out.print(array[i] + " ");
    }  
}

/* ej2; Escribe un programa que pida 10 números por teclado y que luego muestre
los números introducidos junto con las palabras “máximo” y “mínimo” al lado
del máximo y del mínimo respectivamente. */
public static void main(String[] args) {
    int[] numeros = new int[10];
    
    // Pedir 10 números
    System.out.println("Introduce 10 números:");
    for (int i = 0; i < 10; i++) {
        System.out.print("Número " + (i + 1) + ": ");
        numeros[i] = entrada.nextInt();
    }
    
    // Encontrar el máximo y el mínimo
    int max = numeros[0];
    int min = numeros[0];
    
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
        if (numeros[i] < min) {
            min = numeros[i];
        }
    }
    
    // Mostrar los números junto con máximo y mínimo
    System.out.println("\nNúmeros introducidos:");
    for (int i = 0; i < 10; i++) {
        System.out.print(numeros[i]);
        
        // Mostrar "máximo" o "mínimo" al lado del número correspondiente
        if (numeros[i] == max) {
            System.out.print(" (máximo)");
        } else if (numeros[i] == min) {
            System.out.print(" (mínimo)");
        }
        
        System.out.println();
    }
}

/* ej3; Realiza un programa que pida 8 números enteros y que luego muestre esos
números junto con la palabra “par” o “impar” según proceda. */
public static void main(String[] args) {
    int[] numeros = new int[8];
    
    // Pedir 8 números
    System.out.println("Introduce 8 números enteros:");
    for (int i = 0; i < 8; i++) {
        System.out.print("Número " + (i + 1) + ": ");
        numeros[i] = entrada.nextInt();
    }
    
    // Mostrar los números con "par" o "impar"
    System.out.println("\nNúmeros introducidos:");
    for (int i = 0; i < 8; i++) {
        System.out.print(numeros[i]);
        
        // Verificar si el número es par o impar
        if (numeros[i] % 2 == 0) {
            System.out.print(" (par)");
        } else {
            System.out.print(" (impar)");
        }
        System.out.println();
    }
}

/* ej4; juego del tres en raya*/
public class juego2 {

    static Scanner entrada = new Scanner(System.in);
    
    static char[][] tablero = new char[3][3];  // Tablero de 3x3
    static char jugador = 'X';  // El primer jugador es 'X'
    static boolean juegoActivo = true;  // Bandera para continuar el juego
    
    public static void main(String[] args) {
    	// Inicializamos el tablero con espacios vacíos
        inicializarTablero();

        // Bucle principal del juego
        while (juegoActivo) {
            mostrarTablero();
            int fila, columna;

            // Pedir al jugador la fila y columna
            System.out.println("Jugador " + jugador + "elige el movimiento: ");
            System.out.print("Fila (0, 1, 2): ");
            fila = entrada.nextInt();
            System.out.print("Columna (0, 1, 2): ");
            columna = entrada.nextInt();

            // Validar la jugada
            if (fila >= 0 && fila < 3 && columna >= 0 && columna < 3 && tablero[fila][columna] == ' ') {
                // Realizar el movimiento
                tablero[fila][columna] = jugador;

                // Comprobar si hay ganador
                if (comprobarGanador()) {
                    mostrarTablero();
                    System.out.println("¡El jugador " + jugador + " ha ganado!");
                    juegoActivo = false;
                } else if (esEmpate()) {
                    mostrarTablero();
                    System.out.println("¡Empate!");
                    juegoActivo = false;
                } else {
                    // Cambiar de jugador
                    jugador = (jugador == 'X') ? 'O' : 'X';
                }
            } else {
                System.out.println("Movimiento inválido, intenta nuevamente.");
            }
        }
    }

    // Inicializa el tablero con espacios vacíos
    public static void inicializarTablero() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                tablero[i][j] = ' ';
            }
        }
    }

    // Muestra el tablero en la consola
    public static void mostrarTablero() {
        System.out.println("-------------");
        for (int i = 0; i < 3; i++) {
            System.out.print("| ");
            for (int j = 0; j < 3; j++) {
                System.out.print(tablero[i][j] + " | ");
            }
            System.out.println();
            System.out.println("-------------");
        }
    }

    // Comprueba si hay un ganador
    public static boolean comprobarGanador() {
        // Comprobar filas y columnas
        for (int i = 0; i < 3; i++) {
            if ((tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2] && tablero[i][0] != ' ') ||
                (tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i] && tablero[0][i] != ' ')) {
                return true;
            }
        }

        // Comprobar diagonales
        if ((tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] && tablero[0][0] != ' ') ||
            (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] && tablero[0][2] != ' ')) {
            return true;
        }

        return false;
    }

    // Comprueba si hay empate
    public static boolean esEmpate() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (tablero[i][j] == ' ') {
                    return false;  // Hay una casilla vacía, por lo que no es empate
                }
            }
        }
        return true;  // No hay casillas vacías, es empate
        
    }
}