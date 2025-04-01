import java.util.Scanner;

/*
Dada una secuencia de números enteros acabada en 0, obtener la suma de aquellos números tales 
que su número de cifras sea igual a la suma de las mismas. No se pueden utilizar Arrays.
*/

public class ejercicio4 {
        
static Scanner entrada = new Scanner(System.in); 

    public static void main(String[] args) {
        int suma = 0; 
        int num = 0;
        
        System.out.println("Introduce números (0 para acabar): ");
                
        while ((num = entrada.nextInt()) != 0) {
            int sumaCifras = 0;
            int digitos = 0;
            int temp = num;
            
            while (temp > 0) {
                sumaCifras += temp % 10;
                temp /= 10;
                digitos++;
            }
            
            if (sumaCifras == digitos) {
                suma += num;
            }
        }
        
        System.out.println("Suma total: " + suma);
        entrada.close();
    }
}      