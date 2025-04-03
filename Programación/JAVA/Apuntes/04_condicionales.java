// IF - ELSE
/*
if (condición) {
    instrucciones a ejecutar si la condición es verdadera
} else {
    instrucciones a ejecutar si la condición es falsa
}
*/

public class SentenciaIf01 {
    public static void main(String[] args) {
        System.out.print("¿Cuál es la capital de Kiribati? ");
        String respuesta = System.console().readLine();

        if (respuesta.equals("Tarawa")) {
            System.out.println("¡La respuesta es correcta!");
        } else {
            System.out.println("Lo siento, la respuesta es incorrecta.");
        }
    }
}

public class SentenciaIf02 {
    public static void main(String[] args) {
        System.out.print("Por favor, introduce un número entero: ");
        String linea = System.console().readLine();
        int x = Integer.parseInt( linea );
        
        if (x < 0) {
            System.out.println("El número introducido es negativo.");
        } else {
            System.out.println("El número introducido es positivo.");
        }
    }
}

public class SentenciaIf03 {
    public static void main(String[] args) {
        System.out.println("Adivina el número que estoy pensando.");
        System.out.print("Introduce un número entre el 1 y el 100: ");
        String linea = System.console().readLine();
        int n = Integer.parseInt( linea );
        
        if ((n < 1) || (n > 100)) {
            System.out.println("El número introducido debe estar en el intervalo 1 - 100.");
            System.out.print("Tienes otra oportunidad, introduce un número: ");

            linea = System.console().readLine();
            n = Integer.parseInt( linea );
        }
        
        if (n == 24) {
            System.out.println("¡Enhorabuena!, ¡has acertado!");
        } else {
            System.out.println("Lo siento, ese no es el número que estoy pensando.");
        }
    }
}

// SWITCH
/*
switch(variable) {
    case valor1:
    sentencias
    break;

    case valor2:
    sentencias
    break;
    .
    .
    .
    default:
    sentencias
}
*/

public class MenuConSwitch {
    public static void main(String[] args) {
        System.out.println(" CÁLCULO DE ÁREAS");
        System.out.println(" 1. Cuadrado");
        System.out.println(" 2. Rectángulo");
        System.out.println(" 3. Triángulo");
        System.out.print("\n Elija una opción (1-3): ");

        int opcion = Integer.parseInt(System.console().readLine());
        double lado;
        double base;
        double altura;

        switch (opcion) {
            case 1:
                System.out.print("\nIntroduzca el lado del cuadrado en cm: ");
                lado = Double.parseDouble(System.console().readLine());
                System.out.println("\nEl área del cuadrado es " + (lado * lado) + " cm2");
                break;
            case 2:
                System.out.print("\nIntroduzca la base del rectángulo en cm: ");
                base = Double.parseDouble(System.console().readLine());
                System.out.print("Introduzca la altura del rectángulo en cm: ");
                altura = Double.parseDouble(System.console().readLine());
                System.out.println("El área del rectángulo es " + (base * altura) + " cm2");
                break;
            case 3:
                System.out.print("\nIntroduzca la base del triángulo en cm: ");
                base = Double.parseDouble(System.console().readLine());
                System.out.print("Introduzca la altura del triángulo en cm: ");
                altura = Double.parseDouble(System.console().readLine());
                System.out.println("El área del triángulo es " + ((base * altura) / 2) + " cm2");
                break;
            default:
                System.out.print("\nLo siento, la opción elegida no es correcta.");
        }
    }
}

// EJERCICIOS
public class NotaTrimestre {
    public static void main(String[] args) {
        System.out.print("Introduce la nota del primer control: ");
        double nota1 = scanner.nextDouble();
        
        System.out.print("Introduce la nota del segundo control: ");
        double nota2 = scanner.nextDouble();
        
        double media = (nota1 + nota2) / 2;
        
        // Verificar si la media es suficiente para aprobar
        if (media >= 5) {
            System.out.println("Estás aprobado con una media de: " + media);
        } else {
            // Preguntar si ha aprobado la recuperación
            System.out.print("¿Cuál ha sido el resultado de la recuperación? (apto/no apto): ");
            String recuperacion = scanner.next().toLowerCase();
            
            if (recuperacion.equals("apto")) {
                media = 5;
                System.out.println("Has aprobado la recuperación. Tu nota final es: " + media);
            } else {
                System.out.println("No has aprobado la recuperación. Tu nota final es: " + media);
            }
        }
        
        scanner.close();
    }
}