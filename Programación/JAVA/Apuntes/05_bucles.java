import java.util.Scanner;

public class 05_bucles {
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
        String respuesta = "s";

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
    }
}

// EJERCICIOS

//ej1: Muestra los números múltiplos de 5 de 0 a 100 utilizando todos los bucles
// FOR
for (int i = 0; i <= 100 ; i+=5) {
    System.out.print(i + " ");
}
// WHILE
int indicador = 0;
while(indicador <= 100) {
    System.out.print(indicador);
    indicador+=5;
}
// DO-WHILE
int indicador = 0;
do {
    System.out.print(indicador);
    indicador+=5;
} while(indicador <= 100);

// ej2: Muestra los números del 320 al 160, contando de 20 en 20 hacia atrás utilizando todos los bucles
// FOR
for (int i = 320; i >= 160; i-=20) {
    System.out.println(i + " ");
}
// WHILE
int indicador=320;
while(indicador >= 160) {
    System.out.println(indicador);
    indicador -= 20;
}
// DO-WHILE
int indicador=320;
do {
    System.out.println(indicador);
    indicador -= 20;
} while (indicador >= 160);

// ej3: Realiza un programa que nos diga cuántos dígitos tiene un número introducido por teclado.
int numero = 0;
while (true) { // Control de errores: solo se aceptan números enteros positivos o negativos
    System.out.print("Introduce un número entero: ");
    if (entrada.hasNextInt()) {
        numero = entrada.nextInt();
        break;
    } else {
        System.out.println("Entrada no válida. Intenta de nuevo.");
        entrada.next(); // limpia entrada incorrecta
    }
}
// Con el valueOf convertimos el número en String para contar los dígitos
int digitos = String.valueOf(numero).length();
System.out.println("El número tiene " + digitos + " dígitos");

/* ej4: Escribe un programa que calcule la media de un conjunto de números positivos
introducidos por teclado. A priori, el programa no sabe cuántos números se
introducirán. El usuario indicará que ha terminado de introducir los datos
cuando meta un número negativo. */
int numero;
int suma = 0;
int cantidad = 0;

System.out.println("Introduce números positivos. Introduce un número negativo para terminar:");

while (true) { // control de errores
    System.out.print("Número: ");
    if (entrada.hasNextInt()) { // si lo que meto es un número
        numero = entrada.nextInt();
        if (numero < 0) {
            break;
        }
        suma += numero; // añado a suma el número
        cantidad++; // aumento el contador
    } else {
        System.out.println("Entrada no válida. Por favor, introduce un número entero.");
        entrada.next(); // limpia entrada incorrecta
    }
}

if (cantidad > 0) {
    int media = suma / cantidad;
    System.out.println("Cantidad de números positivos: " + cantidad);
    System.out.println("La media es: " + media);
} else {
    System.out.println("No se introdujeron números positivos");
}

/* ej5: Escribe un programa que muestre los n primeros términos de la serie de
Fibonacci. El primer término de la serie de Fibonacci es 0, el segundo es 1
y el resto se calcula sumando los dos anteriores, por lo que tendríamos que
los términos son 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144... El número n se
debe introducir por teclado. */
int n = 0;
// Pedir un número entero positivo
do {
    System.out.print("¿Cuántos números de la serie de Fibonacci quieres ver?: ");
    if (entrada.hasNextInt()) {
        n = entrada.nextInt();
        if (n <= 0) {
            System.out.println("Por favor, introduce un número mayor que 0.");
        }
    } else {
        System.out.println("Entrada no válida. Debes introducir un número entero.");
        entrada.next(); // Limpiar entrada incorrecta
    }
} while (n <= 0);

// Mostrar la serie de Fibonacci
int a = 0, b = 1;

System.out.println("Serie Fibonacci:");
for (int i = 1; i <= n; i++) {
    System.out.print(a + " ");
    int siguiente = a + b;
    a = b;
    b = siguiente;
}

/* ej6: Escribe un programa que diga si un número introducido por teclado es o no
primo. Un número primo es aquel que sólo es divisible entre él mismo y la
unidad. */
int numero = 0;
do { // control de errores
    System.out.print("Introduce un número entero positivo: ");
    if (entrada.hasNextInt()) {
        numero = entrada.nextInt();
        if (numero <= 0) {
            System.out.println("Debe ser un número mayor que 0.");
        }
    } else {
        System.out.println("Entrada no válida. Debes introducir un número entero.");
        entrada.next(); // limpiar entrada no válida
    }
} while (numero <= 0);

