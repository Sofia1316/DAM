import java.util.Scanner;

/*
Crea un programa en JAVA que lea por teclado una cadena de texto e indique la cantidad de 
palabras que tiene. De la clase String, únicamente se pueden utilizar los métodos charAt(), trim() 
y length().
*/
public class ejerciciosStrings03 {

    static Scanner entrada = new Scanner(System.in);

    public static void main(String[] args) {
        String cadena;
        int contador = 0;
        boolean palabra = false; // Indicador para saber si estamos dentro de una palabra
        
        System.out.println("Introduce una frase: ");
        cadena = entrada.nextLine();
        
        cadena = cadena.trim(); // Eliminamos los espacios
        
        // Recorrer la cadena
        for (int i = 0; i < cadena.length(); i++) {
            char caracter = cadena.charAt(i);
            
            // Si no encontramos un espacio y no estamos en una palabra
            if (caracter != ' ' && !palabra) {
                contador++; 
                palabra = true; 
            } else if (caracter == ' ') {
                palabra = false; // Si encontramos un espacio, ya no estamos en una palabra
            }
        }

        // Mostrar el número de palabras
        System.out.println("La cadena tiene: " + contador + " palabras.");
        entrada.close();
    }
}