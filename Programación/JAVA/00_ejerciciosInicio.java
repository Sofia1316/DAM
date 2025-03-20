// Sofía lópez del sastre

// EJERCICIOS 20_03_25
// DECLARACIONES
//SEÑALA LAS CORRECTAS (EN VERDE PONDRÉ LAS CORRECTAS)

// PARTE 1

1.
	a int base = 4; altura = 6; // no
	b char letra-1, letra-2; // no
	c boolean realizado = “false”; // no
	d boolean realizado = true; //bien
	e int num = 10.5; // no
	f int 2partes = 5;
// la f está mal porque no se pueden poner un número delante de una declaración
2.
	a int area = 4, perimetro; //bien
	b char letra_1, letra_2; //bien
	c boolean realizado = FALSE; // no
	d boolean realizado = true //no
	e float f2 = 10.5;
	// este está mal porque debería de ser así float f2 = 10.5f;
	f double d2 = 10.002D;
	// este está bien porque a pesar de que la d está en mayus, es válido
	g byte num = 128;
	// está mal porque solo es válido el byte hasta el 127

3.
	int a2 = 5; // bien
	int 2a = 10; // no
	int nombre-2 = 20; //no 

INDICA LA SALIDA DE CADA SYSTEM:

	int resultado = 20; 
	System.out.print("El resultado es"+resultado); 
→ El resultado es20
	System.out.println("El resultado es "+resultado+5); 
→ El resultado es 205  
	System.out.println("El resultado es "+(resultado+5));  
		→ El resultado es 25
	System.out.println(resultado+5);  
		→ 25 (suma literal porque no hay una cadena)


INDICA QUE VALOR TENDRÍAN LAS VARIABLES:

1.
	boolean seguir = 3 > 5;
		→ False
	boolean parar = 7 != 6;  
		→ True
2.
	int cantidad = 10;
	int precio = 50;
	float num = 2.5f;
	float num2 = 10f;

	String s1 = "El total es "+(cantidad+precio);  
		→ El total es 60
	String s2 = "El total es "+cantidad*precio;  
		→ El total es 500
	String s3 = "El total es "+cantidad+precio;  
		→ El total es 1050
	String s4 = cantidad+precio;  
		→ error porque esto es una suma de enteros y no un string
	String s5 = cantidad*precio;  
		→ error porque esto es una multiplicación de enteros y no un string
	String s6 = (cantidad+precio);  
		→ error porque es un cálculo de enteros y no un string
	String s7 = ""+cantidad+precio;  
		→  1050
	String s8 = ""+(cantidad+precio);  
		→  60
	String s9 = "El total es "+(cantidad+num);  
		→ 12.5
	String s10 = "El total es "+(cantidad/3); 
→ El total es 3
	String s11 = "El total es "+(num2/3);  
		→ El total es 3.333333
	String s12 = "El total es "+(cantidad/3f);  
		→ El total es 3.333333
	String s13 = "El total es "+(cantidad/3d); 
		→ El total es 3.333333333333

// PARTE 2

// 4,6,8,1,10

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
