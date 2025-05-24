package POO2;

public class persona {
	String dni;
	String nombre;
	String Apellido;
	double salario;
	
	public persona(String dni, String nombre, String apellido, double salario) {
		super();
		this.dni = dni;
		this.nombre = nombre;
		Apellido = apellido;
		this.salario = salario;
	}

	public String getDni() {
		return dni;
	}

	public void setDni(String dni) {
		this.dni = dni;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getApellido() {
		return Apellido;
	}

	public void setApellido(String apellido) {
		Apellido = apellido;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	@Override
	public String toString() {
		return "dni=" + dni + ", nombre=" + nombre + ", Apellido=" + Apellido + ", salario=" + salario;
	}
	
}
