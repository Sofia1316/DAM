
public class Administracion extends Persona{
	String estudios;
	int antiguedad;
	
	public Administracion(String dni, String nombre, String apellido, double salario, String estudios, int antiguedad) {
		super(dni, nombre, apellido, salario);
		this.estudios = estudios;
		this.antiguedad = antiguedad;
	}

	public String getEstudios() {
		return estudios;
	}

	public void setEstudios(String estudios) {
		this.estudios = estudios;
	}

	public int getAntiguedad() {
		return antiguedad;
	}

	public void setAntiguedad(int antiguedad) {
		this.antiguedad = antiguedad;
	}

	@Override
	public String toString() {
		return "Detalles del empleado:\n" +
		           "- Estudios: " + estudios + "\n" +
		           "- Antigüedad: " + antiguedad + " años\n" +
		           "- DNI: " + dni + "\n" +
		           "- Nombre: " + nombre + "\n" +
		           "- Apellido: " + Apellido + "\n" +
		           "- Salario: " + salario;
	}
	
}
