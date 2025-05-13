package polimorfismo;

public class Empleado extends Persona{

	int numEmpleado;
	String cargo;
	double sueldo;
	
	public Empleado(int id, String dni, String nombre, String apellido, String domicilio, String telefono,
			int numEmpleado, String cargo, double sueldo) {
		super(id, dni, nombre, apellido, domicilio, telefono); // llamamos al padre
		this.numEmpleado = numEmpleado;
		this.cargo = cargo;
		this.sueldo = sueldo;
	}
	public Empleado() {
	}

	public int getNumEmpleado() {
		return numEmpleado;
	}

	public void setNumEmpleado(int numEmpleado) {
		this.numEmpleado = numEmpleado;
	}

	public String getCargo() {
		return cargo;
	}

	public void setCargo(String cargo) {
		this.cargo = cargo;
	}

	public double getSueldo() {
		return sueldo;
	}

	public void setSueldo(double sueldo) {
		this.sueldo = sueldo;
	}

}