boolean primo = true;
if (numero == 1) {
    primo = false;
} else {
    for (int i = 2; i < numero; i++) { // Solo probamos hasta el número-1
        if (numero % i == 0) {
            primo = false;
            break; // Si encontramos un divisor, no es primo
        }
    }
}

if (primo) {
    System.out.println(numero + " es un número primo.");
} else {
    System.out.println(numero + " NO es un número primo.");
}

/* ej7: Realiza un programa que vaya pidiendo números hasta que se introduzca un
numero negativo y nos diga cuantos números se han introducido, la media de
los impares y el mayor de los pares. El número negativo sólo se utiliza para
indicar el final de la introducción de datos pero no se incluye en el cómputo.*/
int numero = 0;
int contador = 0;
int sumaImpares = 0;
int cuentaImpares = 0;
int mayorPar = -1;
int media = 0;

while (true) {
    System.out.print("Introduce un número (negativo para salir): ");
    
    if (entrada.hasNextInt()) {
        numero = entrada.nextInt();
        if (numero < 0) break;
        contador++;
    } else {
        System.out.println("Error: debes introducir un número entero.");
        entrada.next(); // limpia lo incorrecto
        continue;
    }

    if (numero % 2 == 0) { // si el número es divisible por 2
        if (numero > mayorPar) { // y el número es mayor que -1 en un inicio (número más pequeño al inicio del programa)
            mayorPar = numero; // el nuevo número mayor reemplaza al -1
        }
    } else { // si no es divisible por 2, se añadirá el número al recuento de números impares, se hará la suma y su media
        sumaImpares += numero;
        cuentaImpares++;
        media = (sumaImpares / cuentaImpares);
    }
}

System.out.println("\nTotal de números introducidos: " + contador);

if (cuentaImpares > 0) {
    System.out.println("Media de los impares: " + media);
} else {
    System.out.println("No se introdujeron impares.");
}

if (mayorPar != -1) {
    System.out.println("Número par mayor: " + mayorPar);
} else {
    System.out.println("No hay pares");
}

/* ej8: Realiza un programa que pinte la letra L por pantalla hecha con asteriscos. El
programa pedirá la altura. El palo horizontal de la L tendrá una longitud de la
mitad (división entera entre 2) de la altura más uno.*/
int altura;
while (true) {
    System.out.print("Introduce la altura de la letra L: ");
    if (entrada.hasNextInt()) {
        altura = entrada.nextInt();
        if (altura > 0) break;
        else System.out.println("La altura debe ser mayor que 0.");
    } else {
        System.out.println("Entrada no válida. Introduce un número entero.");
        entrada.next(); // limpia entrada incorrecta
    }
}
// Parte vertical
for (int i = 1; i < altura; i++) {
    System.out.println("*");
}
// Parte horizontal
int ancho = (altura / 2) + 1;
for (int i = 0; i < ancho; i++) {
    System.out.print("*");
}

/* Realiza un programa que pinte la letra U por pantalla hecha con asteriscos. El
programa pedirá la altura. Fíjate que el programa inserta un espacio y pinta
dos asteriscos menos en la base para simular la curvatura de las esquinas
inferiores. */
int altura;
while (true) {
    System.out.print("Introduce la altura de la letra U (≥ 3): ");
    if (entrada.hasNextInt()) {
        altura = entrada.nextInt();
        if (altura >= 3) break;
        else System.out.println("La altura debe ser 3 o mayor.");
    } else {
        System.out.println("Entrada no válida. Introduce un número entero.");
        entrada.next(); // limpiar entrada incorrecta
    }
}

// Parte vertical
for (int i = 1; i < altura; i++) {
    System.out.print("*"); // lado izquierdo
    for (int j = 0; j < altura - 2; j++) { // hueco entre columnas
        System.out.print(" ");
    }
    System.out.println("*"); // lado derecho
}

// Parte inferior (base de la U)
System.out.print(" "); // curvatura de la u
for (int i = 0; i < altura - 2; i++) {
    System.out.print("*");
}