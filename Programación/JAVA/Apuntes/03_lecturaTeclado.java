/* Librería para poder hacer la entrada de texto global*/ 
import java.util.Scanner;

/* LECTURA DE TEXTO */
public class LecturaTexto {
	public static void main(String[] args) {
		String nombre;
		System.out.println("Introduzca su nombre(cadena)");
		
        // Creamos un objeto, empezando con el nombre de la clase, el nombre que le queremos dar al objeto y lo igualamos a la palabra reservada new y el siguiente scanner es un constructor (es el cómo vamos a utilizar ese objeto, por ejemplo, tenemos la clase objeto de alumno y este tiene ciertas características) por lo que cuando el alumno llega al colegio y le quieren dar de alta, simplemente mete el nia y ya está todo guardado ahí), por lo que el nia es el system.in
		Scanner entrada= new Scanner(System.in);
        
        // aquí es en donde lo llegamos a usar el scanner, por lo que en nuestra variable nombre estaremos guardando datos
        nombre=entrada.nextLine(); // pero el next solo acepta cadenas, entonces si quiero meter un valor entero sería nextInt (igual con float = nextFloat)
		
        System.out.println("Hola, " + nombre);

		// si hemos abierto un canal hacia el exterior, en este caso, recibir datos del teclado, pues lo suyo es cerrarlo
		entrada.close();
	}
}

/* LECTURA DE NÚMEROS */
public class LecturaEnteros {

	public static void main(String[] args) {
		String nombre;
		System.out.println("Introduzca su nombre(cadena)");

		Scanner entrada= new Scanner(System.in);
		nombre=entrada.nextLine(); 
		System.out.println("Hola, " + nombre);
		
		System.out.println("Introduzca edad");
		int edad=entrada.nextInt();
		// para limpiar el buffer ya que al introducir el número, nextInt solo se come el nº, no el \n, por lo que al llegar a apellido detectará que hay un \n y no esperará que el usuario introduzca ningún dato
        entrada.nextLine(); 
		System.out.println("Edad, " + edad);
		
		System.out.println("Introduzca apellido");
		String apellido=entrada.nextLine();
		System.out.println("Apellido, " + apellido);
		
		entrada.close();
	}
}
/* EJERCICIOS */

/*
Escribe un programa que calcule el precio final de un producto según su base imponible (precio antes de impuestos), 
el tipo de IVA aplicado (general, reducido o superreducido) y el código promocional. Los tipos de IVA general, reducido y superreducido
son del 21%, 10% y 4% respectivamente. Los códigos promocionales pueden ser nopro, mitad, meno5 o 5porc que significan
respectivamente que no se aplica promoción, el precio se reduce a la mitad, se descuentan 5 euros o se descuenta el 5%. 
El ejercicio se da por bueno si se muestran los valores correctos, aunque los números no estén tabulados.
*/
public class ejercicio1 {

    static Scanner entrada = new scanner(System.in);
	public static void main(String[] args) {
        System.out.print("Introduce la base imponible (precio antes de impuestos): ");
        double baseImponible = entrada.nextDouble();
        
        System.out.print("Introduce el tipo de IVA (general, reducido o superreducido): ");
        String tipoIVA = entrada.next().toLowerCase();
        
        double iva = 0;
        switch (tipoIVA) {
            case "general":
                iva = 0.21;
                break;
            case "reducido":
                iva = 0.10;
                break;
            case "superreducido":
                iva = 0.04;
                break;
            default:
                System.out.println("Tipo de IVA no válido. Se aplicará el IVA general.");
                iva = 0.21;
        }

        // Calcular el precio con IVA
        double precioConIVA = baseImponible * (1 + iva);
        
        // Solicitar código promocional
        System.out.print("Introduce el código promocional (nopro, mitad, meno5, 5porc): ");
        String codigoPromo = entrada.next().toLowerCase();
        
        double descuento = 0;
        switch (codigoPromo) {
            case "nopro":
                descuento = 0;
                break;
            case "mitad":
                descuento = precioConIVA / 2;
                break;
            case "meno5":
                descuento = 5;
                break;
            case "5porc":
                descuento = precioConIVA * 0.05;
                break;
            default:
                System.out.println("Código promocional no válido. No se aplicará descuento.");
                descuento = 0;
        }

        // Calcular precio final
        double precioFinal = precioConIVA - descuento;
        
        // Mostrar los resultados
        System.out.println("Base imponible: " + baseImponible + " €");
        System.out.println("IVA aplicado: " + (iva * 100) + "%");
        System.out.println("Precio con IVA: " + precioConIVA + " €");
        System.out.println("Descuento aplicado: " + descuento + " €");
        System.out.println("Precio final: " + precioFinal + " €");
        
        entrada.close();
    }
}

/*
Realiza un programa que calcule la nota que hace falta sacar en el segundo
examen de la asignatura Programación para obtener la media deseada. Hay
que tener en cuenta que la nota del primer examen cuenta el 40% y la del
segundo examen un 60%. 
*/
public class ejercicio2 {
    public static void main(String[] args) {
        System.out.print("Introduce la nota del primer examen: ");
        double notaPrimerExamen = entrada.nextDouble();
        
        // Solicitar la nota media deseada
        System.out.print("Introduce la nota media deseada: ");
        double notaDeseada = entrada.nextDouble();
        
        // Calcular la nota necesaria en el segundo examen
        double notaSegundoExamen = (notaDeseada - (notaPrimerExamen * 0.4)) / 0.6;
        
        // Mostrar el resultado
        System.out.println("Para obtener una media de " + notaDeseada + " necesitas sacar " + notaSegundoExamen + " en el segundo examen.");
        
        entrada.close();
    }
}
