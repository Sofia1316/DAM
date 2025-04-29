import java.util.Scanner;

public class figura00 {
	static Scanner entrada = new Scanner(System.in);
    public static void main(String[] args) {
        int respuesta = -1; //metemos un -1 porque así nos aseguramos que al entrar en la primera línea de if el valor cambia a positivo y así se hace bien la comprobación
        
        System.out.println("¿Qué opción deseas realizar?");
        System.out.println("\t 1. Nº del 1 al 10");
        System.out.println("\t 2. Calcular números positivos");
    	System.out.println("\t 3. Comprobar números pares");
    	
    	System.out.println("Introduce lo que quieres hacer: ");
    	if (entrada.hasNextInt()) { // esta parte se encarga de ver si lo que se mete en la entrada es un número (es como una pregunta)
    	    respuesta = entrada.nextInt(); // como es un número comprobamos que es entre 1-3
    	    entrada.nextLine();
    	    
    	    if (respuesta < 1 || respuesta > 3) {
        	    System.out.println("Debe ser entre 1 y 3");
        	}
    	    
    	} else {
    	    System.out.println("Entrada no válida. Debes introducir un número.");
    	}
    	
    	switch(respuesta) {
    		case 1:
    			bucle1();
    			break;
    		case 2:
    			bucle2();
    			break;
    		case 3:
    			bucle3();
    			break;
    		default:
    			System.out.println("Respuesta no válida");
    			break;
    	}
    }
/*
for (expresion1 ; expresion2 ; expresion3) {
    sentencias
}
*/
    public static void bucle1() {
        for (int i = 1; i < 11; i++) {
            System.out.println(i);
        }
    }

/*
while (expresion) {
    sentencias
}
*/
    public static void bucle2() {
        System.out.println("Ve introduciendo números y pulsando intro");
        System.out.println("Para terminar, introduzca un número negativo.");
        
        int numeroIntroducido = 0;
        int cuentaNumeros = 0;
        int suma = 0;

        while (true) { // bucle infinito hasta que el usuario decida romperlo con un nº impar
        	System.out.print("Introduce un número: ");

            if (entrada.hasNextInt()) { // pregunta si el siguiente valor de entrada es un número
                numeroIntroducido = entrada.nextInt(); // si lo es comprobamos que es mayor a 0
                if (numeroIntroducido < 0) {
                    break; // salir del bucle si es negativo
                }
                cuentaNumeros++; // aumentamos su cuenta
                suma += numeroIntroducido; // y hacemos la suma de números 
            } else {
                System.out.println("Entrada no válida. Debes meter un número entero.");
                entrada.next(); // limpia la entrada incorrecta (como letras)
            }
        }

        System.out.println("Has introducido " + (cuentaNumeros - 1) + " números positivos.");
        System.out.println("La suma total de ellos es " + (suma - numeroIntroducido));
    }

/*
do {
    sentencias
} while (expresion)
*/

    public static void bucle3(){
        int numero = 0;
        String respuesta = null;

        do {
            System.out.print("Dime un número: ");
            if(entrada.hasNextInt()) {
            	numero = entrada.nextInt();
            } else {
            	System.out.println("Entrada no válida. Debes meter un número entero.");
                entrada.next(); // limpia la entrada incorrecta (como letras)
                continue;
            }
            

            if (numero % 2 == 0) {
                System.out.println("Número par: " + numero);
            } else {
                System.out.println("Número impar. Salida de programa.");
                break; // Salida inmediata si es impar
            }

            entrada.nextLine(); // Limpiar el salto de línea pendiente
            System.out.print("¿Quieres introducir otro número? (s/n): ");
            respuesta = entrada.nextLine();

        } while (respuesta.equals("s"));

        System.out.println("Programa finalizado.");
        entrada.close();
    }
}

// EJERCICIOS

//ej1: Muestra los números múltiplos de 5 de 0 a 100 utilizando todos los bucles
// FOR

// WHILE

// DO-WHILE

// ej2: Muestra los números del 320 al 160, contando de 20 en 20 hacia atrás utilizando todos los bucles
// FOR

// WHILE

// DO-WHILE