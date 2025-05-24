package POO3;

public class empresa {

	public static void main(String[] args) {
		empleados[] em = new empleados[3];
		
		em[0] = new empleados("Pedro", 10, 1500.0);
		em[1] = new empleados("Laura", 1, 500.0);
		em[2] = new empleados("Sabrina", 23, 3500.0);
		
		System.out.println("SALARIO BRUTO: ");
		imprimir(em);
		
		for (empleados e : em) {
            e.aumentarSalario(e.getPorcentaje());
        }
		
		System.out.println("\nSALARIO CON AUMENTO: ");
		imprimir(em);

	}
	
	static public void imprimir(empleados[] em) {
		System.out.println("Empleados");
		for (int i = 0; i < em.length; i++) {
			System.out.println("\t Empleado " + (i+1) + ": " + em[i]);
		}
	}
}
