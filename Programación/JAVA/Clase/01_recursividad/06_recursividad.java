/* Crea un método que obtenga la suma de los números naturales desde 1 hasta N. 
Se debe pasar como parámetro el número N, debe ser mayor que cero. 
Se debe imprimir toda la cadena por consola. Por ejemplo, para N=4 → ( 1+2+3+4 = 10)*/
package recursividad;

public class recursividad07 {

	public static void main(String[] args) {
		System.out.println("Suma de 1 a 5: "+ suma(5));

	}
	
	public static int suma(int n) {
		if(n==1) {
			return 1;
		}
		
		int sum = suma(n-1);
		return sum + n;
	}

}
