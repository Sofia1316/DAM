// ENTEROS Y LONG
public class VariablesEnteras {
    public static void main(String[] args) {
        int x; // Se declara la variable x como entera

        x = 5; // Se asigna el valor 5 a la variable x
        System.out.println("El valor actual de mi variable es " + x);

        x = 7; // Se asigna el valor 7 a la variable x
        System.out.println("y ahora es " + x);
    }
}

// DOUBLE Y FLOAT
public class VariablesConDecimales {
    public static void main(String[] args) {
        double x; // Se declaran las variables x e y
        double y; // de tal forma que puedan almacenar decimales.

        x = 7; // se pueden almacenar enteros en variables de tipo double
        y = 25.01;

        System.out.println(" x vale " + x);
        System.out.println(" y vale " + y);
    }
}

// CADENA DE CARACTERES - string
public class UsoDeStrings {
    public static void main(String[] args) {
        String miPalabra = "cerveza";
        String miFrase = "¿dónde está mi cerveza?";
        
        System.out.println("Una palabra que uso con frecuencia: " + miPalabra);
        System.out.println("Una frase que uso a veces: " + miFrase);
    }
}
