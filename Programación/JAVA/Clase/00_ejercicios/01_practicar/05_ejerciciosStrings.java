import java.util.Scanner;

/*
 Crea un programa en JAVA que reciba 5 palabras y luego nos muestre 
 la que  tiene una longitud mayor.
*/

public class ejerciciosStrings02 {
        
static Scanner entrada = new Scanner(System.in); 

    public static void main(String[] args) { 
        int cantidad = 5;
        int contador = 1;
        int longuitud = 0;
        
        String [] palabras = new String[cantidad];

        System.out.println("Introduce 5 palabras:");
        for (int i = 0; i < cantidad; i++) {
            System.out.print("Palabra " + contador + ": ");
            palabras[i] = entrada.nextLine();
            //String limpio = palabras[i].trim();
            contador++;
        }

        String palabraMayor = palabras[0];

        for (int i = 1; i < palabras.length; i++) {
            if (palabras[i].length() > palabraMayor.length()) {
                palabraMayor = palabras[i];
            }
        }
        
        for (int i = 0; i < palabraMayor.length(); i++) {
			char caracter = palabraMayor.charAt(i);
			longuitud++;
			
		}

        System.out.println("La palabra con mayor longitud es: " + palabraMayor);
        System.out.println("Cantidad de caracteres: " + longuitud);
        entrada.close();
    }
} 