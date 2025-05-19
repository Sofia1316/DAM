package POO3;

public class empleados {
	private String nombre;
	private int permanencia;
	private double salario;
	private int porcentaje = 5;
	
	public empleados(String nombre, int permanencia, double salario) {
		super();
		this.nombre = nombre;
		this.permanencia = permanencia;
		this.salario = salario;
	}
	public empleados() {
		super();
	}
	
	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public int getPermanencia() {
		return permanencia;
	}
	public void setPermanencia(int permanencia) {
		this.permanencia = permanencia;
	}
	public double getSalario() {
		return salario;
	}
	public void aumentarSalario(int porcentaje) {
        salario = salario + salario * porcentaje / 100.0;
    }
	
	private String perm() {
		if(this.permanencia<=3) {
			return "(principiante)";
		} else if (this.permanencia>3 && this.permanencia<18) {
			return "(intermedio)";
		} else {
			return "(senior)";
		}
	}
	
	@Override
	public String toString() {
		return nombre + " tiene de permanencia " + permanencia + perm() + " con salario bruto " + salario 
				+ " y con el porcentaje "+ getPorcentaje();
	}
	public int getPorcentaje() {
		return porcentaje;
	}
	public void setPorcentaje(int porcentaje) {
		this.porcentaje = porcentaje;
	}
	
	/*
	private static void perm() {
		if(permanencia < 3) {
			System.out.println("Principiante");
		} else if(permanencia > 3 && permanencia < 18) {
			System.out.println("Junior");
		} else {
			System.out.println("Senior)");
		}
	}*/
}
