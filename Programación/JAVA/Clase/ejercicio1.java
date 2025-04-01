
public class ejercicio1 {
	public static void main(String[] args){
		int n=0,s=0;
		boolean suspensos;
		suspensos = false;
		int[] notas = {4,5,8,1,10};
		
		for (int i = 0; i < 5; i++){ // bucle que da vuelta de 0 a 4
			//System.out.println("Introduzca una nota de 0 a 10");
			
			n=notas[i];
			if(n < 5) {
				suspensos=true;
				s++;
			}
		}
		
		if(suspensos) {
			System.out.println("Hay alumnos suspensos " + s);
		} else {
			System.out.println("No hay alumnos suspensos");
		}
	}
}	
